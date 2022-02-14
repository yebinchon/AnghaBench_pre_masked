
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_data {int v_dev; } ;
struct vbi_data {int v_dev; } ;
struct poseidon {struct vbi_data vbi_data; struct video_data video_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;

void FUNC_2(struct poseidon *VAR_0)
{
 struct video_data *VAR_1 = &VAR_0->video_data;
 struct vbi_data *VAR_2 = &VAR_0->vbi_data;

 FUNC_0(&VAR_1->v_dev);
 FUNC_0(&VAR_2->v_dev);
 FUNC_1();
}
