
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int msg_bufx; int msg_bufr; int msg_size; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

void
FUNC_4(char VAR_1)
{
 int VAR_2 = 0;
 FUNC_0();
 FUNC_2(VAR_0, VAR_1);
 VAR_2 = VAR_0->msg_bufx - VAR_0->msg_bufr;
 FUNC_1();

 if (VAR_2 < 0)
  VAR_2 = 0 - VAR_2;
 if (VAR_1 == '\n' || VAR_2 >= (VAR_0->msg_size / 2))
  FUNC_3(VAR_0);
}
