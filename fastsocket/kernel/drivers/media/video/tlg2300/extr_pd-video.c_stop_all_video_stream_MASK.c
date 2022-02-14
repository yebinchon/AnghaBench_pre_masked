
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_data {struct front_face* front; scalar_t__ is_streaming; } ;
struct vbi_data {struct front_face* front; } ;
struct poseidon {int lock; struct vbi_data vbi_data; struct video_data video_data; } ;
struct front_face {int q; } ;


 int FUNC_0 (struct video_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct video_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct poseidon *VAR_0)
{
 struct video_data *VAR_1 = &VAR_0->video_data;
 struct vbi_data *VAR_2 = &VAR_0->vbi_data;

 FUNC_1(&VAR_0->lock);
 if (VAR_1->is_streaming) {
  struct front_face *VAR_3 = VAR_1->front;


  FUNC_3(VAR_1);
  FUNC_0(VAR_1);


  FUNC_5(&VAR_3->q);
  FUNC_4(&VAR_3->q);


  VAR_3 = VAR_2->front;
  if (VAR_3) {
   FUNC_5(&VAR_3->q);
   FUNC_4(&VAR_3->q);
  }
 }
 FUNC_2(&VAR_0->lock);
 return 0;
}
