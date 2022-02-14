
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_9__ {int numblocks; int* blocknum; TYPE_6__** block; int size; } ;
typedef TYPE_1__ partition_struct ;
typedef int filter_struct ;
struct TYPE_10__ {int lba; int size; int recordsize; } ;
typedef TYPE_2__ dirrec_struct ;
struct TYPE_12__ {int getsectsize; scalar_t__ curdirsect; int curdirfidoffset; int curdirsize; int numfiles; TYPE_2__* fileinfo; int * outconcddev; } ;
struct TYPE_11__ {int size; scalar_t__* data; } ;


 TYPE_8__* VAR_0 ;
 int FUNC_0 (scalar_t__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_6__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

int FUNC_5(filter_struct * VAR_2, u32 VAR_3, int VAR_4)
{
   u8 * VAR_5;
   u32 VAR_6;
   dirrec_struct VAR_7;
   u8 VAR_8 = 0;
   u32 VAR_9 = 0;
   partition_struct * VAR_10;
   u32 VAR_11 = VAR_0->getsectsize;

   VAR_0->outconcddev = VAR_2;

   if (VAR_4)
   {



      if (VAR_0->curdirsect == 0)
         return -1;

      VAR_0->curdirfidoffset = VAR_3 - 2;
      VAR_9 = VAR_0->curdirsect;
      VAR_8 = (u8)VAR_0->curdirsize;
   }
   else
   {


      if (VAR_3 == 0xFFFFFF)
      {



         if ((VAR_10 = FUNC_2(166)) == ((void*)0))
            return -2;

         VAR_11 = VAR_10->block[VAR_10->numblocks - 1]->size;


         FUNC_0(VAR_10->block[VAR_10->numblocks - 1]->data + 0x9C, &VAR_7);


         VAR_10->size -= VAR_10->block[VAR_10->numblocks - 1]->size;
         FUNC_1(VAR_10->block[VAR_10->numblocks - 1]);
         VAR_10->blocknum[VAR_10->numblocks - 1] = 0xFF;


         FUNC_3(VAR_10);
         VAR_10->numblocks -= 1;

         VAR_9 = VAR_0->curdirsect = VAR_7.lba;
         VAR_0->curdirsize = (VAR_7.size / VAR_11) - 1;
         VAR_8 = (u8)VAR_0->curdirsize;
         VAR_0->curdirfidoffset = 0;
      }
      else
      {



         if (VAR_0->curdirsect == 0)
            return -1;

         VAR_9 = VAR_0->curdirsect = VAR_0->fileinfo[VAR_3 - VAR_0->curdirfidoffset].lba - 150;
         VAR_0->curdirsize = (VAR_0->fileinfo[VAR_3 - VAR_0->curdirfidoffset].size / VAR_11) - 1;
         VAR_8 = (u8)VAR_0->curdirsize;
         VAR_0->curdirfidoffset = 0;
      }
   }


   FUNC_4(VAR_0->fileinfo, 0, sizeof(dirrec_struct) * VAR_1);


   if ((VAR_10 = FUNC_2(VAR_9+150)) == ((void*)0))
      return -2;

   VAR_9++;
   VAR_5 = VAR_10->block[VAR_10->numblocks - 1]->data;


   for (VAR_6 = 0; VAR_6 < 2; VAR_6++)
   {
      FUNC_0(VAR_5, VAR_0->fileinfo + VAR_6);
      VAR_0->fileinfo[VAR_6].lba += 150;
      VAR_5 += VAR_0->fileinfo[VAR_6].recordsize;

      if (VAR_5[0] == 0)
      {
         VAR_0->numfiles = VAR_6;
         break;
      }
   }



   if (VAR_4)
   {
      for (VAR_6 = 2; VAR_6 < VAR_3; VAR_6++)
      {
         FUNC_0(VAR_5, VAR_0->fileinfo + 2);
         VAR_5 += VAR_0->fileinfo[2].recordsize;

         if (VAR_5[0] == 0)
         {
            if (VAR_8 > 0)
            {

               VAR_10->size -= VAR_10->block[VAR_10->numblocks - 1]->size;
               FUNC_1(VAR_10->block[VAR_10->numblocks - 1]);
               VAR_10->blocknum[VAR_10->numblocks - 1] = 0xFF;


               FUNC_3(VAR_10);
               VAR_10->numblocks -= 1;


               if ((VAR_10 = FUNC_2(VAR_9+150)) == ((void*)0))
                  return -2;

               VAR_9++;

               VAR_8--;
               VAR_5 = VAR_10->block[VAR_10->numblocks - 1]->data;
            }
            else
            {
               break;
            }
         }
      }
   }



   for (VAR_6 = 2; VAR_6 < VAR_1; VAR_6++)
   {
      FUNC_0(VAR_5, VAR_0->fileinfo + VAR_6);
      VAR_0->fileinfo[VAR_6].lba += 150;
      VAR_5 += VAR_0->fileinfo[VAR_6].recordsize;

      if (VAR_5[0] == 0)
      {
         if (VAR_8 > 0)
         {

            VAR_10->size -= VAR_10->block[VAR_10->numblocks - 1]->size;
            FUNC_1(VAR_10->block[VAR_10->numblocks - 1]);
            VAR_10->blocknum[VAR_10->numblocks - 1] = 0xFF;


            FUNC_3(VAR_10);
            VAR_10->numblocks -= 1;


            if ((VAR_10 = FUNC_2(VAR_9+150)) == ((void*)0))
               return -2;

            VAR_9++;
            VAR_8--;
            VAR_5 = VAR_10->block[VAR_10->numblocks - 1]->data;
         }
         else
         {
            VAR_0->numfiles = VAR_6;
            break;
         }
      }
   }


   VAR_10->size -= VAR_10->block[VAR_10->numblocks - 1]->size;
   FUNC_1(VAR_10->block[VAR_10->numblocks - 1]);
   VAR_10->blocknum[VAR_10->numblocks - 1] = 0xFF;


   FUNC_3(VAR_10);
   VAR_10->numblocks -= 1;
  return 0;
}
