
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int error_flag; int eof_flag; } ;
typedef TYPE_1__ RFILE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,long,int ) ;

void FUNC_1(RFILE *VAR_1)
{
   if (!VAR_1)
      return;
   FUNC_0(VAR_1, 0L, VAR_0);
   VAR_1->error_flag = 0;
   VAR_1->eof_flag = 0;
}
