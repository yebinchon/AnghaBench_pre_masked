
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct chunklist_sig {int dummy; } ;
struct chunklist_pubkey {int isprod; int key; } ;
struct chunklist_hdr {scalar_t__ cl_magic; scalar_t__ cl_file_ver; scalar_t__ cl_chunk_method; scalar_t__ cl_sig_method; int cl_chunk_offset; int cl_sig_offset; int cl_chunk_count; } ;
struct chunklist_chunk {int dummy; } ;
typedef int SHA256_CTX ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,void*,size_t) ;
 struct chunklist_pubkey* VAR_10 ;
 scalar_t__ FUNC_5 (int,int,size_t*) ;
 scalar_t__ FUNC_6 (int ,int,int,size_t*) ;
 scalar_t__ FUNC_7 (size_t,size_t,size_t*) ;
 int FUNC_8 (int ,int ,void*,size_t,int *) ;

__attribute__((used)) static int
FUNC_9(void *VAR_11, size_t VAR_12)
{
 int VAR_13 = 0;
 size_t VAR_14 = 0;
 size_t VAR_15 = 0;
 size_t VAR_16 = 0;
 bool VAR_17 = 0;
 struct chunklist_hdr *VAR_18 = VAR_11;

 if (VAR_12 < sizeof(struct chunklist_hdr)) {
  FUNC_1("no space for header");
  return VAR_6;
 }


 if (VAR_18->cl_magic != VAR_1 ||
   VAR_18->cl_file_ver != VAR_0 ||
   VAR_18->cl_chunk_method != VAR_4 ||
   VAR_18->cl_sig_method != VAR_4) {
  FUNC_1("unrecognized chunklist format");
  return VAR_6;
 }


 if (FUNC_6(VAR_18->cl_chunk_count, sizeof(struct chunklist_chunk), VAR_18->cl_chunk_offset, &VAR_16) ||
   VAR_18->cl_chunk_offset < sizeof(struct chunklist_hdr) || VAR_16 > VAR_12) {
  FUNC_1("invalid chunk_count (%llu) or chunk_offset (%llu)",
    VAR_18->cl_chunk_count, VAR_18->cl_chunk_offset);
  return VAR_6;
 }


 if (FUNC_5(VAR_18->cl_sig_offset, sizeof(struct chunklist_sig), &VAR_15) ||
   VAR_18->cl_sig_offset < sizeof(struct chunklist_hdr) ||
   VAR_18->cl_sig_offset < VAR_16 ||
   VAR_18->cl_sig_offset > VAR_12) {
  FUNC_1("invalid signature offset (%llu)", VAR_18->cl_sig_offset);
  return VAR_6;
 }

 if (VAR_15 > VAR_12 || FUNC_7(VAR_12, VAR_18->cl_sig_offset, &VAR_14) || VAR_14 != VAR_5) {

  return VAR_8;
 }

 FUNC_0("hashing chunklist");


 uint8_t VAR_19[VAR_9];
 SHA256_CTX VAR_20;
 FUNC_3(&VAR_20);
 FUNC_4(&VAR_20, VAR_11, VAR_18->cl_sig_offset);
 FUNC_2(VAR_19, &VAR_20);

 FUNC_0("validating chunklist signature against pub keys");
 for (size_t VAR_21 = 0; VAR_21 < VAR_2; VAR_21++) {
  const struct chunklist_pubkey *VAR_22 = &VAR_10[VAR_21];
  VAR_13 = FUNC_8(VAR_22->key, VAR_3,
    VAR_11 + VAR_18->cl_sig_offset, VAR_14, VAR_19);
  if (VAR_13 == 0) {
   FUNC_0("validated chunklist signature with key %lu (prod=%d)", VAR_21, VAR_22->isprod);
   VAR_17 = VAR_22->isprod;







   goto out;
  } else if (VAR_13 == VAR_7) {

  } else {
   goto out;
  }
 }



 FUNC_1("signature did not verify against any known public key");

out:
 if (VAR_13) {
  return VAR_13;
 } else if (VAR_17 == 1) {
  return 0;
 } else {
  return VAR_6;
 }
}
