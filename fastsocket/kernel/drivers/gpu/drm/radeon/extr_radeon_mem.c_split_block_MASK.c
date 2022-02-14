
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_block {int start; int size; struct drm_file* file_priv; struct mem_block* next; struct mem_block* prev; } ;
struct drm_file {int dummy; } ;


 int VAR_0 ;
 struct mem_block* FUNC_0 (int,int ) ;

__attribute__((used)) static struct mem_block *FUNC_1(struct mem_block *VAR_1, int VAR_2, int VAR_3,
         struct drm_file *VAR_4)
{

 if (VAR_2 > VAR_1->start) {
  struct mem_block *VAR_5 = FUNC_0(sizeof(*VAR_5),
           VAR_0);
  if (!VAR_5)
   goto out;
  VAR_5->start = VAR_2;
  VAR_5->size = VAR_1->size - (VAR_2 - VAR_1->start);
  VAR_5->file_priv = ((void*)0);
  VAR_5->next = VAR_1->next;
  VAR_5->prev = VAR_1;
  VAR_1->next->prev = VAR_5;
  VAR_1->next = VAR_5;
  VAR_1->size -= VAR_5->size;
  VAR_1 = VAR_5;
 }


 if (VAR_3 < VAR_1->size) {
  struct mem_block *VAR_6 = FUNC_0(sizeof(*VAR_6),
           VAR_0);
  if (!VAR_6)
   goto out;
  VAR_6->start = VAR_2 + VAR_3;
  VAR_6->size = VAR_1->size - VAR_3;
  VAR_6->file_priv = ((void*)0);
  VAR_6->next = VAR_1->next;
  VAR_6->prev = VAR_1;
  VAR_1->next->prev = VAR_6;
  VAR_1->next = VAR_6;
  VAR_1->size = VAR_3;
 }

      out:

 VAR_1->file_priv = VAR_4;
 return VAR_1;
}
