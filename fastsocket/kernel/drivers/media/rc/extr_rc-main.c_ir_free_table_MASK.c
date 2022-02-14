
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_map {int * scan; scalar_t__ size; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct rc_map *VAR_0)
{
 VAR_0->size = 0;
 FUNC_0(VAR_0->scan);
 VAR_0->scan = ((void*)0);
}
