
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ NumFiles; size_t NumPackStreams; scalar_t__* PackSizes; TYPE_3__* Files; } ;
struct TYPE_9__ {TYPE_1__ db; } ;
struct sevenzip_context_t {int index; size_t packIndex; TYPE_5__ db; } ;
struct archive_extract_userdata {int dummy; } ;
typedef int infile ;
struct TYPE_7__ {scalar_t__ stream; } ;
typedef TYPE_2__ file_archive_transfer_t ;
struct TYPE_8__ {scalar_t__ Size; scalar_t__ Crc; int IsDir; } ;
typedef scalar_t__ SRes ;
typedef TYPE_3__ CSzFileItem ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_0 (TYPE_5__*,scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (char*,char*,size_t) ;
 scalar_t__ FUNC_4 (int *,char*,int) ;

__attribute__((used)) static int FUNC_5(
      file_archive_transfer_t *VAR_4, char *VAR_5,
      const uint8_t **VAR_6, unsigned *VAR_7,
      uint32_t *VAR_8, uint32_t *VAR_9, uint32_t *VAR_10,
      unsigned *VAR_11, struct archive_extract_userdata *VAR_12)
{
   struct sevenzip_context_t *VAR_13 = (struct sevenzip_context_t*)VAR_4->stream;
   const CSzFileItem *VAR_14 = VAR_13->db.db.Files + VAR_13->index;

   if (VAR_13->index < VAR_13->db.db.NumFiles)
   {
      size_t VAR_15 = FUNC_0(&VAR_13->db,
            VAR_13->index, ((void*)0));
      uint64_t VAR_16 = 0;

      if (VAR_13->packIndex < VAR_13->db.db.NumPackStreams)
      {
         VAR_16 = VAR_13->db.db.PackSizes[VAR_13->packIndex];
         VAR_13->packIndex++;
      }

      if (VAR_15 < VAR_1 && !VAR_14->IsDir)
      {
         char VAR_17[VAR_1];
         SRes VAR_18 = VAR_2;
         uint16_t *VAR_19 = (uint16_t*)FUNC_2(VAR_15 * sizeof(uint16_t));

         if (!VAR_19)
            return -1;

         VAR_17[0] = '\0';

         FUNC_0(&VAR_13->db, VAR_13->index,
               VAR_19);

         if (VAR_19)
         {
            VAR_18 = FUNC_4(VAR_19, VAR_17, sizeof(VAR_17))
               ? VAR_3 : VAR_2;
            FUNC_1(VAR_19);
         }

         if (VAR_18 != VAR_3)
            return -1;

         FUNC_3(VAR_5, VAR_17, VAR_1);

         *VAR_7 = VAR_0;
         *VAR_10 = VAR_14->Crc;
         *VAR_8 = (uint32_t)VAR_14->Size;
         *VAR_9 = (uint32_t)VAR_16;
      }
   }
   else
      return 0;

   *VAR_11 = 1;

   return 1;
}
