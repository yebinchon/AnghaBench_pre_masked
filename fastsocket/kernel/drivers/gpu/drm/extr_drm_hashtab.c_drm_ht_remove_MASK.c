
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_open_hash {int order; int * table; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drm_open_hash *VAR_1)
{
 if (VAR_1->table) {
  if ((VAR_0 / sizeof(*VAR_1->table)) >> VAR_1->order)
   FUNC_0(VAR_1->table);
  else
   FUNC_1(VAR_1->table);
  VAR_1->table = ((void*)0);
 }
}
