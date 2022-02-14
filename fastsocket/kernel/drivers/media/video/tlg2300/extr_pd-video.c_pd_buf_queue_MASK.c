
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {struct front_face* priv_data; } ;
struct videobuf_buffer {int queue; int state; } ;
struct front_face {int active; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct videobuf_queue *VAR_1, struct videobuf_buffer *VAR_2)
{
 struct front_face *VAR_3 = VAR_1->priv_data;
 VAR_2->state = VAR_0;
 FUNC_0(&VAR_2->queue, &VAR_3->active);
}
