
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
struct TYPE_5__ {scalar_t__ id; struct TYPE_5__* next; int IDAT_bits; int IDAT_size; } ;
typedef TYPE_1__ png_store_file ;
struct TYPE_6__ {unsigned long IDAT_crc; int pread; scalar_t__ IDAT_pos; scalar_t__ IDAT_len; int IDAT_bits; int IDAT_size; int * next; TYPE_1__* current; TYPE_1__* saved; } ;
typedef TYPE_2__ png_store ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 size_t FUNC_1 (char*,int,size_t,char*) ;
 size_t FUNC_2 (char*,int,int ,scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(png_store *VAR_1, png_uint_32 VAR_2)
{
   png_store_file *VAR_3 = VAR_1->saved;

   while (VAR_3 != ((void*)0))
   {
      if (VAR_3->id == VAR_2)
      {
         VAR_1->current = VAR_3;
         VAR_1->next = ((void*)0);
         VAR_1->IDAT_size = VAR_3->IDAT_size;
         VAR_1->IDAT_bits = VAR_3->IDAT_bits;
         VAR_1->IDAT_len = 0;
         VAR_1->IDAT_pos = 0;
         VAR_1->IDAT_crc = 0UL;
         FUNC_3(VAR_1);
         return;
      }

      VAR_3 = VAR_3->next;
   }

   {
      size_t VAR_4;
      char VAR_5[VAR_0+64];

      VAR_4 = FUNC_2(VAR_5, sizeof VAR_5, 0, VAR_2);
      VAR_4 = FUNC_1(VAR_5, sizeof VAR_5, VAR_4, ": file not found");
      FUNC_0(VAR_1->pread, VAR_5);
   }
}
