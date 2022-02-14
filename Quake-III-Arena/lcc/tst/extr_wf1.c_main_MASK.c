
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct node {int dummy; } ;
struct TYPE_2__ {int count; } ;


 scalar_t__ FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (char*,struct node**) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct node*) ;

FUNC_3() {
 struct node *VAR_1;
 char VAR_2[20];

 VAR_1 = 0;
 VAR_0 = 0;
 while (FUNC_0(VAR_2))
  FUNC_1(VAR_2, &VAR_1)->count++;
 FUNC_2(VAR_1);
 return 0;
}
