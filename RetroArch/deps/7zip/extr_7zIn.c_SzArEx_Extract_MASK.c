
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint64_t ;
typedef size_t uint32_t ;
struct TYPE_9__ {TYPE_3__* Files; scalar_t__ PackSizes; TYPE_2__* Folders; } ;
struct TYPE_12__ {size_t* FileIndexToFolderIndexMap; size_t* FolderStartFileIndex; TYPE_1__ db; scalar_t__* FolderStartPackStreamIndex; } ;
struct TYPE_11__ {scalar_t__ Crc; scalar_t__ CrcDefined; scalar_t__ Size; } ;
struct TYPE_10__ {scalar_t__ UnpackCRC; scalar_t__ UnpackCRCDefined; } ;
typedef scalar_t__ SRes ;
typedef int ISzAlloc ;
typedef int ILookInStream ;
typedef TYPE_2__ CSzFolder ;
typedef TYPE_3__ CSzFileItem ;
typedef TYPE_4__ CSzArEx ;


 scalar_t__ FUNC_0 (int *,size_t) ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_5 (TYPE_4__ const*,size_t,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,scalar_t__,int *,size_t,int *,size_t,int *) ;
 size_t FUNC_7 (TYPE_2__*) ;

SRes FUNC_8(
      const CSzArEx *VAR_4,
      ILookInStream *VAR_5,
      uint32_t VAR_6,
      uint32_t *VAR_7,
      uint8_t **VAR_8,
      size_t *VAR_9,
      size_t *VAR_10,
      size_t *VAR_11,
      ISzAlloc *VAR_12,
      ISzAlloc *VAR_13)
{
   uint32_t VAR_14 = VAR_4->FileIndexToFolderIndexMap[VAR_6];
   SRes VAR_15 = VAR_3;
   *VAR_10 = 0;
   *VAR_11 = 0;
   if (VAR_14 == (uint32_t)-1)
   {
      FUNC_2(VAR_12, *VAR_8);
      *VAR_7 = VAR_14;
      *VAR_8 = 0;
      *VAR_9 = 0;
      return VAR_3;
   }

   if (*VAR_8 == 0 || *VAR_7 != VAR_14)
   {
      CSzFolder *VAR_16 = VAR_4->db.Folders + VAR_14;
      uint64_t VAR_17 = FUNC_7(VAR_16);
      size_t VAR_18 = (size_t)VAR_17;
      uint64_t VAR_19 = FUNC_5(VAR_4, VAR_14, 0);

      if (VAR_18 != VAR_17)
         return VAR_2;
      *VAR_7 = VAR_14;
      FUNC_2(VAR_12, *VAR_8);
      *VAR_8 = 0;

      FUNC_4(FUNC_3(VAR_5, VAR_19));

      if (VAR_15 == VAR_3)
      {
         *VAR_9 = VAR_18;
         if (VAR_18 != 0)
         {
            *VAR_8 = (uint8_t *)FUNC_1(VAR_12, VAR_18);
            if (*VAR_8 == 0)
               VAR_15 = VAR_2;
         }
         if (VAR_15 == VAR_3)
         {
            VAR_15 = FUNC_6(VAR_16,
                  VAR_4->db.PackSizes + VAR_4->FolderStartPackStreamIndex[VAR_14],
                  VAR_5, VAR_19,
                  *VAR_8, VAR_18, VAR_13);
            if (VAR_15 == VAR_3)
            {
               if (VAR_16->UnpackCRCDefined)
               {
                  if (FUNC_0(*VAR_8, VAR_18) != VAR_16->UnpackCRC)
                     VAR_15 = VAR_0;
               }
            }
         }
      }
   }
   if (VAR_15 == VAR_3)
   {
      uint32_t VAR_20;
      CSzFileItem *VAR_21 = VAR_4->db.Files + VAR_6;
      *VAR_10 = 0;
      for (VAR_20 = VAR_4->FolderStartFileIndex[VAR_14]; VAR_20 < VAR_6; VAR_20++)
         *VAR_10 += (uint32_t)VAR_4->db.Files[VAR_20].Size;
      *VAR_11 = (size_t)VAR_21->Size;
      if (*VAR_10 + *VAR_11 > *VAR_9)
         return VAR_1;
      if (VAR_21->CrcDefined && FUNC_0(*VAR_8 + *VAR_10, *VAR_11) != VAR_21->Crc)
         VAR_15 = VAR_0;
   }
   return VAR_15;
}
