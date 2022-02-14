
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_data {int * v_dev; } ;
struct vbi_data {int * v_dev; } ;
struct poseidon {struct vbi_data vbi_data; struct video_data video_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct poseidon*) ;
 int VAR_3 ;
 void* FUNC_2 (struct poseidon*,int *) ;
 int FUNC_3 (int *,int ,int) ;

int FUNC_4(struct poseidon *VAR_4)
{
 struct video_data *VAR_5 = &VAR_4->video_data;
 struct vbi_data *VAR_6 = &VAR_4->vbi_data;
 int VAR_7 = -VAR_0;

 VAR_5->v_dev = FUNC_2(VAR_4, &VAR_3);
 if (VAR_5->v_dev == ((void*)0))
  goto out;

 VAR_7 = FUNC_3(VAR_5->v_dev, VAR_1, -1);
 if (VAR_7 != 0)
  goto out;


 VAR_6->v_dev = FUNC_2(VAR_4, &VAR_3);
 if (VAR_6->v_dev == ((void*)0)) {
  VAR_7 = -VAR_0;
  goto out;
 }
 VAR_7 = FUNC_3(VAR_6->v_dev, VAR_2, -1);
 if (VAR_7 != 0)
  goto out;
 FUNC_0("register VIDEO/VBI devices");
 return 0;
out:
 FUNC_0("VIDEO/VBI devices register failed, : %d", VAR_7);
 FUNC_1(VAR_4);
 return VAR_7;
}
