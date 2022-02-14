
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int* cmdbuf; int serio; int cmdcnt; int flags; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ps2dev *VAR_0, int VAR_1, int VAR_2)
{
 switch (VAR_1) {
  case 128:







   if (VAR_2 > FUNC_0(100))
    VAR_2 = FUNC_0(100);
   break;

  case 129:






   if (VAR_0->cmdbuf[1] == 0xaa) {
    FUNC_3(VAR_0->serio);
    VAR_0->flags = 0;
    FUNC_2(VAR_0->serio);
    VAR_2 = 0;
   }





   if (!FUNC_1(VAR_0->cmdbuf[1])) {
    FUNC_3(VAR_0->serio);
    VAR_0->flags = VAR_0->cmdcnt = 0;
    FUNC_2(VAR_0->serio);
    VAR_2 = 0;
   }
   break;

  default:
   break;
 }

 return VAR_2;
}
