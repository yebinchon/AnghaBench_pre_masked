
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fifo; int wq; int * jog_dev; int * key_dev; int users; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_5(void)
{

 if (!FUNC_0(&VAR_0.users))
  return;


 FUNC_2(VAR_0.wq);


 FUNC_3(VAR_0.key_dev);
 VAR_0.key_dev = ((void*)0);

 if (VAR_0.jog_dev) {
  FUNC_3(VAR_0.jog_dev);
  VAR_0.jog_dev = ((void*)0);
 }

 FUNC_1(VAR_0.wq);
 FUNC_4(VAR_0.fifo);
}
