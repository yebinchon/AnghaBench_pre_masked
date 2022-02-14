
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b3dfg_dev {struct b3dfg_buffer* buffers; } ;
struct b3dfg_buffer {int list; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct b3dfg_dev *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct b3dfg_buffer *VAR_4 = &VAR_2->buffers[VAR_3];
  VAR_4->state = VAR_0;
  FUNC_0(&VAR_4->list);
 }
}
