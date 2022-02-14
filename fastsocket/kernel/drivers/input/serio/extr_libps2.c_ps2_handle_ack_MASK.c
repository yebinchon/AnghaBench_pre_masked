
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int nak; int flags; int wait; scalar_t__ cmdcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (struct ps2dev*,unsigned char) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct ps2dev *VAR_5, unsigned char VAR_6)
{
 switch (VAR_6) {
  case 130:
   VAR_5->nak = 0;
   break;

  case 128:
   VAR_5->flags |= VAR_3;
   VAR_5->nak = 128;
   break;

  case 129:
   if (VAR_5->flags & VAR_3) {
    VAR_5->flags &= ~VAR_3;
    VAR_5->nak = 129;
    break;
   }





  case 0x00:
  case 0x03:
  case 0x04:
   if (VAR_5->flags & VAR_4) {
    VAR_5->nak = 0;
    break;
   }

  default:
   return 0;
 }


 if (!VAR_5->nak) {
  VAR_5->flags &= ~VAR_3;
  if (VAR_5->cmdcnt)
   VAR_5->flags |= VAR_1 | VAR_2;
 }

 VAR_5->flags &= ~VAR_0;
 FUNC_1(&VAR_5->wait);

 if (VAR_6 != 130)
  FUNC_0(VAR_5, VAR_6);

 return 1;
}
