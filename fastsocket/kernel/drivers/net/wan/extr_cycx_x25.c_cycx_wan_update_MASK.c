
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wan_device {scalar_t__ state; int private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct wan_device *VAR_3)
{

 if (!VAR_3 || !VAR_3->private)
  return -VAR_0;

 if (VAR_3->state == VAR_2)
  return -VAR_1;

 FUNC_0(VAR_3->private);

 return 0;
}
