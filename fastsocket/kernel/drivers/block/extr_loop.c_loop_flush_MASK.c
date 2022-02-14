
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {int lo_thread; } ;


 int FUNC_0 (struct loop_device*,int *) ;

__attribute__((used)) static int FUNC_1(struct loop_device *VAR_0)
{

 if (!VAR_0->lo_thread)
  return 0;

 return FUNC_0(VAR_0, ((void*)0));
}
