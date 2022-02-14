
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp ;
typedef int UINT ;
struct TYPE_5__ {TYPE_1__* SockEvent; } ;
struct TYPE_4__ {int pipe_read; scalar_t__ current_pipe_data; } ;
typedef TYPE_2__ TUBE ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int,int*,int ,int *,int) ;
 int* FUNC_2 (int) ;
 int FUNC_3 (int,char*,int) ;

void FUNC_4(TUBE **VAR_1, UINT VAR_2, UINT VAR_3)
{
 int *VAR_4;
 UINT VAR_5;
 char VAR_6[VAR_0];
 bool VAR_7 = 0;

 VAR_4 = FUNC_2(sizeof(int) * VAR_2);

 for (VAR_5 = 0;VAR_5 < VAR_2;VAR_5++)
 {
  VAR_4[VAR_5] = VAR_1[VAR_5]->SockEvent->pipe_read;

  if (VAR_1[VAR_5]->SockEvent->current_pipe_data != 0)
  {
   VAR_7 = 1;
  }
 }

 if (VAR_7 == 0)
 {
  FUNC_1(VAR_2, VAR_4, 0, ((void*)0), VAR_3);
 }

 for (VAR_5 = 0;VAR_5 < VAR_2;VAR_5++)
 {
  int VAR_8 = VAR_4[VAR_5];
  int VAR_9;

  VAR_1[VAR_5]->SockEvent->current_pipe_data = 0;

  do
  {
   VAR_9 = FUNC_3(VAR_8, VAR_6, sizeof(VAR_6));
  }
  while (VAR_9 >= 1);
 }

 FUNC_0(VAR_4);
}
