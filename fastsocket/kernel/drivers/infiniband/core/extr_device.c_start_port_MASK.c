
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {scalar_t__ node_type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ib_device *VAR_1)
{
 return (VAR_1->node_type == VAR_0) ? 0 : 1;
}
