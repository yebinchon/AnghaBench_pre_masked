
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct readyevents_arg {int locked; int ep; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, void *VAR_2, int VAR_3)
{
 struct readyevents_arg *VAR_4 = VAR_1;

 return FUNC_0(VAR_4->ep, VAR_0, ((void*)0),
      VAR_4->locked);
}
