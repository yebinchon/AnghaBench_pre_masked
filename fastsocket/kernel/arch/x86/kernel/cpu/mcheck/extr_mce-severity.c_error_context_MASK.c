
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce {int cs; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct mce *VAR_2)
{
 return ((VAR_2->cs & 3) == 3) ? VAR_1 : VAR_0;
}
