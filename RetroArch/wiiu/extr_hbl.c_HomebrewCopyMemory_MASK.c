
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int address; int size; struct TYPE_3__* next; } ;
typedef TYPE_1__ s_mem_area ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (void*,int *,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(u8 *VAR_5, u32 VAR_6, u32 VAR_7)
{
   VAR_7 += 0x7;
   VAR_7 &= ~0x7;
   if (VAR_7 > 0x10000)
      VAR_7 = 0x10000;

   FUNC_5(VAR_7);

   VAR_4 = 0x40000000;
   VAR_3 = 0x03000000;


   if (*(u16 *)&VAR_5[7] != 0xCAFE)
   {

      FUNC_6("loading ELF file \n");

      VAR_0 = (u32)FUNC_3() + VAR_7;
      if (VAR_0 >= 0x01000000)
         return -1;
   }
   else
   {

      FUNC_6("loading RPX file \n");

      VAR_0 = VAR_2->address;
   }


   if (VAR_0 < 0x01000000)
   {

      if ((VAR_0 + VAR_6) > 0x01000000)
         return -1;

      FUNC_4((void *)VAR_0, VAR_5, VAR_6);
      VAR_1 = VAR_6;
   }
   else
   {
      FUNC_0(VAR_5, VAR_6);

      u32 VAR_8 = 0;
      u32 VAR_9 = (u32)FUNC_1(VAR_5);

      s_mem_area *VAR_10 = VAR_2;
      u32 VAR_11 = 0;

      while ((VAR_8 < VAR_6) && VAR_10)
      {
         if (VAR_11 >= VAR_10->size)
         {
            VAR_10 = VAR_10->next;

            if (!VAR_10)
               return -1;

            VAR_11 = 0;
         }

         u32 VAR_12 = VAR_6 - VAR_8;

         if ((VAR_11 + VAR_12) > VAR_10->size)
            VAR_12 = VAR_10->size - VAR_11;

         FUNC_2(VAR_10->address + VAR_11, (VAR_9 + VAR_8), VAR_12);

         VAR_11 += VAR_12;
         VAR_8 += VAR_12;
      }

      VAR_1 = VAR_8;
   }
   return VAR_6;
}
