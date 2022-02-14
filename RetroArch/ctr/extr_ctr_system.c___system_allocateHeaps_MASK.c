
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int size; int base_addr; } ;
typedef int PageInfo ;
typedef TYPE_1__ MemInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (void*,int,int) ;
 int FUNC_1 (int *,int,int,int,int ,int) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;

void FUNC_3(void)
{
   extern char* VAR_11;
   u32 VAR_12 = 0;

   MemInfo VAR_13;
   PageInfo VAR_14;

   register u32 VAR_15 __asm__("sp");

   FUNC_2(&VAR_13, &VAR_14, VAR_15);

   VAR_10 += 0xFFF;
   VAR_10 &= ~0xFFF;
   VAR_9 = VAR_10 > VAR_13.size ? VAR_10 - VAR_13.size : 0;
   VAR_8 = VAR_13.base_addr - VAR_9;

   if (VAR_9)
   {
      FUNC_1(&VAR_12, VAR_8, 0x0, VAR_9, VAR_0, VAR_2 | VAR_3);
      FUNC_0((void*)VAR_8, 0xFC, VAR_9);
   }


   VAR_4 = 0x08000000;
   VAR_5 = 0;


   FUNC_1(&VAR_6, 0x0, 0x0, VAR_7, VAR_1, VAR_2 | VAR_3);


   VAR_11 = (char*)0x13F00000;
}
