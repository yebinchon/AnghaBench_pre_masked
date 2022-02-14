
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct v4l2_pix_format {int height; int sizeimage; int width; } ;
struct running_context {int tvnormid; struct v4l2_pix_format pix; } ;
struct video_data {struct running_context context; } ;
struct vbi_data {int vbi_size; } ;
struct poseidon {int lock; struct vbi_data vbi_data; struct video_data video_data; } ;
typedef size_t s32 ;
struct TYPE_2__ {int v4l2_id; size_t tlg_tvnorm; int name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_6 ;
 size_t FUNC_3 (struct poseidon*,int ,size_t,size_t*) ;

__attribute__((used)) static int FUNC_4(struct poseidon *VAR_7, v4l2_std_id *VAR_8)
{
 struct video_data *VAR_9 = &VAR_7->video_data;
 struct vbi_data *VAR_10 = &VAR_7->vbi_data;
 struct running_context *VAR_11;
 struct v4l2_pix_format *VAR_12;
 s32 VAR_13, VAR_14 = 0, VAR_15, VAR_16;
 int VAR_17;

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  if (*VAR_8 & VAR_6[VAR_13].v4l2_id) {
   VAR_16 = VAR_6[VAR_13].tlg_tvnorm;
   FUNC_0("name : %s", VAR_6[VAR_13].name);
   goto found;
  }
 }
 return -VAR_0;
found:
 FUNC_1(&VAR_7->lock);
 VAR_14 = FUNC_3(VAR_7, VAR_5, VAR_16, &VAR_15);
 if (VAR_14 || VAR_15)
  goto out;


 VAR_11 = &VAR_9->context;
 VAR_11->tvnormid = VAR_6[VAR_13].v4l2_id;
 if (VAR_11->tvnormid & VAR_2) {
  VAR_10->vbi_size = VAR_3;
  VAR_17 = 480;
 } else {
  VAR_10->vbi_size = VAR_4;
  VAR_17 = 576;
 }

 VAR_12 = &VAR_11->pix;
 if (VAR_12->height != VAR_17) {
  VAR_12->height = VAR_17;
  VAR_12->sizeimage = VAR_12->width * VAR_12->height * 2;
 }

out:
 FUNC_2(&VAR_7->lock);
 return VAR_14;
}
