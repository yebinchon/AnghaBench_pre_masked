
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_12__ {int data; } ;
struct TYPE_11__ {int NumFolders; int PackSizes; TYPE_1__* Folders; } ;
struct TYPE_10__ {scalar_t__ UnpackCRC; scalar_t__ UnpackCRCDefined; } ;
typedef int SRes ;
typedef int ISzAlloc ;
typedef int ILookInStream ;
typedef TYPE_1__ CSzFolder ;
typedef int CSzData ;
typedef TYPE_2__ CSzAr ;
typedef TYPE_3__ CBuf ;


 int FUNC_0 (TYPE_3__*,size_t,int *) ;
 scalar_t__ FUNC_1 (int ,size_t) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,int ,int *,scalar_t__,int ,size_t,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,scalar_t__*,TYPE_2__*,int *,scalar_t__**,int **,int **,int *,int *) ;

__attribute__((used)) static SRes FUNC_7(
      ILookInStream *VAR_4,
      CSzData *VAR_5,
      CBuf *VAR_6,
      uint64_t VAR_7,
      CSzAr *VAR_8,
      uint64_t **VAR_9,
      uint8_t **VAR_10,
      uint32_t **VAR_11,
      ISzAlloc *VAR_12)
{

   uint32_t VAR_13 = 0;
   uint64_t VAR_14;
   CSzFolder *VAR_15;
   uint64_t VAR_16;
   SRes VAR_17;

   FUNC_3(FUNC_6(VAR_5, &VAR_14, VAR_8,
            &VAR_13, VAR_9, VAR_10, VAR_11,
            VAR_12, VAR_12));

   VAR_14 += VAR_7;
   if (VAR_8->NumFolders != 1)
      return VAR_0;

   VAR_15 = VAR_8->Folders;
   VAR_16 = FUNC_5(VAR_15);

   FUNC_3(FUNC_2(VAR_4, VAR_14));

   if (!FUNC_0(VAR_6, (size_t)VAR_16, VAR_12))
      return VAR_2;

   VAR_17 = FUNC_4(VAR_15, VAR_8->PackSizes,
         VAR_4, VAR_14,
         VAR_6->data, (size_t)VAR_16, VAR_12);
   FUNC_3(VAR_17);
   if (VAR_15->UnpackCRCDefined)
      if (FUNC_1(VAR_6->data, (size_t)VAR_16) != VAR_15->UnpackCRC)
         return VAR_1;
   return VAR_3;
}
