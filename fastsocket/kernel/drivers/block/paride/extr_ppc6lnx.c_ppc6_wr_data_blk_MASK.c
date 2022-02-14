
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int mode; int lpt_addr; int cur_ctrl; } ;
typedef TYPE_1__ Interface ;


 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(Interface *VAR_5, u8 *VAR_6, long VAR_7)
{
 switch(VAR_5->mode)
 {
  case 128 :
  case 133 :
  {
   while(VAR_7--)
   {
    FUNC_0(*VAR_6++, VAR_5->lpt_addr);

    VAR_5->cur_ctrl ^= VAR_3;

    FUNC_0(VAR_5->cur_ctrl, VAR_5->lpt_addr + 2);
   }

   break;
  }

  case 129 :
  case 134 :
  {
   u8 VAR_8, VAR_9;

   FUNC_3(VAR_5,(VAR_1 | VAR_2));

   VAR_5->cur_ctrl |= VAR_4;

   FUNC_0(VAR_5->cur_ctrl, VAR_5->lpt_addr + 2);

   VAR_9 = *VAR_6;

   FUNC_0(VAR_9, VAR_5->lpt_addr);

   while(VAR_7)
   {
    VAR_8 = *VAR_6++;
    VAR_7--;

    if (VAR_8 == VAR_9)
    {
     VAR_5->cur_ctrl ^= VAR_3;

     FUNC_0(VAR_5->cur_ctrl, VAR_5->lpt_addr + 2);
    }
    else
    {
     FUNC_0(VAR_8, VAR_5->lpt_addr);

     VAR_9 = VAR_8;
    }
   }

   VAR_5->cur_ctrl &= ~VAR_4;

   FUNC_0(VAR_5->cur_ctrl, VAR_5->lpt_addr + 2);

   FUNC_3(VAR_5,(VAR_0 | VAR_2));

   break;
  }

  case 132 :
  {
   while(VAR_7)
   {
    FUNC_0(*VAR_6++,VAR_5->lpt_addr + 4);
    VAR_7--;
   }

   FUNC_4(VAR_5);

   break;
  }

  case 130 :
  {
   while(VAR_7 > 1)
   {
    FUNC_2(*((u16 *)VAR_6),VAR_5->lpt_addr + 4);
    VAR_6 += 2;
    VAR_7 -= 2;
   }

   while(VAR_7)
   {
    FUNC_0(*VAR_6++,VAR_5->lpt_addr + 4);
    VAR_7--;
   }

   FUNC_4(VAR_5);

   break;
  }

  case 131 :
  {
   while(VAR_7 > 3)
   {
    FUNC_1(*((u32 *)VAR_6),VAR_5->lpt_addr + 4);
    VAR_6 += 4;
    VAR_7 -= 4;
   }

   while(VAR_7)
   {
    FUNC_0(*VAR_6++,VAR_5->lpt_addr + 4);
    VAR_7--;
   }

   FUNC_4(VAR_5);

   break;
  }
 }
}
