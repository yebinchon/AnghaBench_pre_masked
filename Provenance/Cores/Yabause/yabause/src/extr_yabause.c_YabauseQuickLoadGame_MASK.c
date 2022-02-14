
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_13__ {int numblocks; int* blocknum; TYPE_9__** block; scalar_t__ size; } ;
typedef TYPE_1__ partition_struct ;
struct TYPE_14__ {int lba; int size; int recordsize; } ;
typedef TYPE_2__ dirrec_struct ;
struct TYPE_17__ {int* data; } ;
struct TYPE_16__ {int PC; int * R; } ;
struct TYPE_15__ {TYPE_4__ regs; } ;
struct TYPE_12__ {scalar_t__ outconcddevnum; scalar_t__ filter; scalar_t__ outconcddev; } ;


 TYPE_11__* VAR_0 ;
 int FUNC_0 (int*,TYPE_2__*) ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int) ;
 TYPE_3__* VAR_1 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int*,char*,int) ;

int FUNC_10(void)
{
   partition_struct * VAR_2;
   u8 *VAR_3;
   u32 VAR_4;
   u32 VAR_5;
   u32 VAR_6;
   unsigned int VAR_7, VAR_8;
   dirrec_struct VAR_9;

   VAR_0->outconcddev = VAR_0->filter + 0;
   VAR_0->outconcddevnum = 0;


   if ((VAR_2 = FUNC_3(150)) == ((void*)0))
      return -1;


   VAR_3 = VAR_2->block[VAR_2->numblocks - 1]->data;

   FUNC_8();

   if (FUNC_9(VAR_3, "SEGA SEGASATURN", 15) == 0)
   {

      VAR_5 = (VAR_3[0xE0] << 24) |
             (VAR_3[0xE1] << 16) |
             (VAR_3[0xE2] << 8) |
              VAR_3[0xE3];
      VAR_6 = VAR_5 >> 11;
      if ((VAR_5 % 2048) != 0)
         VAR_6++;



      VAR_4 = (VAR_3[0xF0] << 24) |
             (VAR_3[0xF1] << 16) |
             (VAR_3[0xF2] << 8) |
              VAR_3[0xF3];


      VAR_2->size = 0;
      FUNC_1(VAR_2->block[VAR_2->numblocks - 1]);
      VAR_2->blocknum[VAR_2->numblocks - 1] = 0xFF;
      VAR_2->numblocks = 0;


      for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
      {
         if ((VAR_2 = FUNC_3(150+VAR_7)) == ((void*)0))
            return -1;

         VAR_3 = VAR_2->block[VAR_2->numblocks - 1]->data;

         if (VAR_5 >= 2048)
         {
            for (VAR_8 = 0; VAR_8 < 2048; VAR_8++)
               FUNC_4(0x06002000 + (VAR_7 * 0x800) + VAR_8, VAR_3[VAR_8]);
         }
         else
         {
            for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
               FUNC_4(0x06002000 + (VAR_7 * 0x800) + VAR_8, VAR_3[VAR_8]);
         }

         VAR_5 -= 2048;


         VAR_2->size = 0;
         FUNC_1(VAR_2->block[VAR_2->numblocks - 1]);
         VAR_2->blocknum[VAR_2->numblocks - 1] = 0xFF;
         VAR_2->numblocks = 0;
      }

      FUNC_7(0x6002000, VAR_6<<11);





      if ((VAR_2 = FUNC_3(166)) == ((void*)0))
         return -1;




      FUNC_0(VAR_2->block[VAR_2->numblocks - 1]->data + 0x9C, &VAR_9);


      VAR_2->size = 0;
      FUNC_1(VAR_2->block[VAR_2->numblocks - 1]);
      VAR_2->blocknum[VAR_2->numblocks - 1] = 0xFF;
      VAR_2->numblocks = 0;


      if ((VAR_2 = FUNC_3(VAR_9.lba+150)) == ((void*)0))
         return -1;

      VAR_3 = VAR_2->block[VAR_2->numblocks - 1]->data;


      for (VAR_7 = 0; VAR_7 < 3; VAR_7++)
      {
         FUNC_0(VAR_3, &VAR_9);
         VAR_3 += VAR_9.recordsize;
      }

      VAR_5 = VAR_9.size;
      VAR_6 = VAR_5 >> 11;
      if ((VAR_9.size % 2048) != 0)
         VAR_6++;


      VAR_2->size = 0;
      FUNC_1(VAR_2->block[VAR_2->numblocks - 1]);
      VAR_2->blocknum[VAR_2->numblocks - 1] = 0xFF;
      VAR_2->numblocks = 0;


      for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
      {
         if ((VAR_2 = FUNC_3(150+VAR_9.lba+VAR_7)) == ((void*)0))
            return -1;

         VAR_3 = VAR_2->block[VAR_2->numblocks - 1]->data;

         if (VAR_5 >= 2048)
         {
            for (VAR_8 = 0; VAR_8 < 2048; VAR_8++)
               FUNC_4(VAR_4 + (VAR_7 * 0x800) + VAR_8, VAR_3[VAR_8]);
         }
         else
         {
            for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
               FUNC_4(VAR_4 + (VAR_7 * 0x800) + VAR_8, VAR_3[VAR_8]);
         }

         VAR_5 -= 2048;


         VAR_2->size = 0;
         FUNC_1(VAR_2->block[VAR_2->numblocks - 1]);
         VAR_2->blocknum[VAR_2->numblocks - 1] = 0xFF;
         VAR_2->numblocks = 0;
      }

      FUNC_7(VAR_4, VAR_6<<11);


      FUNC_5(VAR_1, &VAR_1->regs);
      VAR_1->regs.PC = 0x06002E00;
      VAR_1->regs.R[15] = FUNC_2();
      FUNC_6(VAR_1, &VAR_1->regs);
   }
   else
   {



      VAR_2->size = 0;
      FUNC_1(VAR_2->block[VAR_2->numblocks - 1]);
      VAR_2->blocknum[VAR_2->numblocks - 1] = 0xFF;
      VAR_2->numblocks = 0;

      return -1;
   }

   return 0;
}
