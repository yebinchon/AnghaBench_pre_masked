
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_pid_state {scalar_t__ index; int * monitor; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__* VAR_10 ;

__attribute__((used)) static void FUNC_1(struct cpu_pid_state *VAR_11)
{
 if (VAR_11->monitor == ((void*)0))
  return;

 if (VAR_11->index == 0) {
  FUNC_0(&VAR_10->dev, &VAR_3);
  FUNC_0(&VAR_10->dev, &VAR_4);
  FUNC_0(&VAR_10->dev, &VAR_0);
  FUNC_0(&VAR_10->dev, &VAR_1);
  FUNC_0(&VAR_10->dev, &VAR_2);
 } else {
  FUNC_0(&VAR_10->dev, &VAR_8);
  FUNC_0(&VAR_10->dev, &VAR_9);
  FUNC_0(&VAR_10->dev, &VAR_5);
  FUNC_0(&VAR_10->dev, &VAR_6);
  FUNC_0(&VAR_10->dev, &VAR_7);
 }

 VAR_11->monitor = ((void*)0);
}
