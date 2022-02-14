
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carlu {int* event_pipe; int * dev; int * fw; } ;


 int FUNC_0 (struct carlu*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct carlu*) ;
 int FUNC_3 (struct carlu*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct carlu *VAR_0)
{
 if (!FUNC_0(VAR_0)) {
  if (VAR_0->event_pipe[0] > -1)
   FUNC_4(VAR_0->event_pipe[0]);

  if (VAR_0->event_pipe[1] > -1)
   FUNC_4(VAR_0->event_pipe[1]);

  FUNC_3(VAR_0);
  FUNC_1(VAR_0->fw);
  VAR_0->fw = ((void*)0);

  if (VAR_0->dev) {
   FUNC_6(VAR_0->dev, 0);
   FUNC_5(VAR_0->dev);
   VAR_0->dev = ((void*)0);
  }
  FUNC_2(VAR_0);
 }
}
