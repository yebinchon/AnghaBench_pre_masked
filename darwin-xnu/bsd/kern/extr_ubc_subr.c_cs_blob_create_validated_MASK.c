
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef int vm_offset_t ;
typedef scalar_t__ vm_address_t ;
typedef union cs_hash_union {int dummy; } cs_hash_union ;
typedef int uint8_t ;
struct cs_blob {int csb_flags; int csb_reconstituted; unsigned int csb_hash_pageshift; unsigned int csb_hash_pagesize; int csb_hash_pagemask; int csb_end_offset; int csb_start_offset; int csb_cdhash; TYPE_4__* csb_hashtype; scalar_t__ csb_hash_firstlevel_pagesize; int const* csb_entitlements_blob; TYPE_2__ const* csb_cd; scalar_t__ csb_mem_kaddr; int * csb_entitlements; int * csb_teamid; scalar_t__ csb_platform_path; scalar_t__ csb_platform_binary; int csb_signer_type; scalar_t__ csb_mem_offset; scalar_t__ csb_mem_size; } ;
typedef int off_t ;
typedef int hash ;
struct TYPE_8__ {int cs_digest_size; int (* cs_final ) (int *,union cs_hash_union*) ;int (* cs_update ) (union cs_hash_union*,unsigned char const*,int) ;int (* cs_init ) (union cs_hash_union*) ;} ;
struct TYPE_7__ {unsigned int pageSize; int length; int scatterOffset; int version; int codeLimit; int flags; int hashType; } ;
struct TYPE_6__ {int base; } ;
typedef TYPE_1__ SC_Scatter ;
typedef int CS_GenericBlob ;
typedef TYPE_2__ CS_CodeDirectory ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cs_blob*) ;
 scalar_t__ VAR_8 ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (int const*,size_t,TYPE_2__ const**,int const**) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (union cs_hash_union*) ;
 int FUNC_9 (union cs_hash_union*,unsigned char const*,int) ;
 int FUNC_10 (int *,union cs_hash_union*) ;

int
FUNC_11(
 vm_address_t * const VAR_9,
 vm_size_t VAR_10,
 struct cs_blob ** const VAR_11,
    CS_CodeDirectory const ** const VAR_12)
{
 struct cs_blob *VAR_13;
 int VAR_14 = VAR_6;
 const CS_CodeDirectory *VAR_15;
 const CS_GenericBlob *VAR_16;
 union cs_hash_union VAR_17;
 size_t VAR_18;

 if (VAR_11)
     *VAR_11 = ((void*)0);

 VAR_13 = (struct cs_blob *) FUNC_3(sizeof (struct cs_blob));
 if (VAR_13 == ((void*)0)) {
  return VAR_7;
 }


 VAR_13->csb_mem_size = VAR_10;
 VAR_13->csb_mem_offset = 0;
 VAR_13->csb_mem_kaddr = *VAR_9;
 VAR_13->csb_flags = 0;
 VAR_13->csb_signer_type = VAR_3;
 VAR_13->csb_platform_binary = 0;
 VAR_13->csb_platform_path = 0;
 VAR_13->csb_teamid = ((void*)0);
 VAR_13->csb_entitlements_blob = ((void*)0);
 VAR_13->csb_entitlements = ((void*)0);
 VAR_13->csb_reconstituted = 0;


 *VAR_9 = 0;




 VAR_18 = (size_t) VAR_10;
 VAR_14 = FUNC_2((const uint8_t *)VAR_13->csb_mem_kaddr,
          VAR_18, &VAR_15, &VAR_16);
 if (VAR_14) {

  if (VAR_8)
   FUNC_7("CODESIGNING: csblob invalid: %d\n", VAR_14);



  goto out;

 } else {
  const unsigned char *VAR_19;
  uint8_t VAR_20[VAR_2];
  int VAR_21;

  VAR_13->csb_cd = VAR_15;
  VAR_13->csb_entitlements_blob = VAR_16;
  VAR_13->csb_hashtype = FUNC_1(VAR_15->hashType);
  if (VAR_13->csb_hashtype == ((void*)0) || VAR_13->csb_hashtype->cs_digest_size > sizeof(VAR_20))
   FUNC_6("validated CodeDirectory but unsupported type");

  VAR_13->csb_hash_pageshift = VAR_15->pageSize;
  VAR_13->csb_hash_pagesize = (1U << VAR_15->pageSize);
  VAR_13->csb_hash_pagemask = VAR_13->csb_hash_pagesize - 1;
  VAR_13->csb_hash_firstlevel_pagesize = 0;
  VAR_13->csb_flags = (FUNC_5(VAR_15->flags) & VAR_0) | VAR_5;
  VAR_13->csb_end_offset = (((vm_offset_t)FUNC_5(VAR_15->codeLimit) + VAR_13->csb_hash_pagemask) & ~((vm_offset_t)VAR_13->csb_hash_pagemask));
  if((FUNC_5(VAR_15->version) >= VAR_4) && (FUNC_5(VAR_15->scatterOffset))) {
   const SC_Scatter *VAR_22 = (const SC_Scatter*)
    ((const char*)VAR_15 + FUNC_5(VAR_15->scatterOffset));
   VAR_13->csb_start_offset = ((off_t)FUNC_5(VAR_22->base)) * VAR_13->csb_hash_pagesize;
  } else {
   VAR_13->csb_start_offset = 0;
  }

  VAR_19 = (const unsigned char *) VAR_15;
  VAR_21 = FUNC_5(VAR_15->length);

  VAR_13->csb_hashtype->cs_init(&VAR_17);
  VAR_13->csb_hashtype->cs_update(&VAR_17, VAR_19, VAR_21);
  VAR_13->csb_hashtype->cs_final(VAR_20, &VAR_17);

  FUNC_4(VAR_13->csb_cdhash, VAR_20, VAR_1);
 }

    VAR_14 = 0;

out:
    if (VAR_14 != 0) {
        FUNC_0(VAR_13);
        VAR_13 = ((void*)0);
        VAR_15 = ((void*)0);
    }

    if (VAR_11 != ((void*)0)) {
        *VAR_11 = VAR_13;
    }
    if (VAR_12 != ((void*)0)) {
        *VAR_12 = VAR_15;
    }

    return VAR_14;
}
