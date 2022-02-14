
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int shmid; int shmaddr; } ;
struct TYPE_4__ {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(void)
{

  if (!FUNC_1(VAR_1, &VAR_2))
     FUNC_0("XShmDetach() failed in I_ShutdownGraphics()");


  FUNC_3(VAR_2.shmaddr);
  FUNC_2(VAR_2.shmid, VAR_0, 0);


  VAR_3->data = ((void*)0);
}
