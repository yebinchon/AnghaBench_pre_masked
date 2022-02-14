
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carlfw_file {int * data; int * name; scalar_t__ len; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct carlfw_file *VAR_0)
{
 VAR_0->len = 0;
 if (VAR_0->name)
  FUNC_0(VAR_0->name);
 VAR_0->name = ((void*)0);

 if (VAR_0->data)
  FUNC_0(VAR_0->data);
 VAR_0->data = ((void*)0);
}
