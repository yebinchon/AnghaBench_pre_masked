
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; int * cls; } ;
struct node {TYPE_1__ sysdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct node*) ;
 int FUNC_1 (struct node*) ;
 int VAR_5 ;
 int FUNC_2 (struct node*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(struct node *VAR_6, int VAR_7, struct node *VAR_8)
{
 int VAR_9;

 VAR_6->sysdev.id = VAR_7;
 VAR_6->sysdev.cls = &VAR_5;
 VAR_9 = FUNC_4(&VAR_6->sysdev);

 if (!VAR_9){
  FUNC_3(&VAR_6->sysdev, &VAR_1);
  FUNC_3(&VAR_6->sysdev, &VAR_0);
  FUNC_3(&VAR_6->sysdev, &VAR_3);
  FUNC_3(&VAR_6->sysdev, &VAR_4);
  FUNC_3(&VAR_6->sysdev, &VAR_2);

  FUNC_2(VAR_6);

  FUNC_1(VAR_6);

  FUNC_0(VAR_6);
 }
 return VAR_9;
}
