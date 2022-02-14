
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_block {int start; int size; struct mem_block* prev; struct mem_block* next; struct drm_file* file_priv; } ;
struct drm_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mem_block*) ;
 struct mem_block* FUNC_1 (int,int ) ;
 struct mem_block* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct mem_block **VAR_2, int VAR_3, int VAR_4)
{
 struct mem_block *VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);

 if (!VAR_5)
  return -VAR_0;

 *VAR_2 = FUNC_2(sizeof(**VAR_2), VAR_1);
 if (!*VAR_2) {
  FUNC_0(VAR_5);
  return -VAR_0;
 }

 VAR_5->start = VAR_3;
 VAR_5->size = VAR_4;
 VAR_5->file_priv = ((void*)0);
 VAR_5->next = VAR_5->prev = *VAR_2;

 (*VAR_2)->file_priv = (struct drm_file *) - 1;
 (*VAR_2)->next = (*VAR_2)->prev = VAR_5;
 return 0;
}
