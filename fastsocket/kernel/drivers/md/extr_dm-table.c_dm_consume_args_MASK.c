
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_arg_set {unsigned int argc; int argv; } ;


 int FUNC_0 (int) ;

void FUNC_1(struct dm_arg_set *VAR_0, unsigned VAR_1)
{
 FUNC_0(VAR_0->argc < VAR_1);
 VAR_0->argc -= VAR_1;
 VAR_0->argv += VAR_1;
}
