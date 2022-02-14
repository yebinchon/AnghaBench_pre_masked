
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int nak; int flags; int serio; int wait; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,unsigned char) ;
 int FUNC_4 (int ,int,int ) ;

int FUNC_5(struct ps2dev *VAR_1, unsigned char VAR_2, int VAR_3)
{
 FUNC_2(VAR_1->serio);
 VAR_1->nak = 1;
 VAR_1->flags |= VAR_0;
 FUNC_1(VAR_1->serio);

 if (FUNC_3(VAR_1->serio, VAR_2) == 0)
  FUNC_4(VAR_1->wait,
       !(VAR_1->flags & VAR_0),
       FUNC_0(VAR_3));

 FUNC_2(VAR_1->serio);
 VAR_1->flags &= ~VAR_0;
 FUNC_1(VAR_1->serio);

 return -VAR_1->nak;
}
