
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int * table; scalar_t__ nentry; scalar_t__ offset_max; int offsets; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct table *VAR_0)
{
 FUNC_0(&VAR_0->offsets);
 VAR_0->offset_max = 0;
 VAR_0->nentry = 0;
 VAR_0->table = ((void*)0);
}
