
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_7__ {int numblocks; int* blocknum; TYPE_5__** block; int size; } ;
typedef TYPE_1__ partition_struct ;
struct TYPE_10__ {scalar_t__ outconcddevnum; scalar_t__ filter; scalar_t__ outconcddev; } ;
struct TYPE_9__ {scalar_t__ size; scalar_t__ data; } ;
struct TYPE_8__ {char* system; char* company; int* itemnum; char* version; int* cdinfo; int* region; int* peripheral; char* gamename; char ipsize; char msh2stack; char ssh2stack; char firstprogaddr; char firstprogsize; int date; } ;


 TYPE_6__* VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ,char*,char,char,char,char,char,char,char,char) ;
 int FUNC_6 (char*,char*,int*) ;

u8 FUNC_7(int VAR_2) {
   partition_struct * VAR_3;
   u8 VAR_4 = 0;

   VAR_0->outconcddev = VAR_0->filter + 0;
   VAR_0->outconcddevnum = 0;


   if ((VAR_3 = FUNC_1(150)) != ((void*)0))
   {
      char *VAR_5=(char*)VAR_3->block[VAR_3->numblocks - 1]->data;


      if (FUNC_3(VAR_5, "SEGA SEGASATURN", 15) == 0)
      {
         FUNC_4(VAR_1->system, VAR_5, 16);
         VAR_1->system[16]='\0';
         FUNC_4(VAR_1->company, VAR_5+0x10, 16);
         VAR_1->company[16]='\0';
         FUNC_6(VAR_5+0x20, "%s", VAR_1->itemnum);
         FUNC_4(VAR_1->version, VAR_5+0x2A, 6);
         VAR_1->version[6]='\0';
         FUNC_5(VAR_1->date, "%c%c/%c%c/%c%c%c%c", VAR_5[0x34], VAR_5[0x35], VAR_5[0x36], VAR_5[0x37], VAR_5[0x30], VAR_5[0x31], VAR_5[0x32], VAR_5[0x33]);
         FUNC_6(VAR_5+0x38, "%s", VAR_1->cdinfo);
         FUNC_6(VAR_5+0x40, "%s", VAR_1->region);
         FUNC_6(VAR_5+0x50, "%s", VAR_1->peripheral);
         FUNC_4(VAR_1->gamename, VAR_5+0x60, 112);
         VAR_1->gamename[112]='\0';







         VAR_1->ipsize = (VAR_5[0xE0] << 24) | (VAR_5[0xE1] << 16) |
                        (VAR_5[0xE2] << 8) | VAR_5[0xE3];
         VAR_1->msh2stack = (VAR_5[0xE8] << 24) | (VAR_5[0xE9] << 16) |
                           (VAR_5[0xEA] << 8) | VAR_5[0xEB];
         VAR_1->ssh2stack = (VAR_5[0xEC] << 24) | (VAR_5[0xED] << 16) |
                           (VAR_5[0xEE] << 8) | VAR_5[0xEF];
         VAR_1->firstprogaddr = (VAR_5[0xF0] << 24) | (VAR_5[0xF1] << 16) |
                               (VAR_5[0xF2] << 8) | VAR_5[0xF3];
         VAR_1->firstprogsize = (VAR_5[0xF4] << 24) | (VAR_5[0xF5] << 16) |
                               (VAR_5[0xF6] << 8) | VAR_5[0xF7];

         if (VAR_1->msh2stack == 0 )
         {
            VAR_1->msh2stack = 0x6002000;
         }


         if (VAR_1->msh2stack & 0x80000000)
         {
            VAR_1->msh2stack = 0x06000000 + (VAR_1->msh2stack & 0x0000FFFF );
         }

         if (VAR_1->ssh2stack == 0 )
         {
            VAR_1->ssh2stack = 0x6001000;
         }

         if (VAR_1->ssh2stack & 0x80000000)
         {
            VAR_1->ssh2stack = 0x06000000 + (VAR_1->ssh2stack & 0x0000FFFF);
         }


         if (VAR_2)
         {

            switch (VAR_1->region[0])
            {
               case 'J':
                         VAR_4 = 1;
                         break;
               case 'T':
                         VAR_4 = 2;
                         break;
               case 'U':
                         VAR_4 = 4;
                         break;
               case 'B':
                         VAR_4 = 5;
                         break;
               case 'K':
                         VAR_4 = 6;
                         break;
               case 'A':
                         VAR_4 = 0xA;
                         break;
               case 'E':
                         VAR_4 = 0xC;
                         break;
               case 'L':
                         VAR_4 = 0xD;
                         break;
               default: break;
            }
         }
      }


      VAR_3->size -= VAR_3->block[VAR_3->numblocks - 1]->size;
      FUNC_0(VAR_3->block[VAR_3->numblocks - 1]);
      VAR_3->blocknum[VAR_3->numblocks - 1] = 0xFF;


      FUNC_2(VAR_3);
      VAR_3->numblocks -= 1;
   }

   return VAR_4;
}
