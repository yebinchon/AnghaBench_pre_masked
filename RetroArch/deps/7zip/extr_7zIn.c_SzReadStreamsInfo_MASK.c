
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int Folders; int NumFolders; int PackCRCs; int PackCRCsDefined; int PackSizes; int NumPackStreams; } ;
typedef int SRes ;
typedef int ISzAlloc ;
typedef int CSzData ;
typedef TYPE_1__ CSzAr ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int *,scalar_t__*,int *,int *,int *,int *,int *) ;
 int FUNC_3 (int *,int ,int ,int *,scalar_t__**,int **,int **,int *) ;
 int FUNC_4 (int *,int *,int *,int *,int *) ;





__attribute__((used)) static SRes FUNC_5(
      CSzData *VAR_2,
      uint64_t *VAR_3,
      CSzAr *VAR_4,
      uint32_t *VAR_5,
      uint64_t **VAR_6,
      uint8_t **VAR_7,
      uint32_t **VAR_8,
      ISzAlloc *VAR_9,
      ISzAlloc *VAR_10)
{
   for (;;)
   {
      uint64_t VAR_11;
      FUNC_0(FUNC_1(VAR_2, &VAR_11));
      if ((uint64_t)(int)VAR_11 != VAR_11)
         return VAR_0;
      switch((int)VAR_11)
      {
         case 131:
            return VAR_1;
         case 130:
            {
               FUNC_0(FUNC_2(VAR_2, VAR_3, &VAR_4->NumPackStreams,
                        &VAR_4->PackSizes, &VAR_4->PackCRCsDefined, &VAR_4->PackCRCs, VAR_9));
               break;
            }
         case 128:
            {
               FUNC_0(FUNC_4(VAR_2, &VAR_4->NumFolders, &VAR_4->Folders, VAR_9, VAR_10));
               break;
            }
         case 129:
            {
               FUNC_0(FUNC_3(VAR_2, VAR_4->NumFolders, VAR_4->Folders,
                        VAR_5, VAR_6, VAR_7, VAR_8, VAR_10));
               break;
            }
         default:
            return VAR_0;
      }
   }
}
