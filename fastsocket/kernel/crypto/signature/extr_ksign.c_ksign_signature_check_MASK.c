
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u32 ;
struct shash_desc {int dummy; } ;
struct ksign_signature {scalar_t__* keyid; scalar_t__ version; scalar_t__ timestamp; int sig_class; int* hashed_data; int data; } ;
struct ksign_public_key {scalar_t__ timestamp; int pkey; } ;
typedef int * MPI ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct shash_desc*,int) ;
 int FUNC_2 (struct shash_desc*,int*,int) ;
 int FUNC_3 (struct shash_desc*,int*) ;
 struct ksign_public_key* FUNC_4 (scalar_t__*) ;
 int FUNC_5 (struct ksign_public_key*) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int*,int,int ) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static int FUNC_10(const struct ksign_signature *VAR_6,
     struct shash_desc *VAR_7)
{
 struct ksign_public_key *VAR_8;
 uint8_t VAR_9[VAR_5];
 MPI VAR_10 = ((void*)0);
 int VAR_11 = 0;

 VAR_8 = FUNC_4(VAR_6->keyid);
 if (!VAR_8) {
  FUNC_9("ksign: module signed with unknown public key\n");
  FUNC_9("- signature keyid: %08x%08x ver=%u\n",
         VAR_6->keyid[0], VAR_6->keyid[1], VAR_6->version);
  return -VAR_2;
 }

 if (VAR_8->timestamp > VAR_6->timestamp)
  FUNC_9("ksign:"
         " public key is %lu seconds newer than the signature"
         " [%lx < %lx]\n",
         VAR_8->timestamp - VAR_6->timestamp,
         VAR_8->timestamp, VAR_6->timestamp);


 if (VAR_6->version >= 4)
  FUNC_1(VAR_7, VAR_6->version);
 FUNC_1(VAR_7, VAR_6->sig_class);

 if (VAR_6->version < 4) {
  u32 VAR_12 = VAR_6->timestamp;
  FUNC_1(VAR_7, (VAR_12 >> 24) & 0xff);
  FUNC_1(VAR_7, (VAR_12 >> 16) & 0xff);
  FUNC_1(VAR_7, (VAR_12 >> 8) & 0xff);
  FUNC_1(VAR_7, (VAR_12 >> 0) & 0xff);
 }
 else {
  uint8_t VAR_13[6];
  size_t VAR_14;
  FUNC_1(VAR_7, VAR_4);
  FUNC_1(VAR_7, VAR_1);
  if (VAR_6->hashed_data) {
   VAR_14 = (VAR_6->hashed_data[0] << 8) | VAR_6->hashed_data[1];
   FUNC_2(VAR_7, VAR_6->hashed_data, VAR_14 + 2);
   VAR_14 += 6;
  }
  else {
   VAR_14 = 6;
  }


  VAR_13[0] = VAR_6->version;
  VAR_13[1] = 0xff;
  VAR_13[2] = VAR_14 >> 24;
  VAR_13[3] = VAR_14 >> 16;
  VAR_13[4] = VAR_14 >> 8;
  VAR_13[5] = VAR_14;
  FUNC_2(VAR_7, VAR_13, 6);
 }

 FUNC_3(VAR_7, VAR_9);

 VAR_11 = -VAR_3;
 VAR_10 = FUNC_6((VAR_5 + VAR_0 - 1) /
      VAR_0);
 if (!VAR_10)
  goto cleanup;

 VAR_11 = FUNC_8(VAR_10, VAR_9, VAR_5, 0);
 if (VAR_11 < 0)
  goto cleanup;

 VAR_11 = FUNC_0(VAR_10, VAR_6->data, VAR_8->pkey);

 cleanup:
 FUNC_7(VAR_10);
 FUNC_5(VAR_8);

 return VAR_11;
}
