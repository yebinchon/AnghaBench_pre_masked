
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int server; int * context; } ;
typedef TYPE_1__ gdb_stub ;
typedef int YabSock ;
typedef int SH2_struct ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (int) ;

int FUNC_4(SH2_struct * VAR_2, int VAR_3)
{
   int VAR_4 = 1;
   YabSock VAR_5;
   gdb_stub * VAR_6;
   int VAR_7;

   FUNC_0();

   if ((VAR_7 = FUNC_1(VAR_3, &VAR_5)) != 0)
      return VAR_7;

   VAR_6 = FUNC_3(sizeof(gdb_stub));
   VAR_6->context = VAR_2;
   VAR_6->server = VAR_5;

   FUNC_2(VAR_0, VAR_1, VAR_6);

   return 0;
}
