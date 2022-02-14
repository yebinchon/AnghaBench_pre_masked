
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (unsigned short,int ) ;
 int FUNC_2 (unsigned int) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_5)
{
 unsigned short VAR_6,VAR_7;

 if (!(VAR_4[VAR_5].status & (VAR_2|VAR_3)))
  FUNC_2(VAR_5);

 VAR_6 = FUNC_0(VAR_0);
 VAR_7 = FUNC_0(VAR_1);

 switch (VAR_5) {
 case 130:
  VAR_6 &= ~0x0010;
  break;
 case 129:
  VAR_6 &= ~0x000f;
  break;
 case 128:
  VAR_6 &= ~0x0f00;
  VAR_7 &= ~0x00ff;
  break;
 }
 FUNC_1(VAR_6, VAR_0);
 FUNC_1(VAR_7, VAR_1);
}
