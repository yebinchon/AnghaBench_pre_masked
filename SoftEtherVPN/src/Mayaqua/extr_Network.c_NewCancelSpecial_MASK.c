
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int SpecialFlag; int pipe_read; int pipe_write; scalar_t__ hEvent; int ref; } ;
typedef scalar_t__ HANDLE ;
typedef TYPE_1__ CANCEL ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;

CANCEL *FUNC_2(void *VAR_0)
{
 CANCEL *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_1(sizeof(CANCEL));
 VAR_1->ref = FUNC_0();
 VAR_1->SpecialFlag = 1;




 VAR_1->pipe_read = (int)VAR_0;
 VAR_1->pipe_write = -1;


 return VAR_1;
}
