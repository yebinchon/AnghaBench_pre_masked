
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_13__ {int type; int offset; } ;
struct TYPE_12__ {int hashType; int flags; } ;
struct TYPE_11__ {int length; int magic; } ;
struct TYPE_10__ {int count; TYPE_4__* index; } ;
typedef TYPE_1__ CS_SuperBlob ;
typedef TYPE_2__ CS_GenericBlob ;
typedef TYPE_3__ CS_CodeDirectory ;
typedef TYPE_4__ CS_BlobIndex ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_2__ const*,size_t) ;
 int FUNC_1 (TYPE_3__ const*,size_t) ;
 unsigned int FUNC_2 (TYPE_3__ const*) ;
 size_t FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int
FUNC_5(
 const uint8_t *VAR_11,
 const size_t VAR_12,
 const CS_CodeDirectory **VAR_13,
 const CS_GenericBlob **VAR_14)
{
 const CS_GenericBlob *VAR_15;
 int VAR_16;
 size_t VAR_17;

 *VAR_13 = ((void*)0);
 *VAR_14 = ((void*)0);

 VAR_15 = (const CS_GenericBlob *)(const void *)VAR_11;

 VAR_17 = VAR_12;
 VAR_16 = FUNC_0(VAR_15, VAR_17);
 if (VAR_16)
  return VAR_16;
 VAR_17 = FUNC_3(VAR_15->length);

 if (FUNC_3(VAR_15->magic) == VAR_2) {
  const CS_SuperBlob *VAR_18;
  uint32_t VAR_19, VAR_20;
  const CS_CodeDirectory *VAR_21 = ((void*)0);
  unsigned int VAR_22 = 0;




  if (VAR_17 < sizeof(CS_SuperBlob))
   return VAR_9;

  VAR_18 = (const CS_SuperBlob *)VAR_15;
  VAR_20 = FUNC_3(VAR_18->count);


  if ((VAR_17 - sizeof(CS_SuperBlob)) / sizeof(CS_BlobIndex) < VAR_20)
   return VAR_9;


  for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
   const CS_BlobIndex *VAR_23 = &VAR_18->index[VAR_19];
   uint32_t VAR_24 = FUNC_3(VAR_23->type);
   uint32_t VAR_25 = FUNC_3(VAR_23->offset);
   if (VAR_17 < VAR_25)
    return VAR_9;

   const CS_GenericBlob *VAR_26 =
    (const CS_GenericBlob *)(const void *)(VAR_11 + VAR_25);

   size_t VAR_27 = VAR_17 - VAR_25;

   if ((VAR_16 = FUNC_0(VAR_26, VAR_27)) != 0)
    return VAR_16;
   VAR_27 = FUNC_3(VAR_26->length);


   if (VAR_24 == VAR_5 || (VAR_24 >= VAR_3 && VAR_24 < VAR_4)) {
    const CS_CodeDirectory *VAR_28 = (const CS_CodeDirectory *)VAR_26;
    if ((VAR_16 = FUNC_1(VAR_28, VAR_27)) != 0)
     return VAR_16;
    unsigned int VAR_29 = FUNC_2(VAR_28);
    if (VAR_10 > 3)
     FUNC_4("CodeDirectory type %d rank %d at slot 0x%x index %d\n", VAR_28->hashType, (int)VAR_29, (int)VAR_24, (int)VAR_19);
    if (VAR_21 == ((void*)0) || VAR_29 > VAR_22) {
     VAR_21 = VAR_28;
     VAR_22 = VAR_29;

     if (VAR_10 > 2)
      FUNC_4("using CodeDirectory type %d (rank %d)\n", (int)VAR_21->hashType, VAR_22);
     *VAR_13 = VAR_21;
    } else if (VAR_21 != ((void*)0) && VAR_29 == VAR_22) {

     FUNC_4("multiple hash=%d CodeDirectories in signature; rejecting\n", VAR_21->hashType);
     return VAR_9;
    }
   } else if (VAR_24 == VAR_6) {
    if (FUNC_3(VAR_26->magic) != VAR_1) {
     return VAR_9;
    }
    if (*VAR_14 != ((void*)0)) {
     FUNC_4("multiple entitlements blobs\n");
     return VAR_9;
    }
    *VAR_14 = VAR_26;
   }
  }
 } else if (FUNC_3(VAR_15->magic) == VAR_0) {

  if ((VAR_16 = FUNC_1((const CS_CodeDirectory *)(const void *)VAR_11, VAR_17)) != 0)
   return VAR_16;
  *VAR_13 = (const CS_CodeDirectory *)VAR_15;
 } else {
  return VAR_9;
 }

 if (*VAR_13 == ((void*)0))
  return VAR_9;

 return 0;
}
