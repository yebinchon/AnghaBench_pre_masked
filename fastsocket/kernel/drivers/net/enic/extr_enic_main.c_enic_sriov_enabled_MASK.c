
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enic {int priv_flags; } ;


 int VAR_0 ;

int FUNC_0(struct enic *VAR_1)
{
 return (VAR_1->priv_flags & VAR_0) ? 1 : 0;
}
