
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_open_hash {unsigned int order; int * table; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (unsigned int,int,int ) ;
 int * FUNC_2 (unsigned int) ;

int FUNC_3(struct drm_open_hash *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = 1 << VAR_4;

 VAR_3->order = VAR_4;
 VAR_3->table = ((void*)0);
 if (VAR_5 <= VAR_2 / sizeof(*VAR_3->table))
  VAR_3->table = FUNC_1(VAR_5, sizeof(*VAR_3->table), VAR_1);
 else
  VAR_3->table = FUNC_2(VAR_5*sizeof(*VAR_3->table));
 if (!VAR_3->table) {
  FUNC_0("Out of memory for hash table\n");
  return -VAR_0;
 }
 return 0;
}
