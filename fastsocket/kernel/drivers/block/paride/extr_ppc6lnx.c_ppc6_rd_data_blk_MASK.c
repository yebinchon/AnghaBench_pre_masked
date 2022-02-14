
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int mode; int cur_ctrl; int lpt_addr; } ;
typedef TYPE_1__ Interface ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(Interface *VAR_3, u8 *VAR_4, long VAR_5)
{
 switch(VAR_3->mode)
 {
  case 128 :
  case 129 :
  {
   while(VAR_5)
   {
    u8 VAR_6;

    VAR_3->cur_ctrl = (VAR_3->cur_ctrl & ~VAR_2) ^ VAR_0;

    FUNC_3(VAR_3->cur_ctrl, VAR_3->lpt_addr + 2);



    VAR_6 = FUNC_0(VAR_3->lpt_addr + 1);

    VAR_6 = ((VAR_6 & 0x80) >> 1) | ((VAR_6 & 0x38) >> 3);

    VAR_3->cur_ctrl |= VAR_2;

    FUNC_3(VAR_3->cur_ctrl, VAR_3->lpt_addr + 2);



    VAR_6 |= FUNC_0(VAR_3->lpt_addr + 1) & 0xB8;

    *VAR_4++ = VAR_6;
    VAR_5--;
   }

   break;
  }

  case 133 :
  case 134 :
  {
   VAR_3->cur_ctrl |= VAR_1;

   FUNC_3(VAR_3->cur_ctrl, VAR_3->lpt_addr + 2);

   VAR_3->cur_ctrl |= VAR_2;

   while(VAR_5)
   {
    VAR_3->cur_ctrl ^= VAR_0;

    FUNC_3(VAR_3->cur_ctrl, VAR_3->lpt_addr + 2);

    *VAR_4++ = FUNC_0(VAR_3->lpt_addr);
    VAR_5--;
   }

   VAR_3->cur_ctrl &= ~VAR_2;

   FUNC_3(VAR_3->cur_ctrl, VAR_3->lpt_addr + 2);

   VAR_3->cur_ctrl &= ~VAR_1;

   FUNC_3(VAR_3->cur_ctrl, VAR_3->lpt_addr + 2);

   break;
  }

  case 132 :
  {
   FUNC_3((VAR_3->cur_ctrl | VAR_1), VAR_3->lpt_addr + 2);



   while(VAR_5)
   {
    *VAR_4++ = FUNC_0(VAR_3->lpt_addr + 4);
    VAR_5--;
   }

   FUNC_3(VAR_3->cur_ctrl, VAR_3->lpt_addr + 2);

   break;
  }

  case 130 :
  {
   FUNC_3((VAR_3->cur_ctrl | VAR_1), VAR_3->lpt_addr + 2);



   while(VAR_5 > 1)
   {
    *((u16 *)VAR_4) = FUNC_2(VAR_3->lpt_addr + 4);
    VAR_4 += 2;
    VAR_5 -= 2;
   }

   while(VAR_5)
   {
    *VAR_4++ = FUNC_0(VAR_3->lpt_addr + 4);
    VAR_5--;
   }

   FUNC_3(VAR_3->cur_ctrl, VAR_3->lpt_addr + 2);

   break;
  }

  case 131 :
  {
   FUNC_3((VAR_3->cur_ctrl | VAR_1),VAR_3->lpt_addr + 2);



   while(VAR_5 > 3)
   {
    *((u32 *)VAR_4) = FUNC_1(VAR_3->lpt_addr + 4);
    VAR_4 += 4;
    VAR_5 -= 4;
   }

   while(VAR_5)
   {
    *VAR_4++ = FUNC_0(VAR_3->lpt_addr + 4);
    VAR_5--;
   }

   FUNC_3(VAR_3->cur_ctrl, VAR_3->lpt_addr + 2);

   break;
  }
 }

}
