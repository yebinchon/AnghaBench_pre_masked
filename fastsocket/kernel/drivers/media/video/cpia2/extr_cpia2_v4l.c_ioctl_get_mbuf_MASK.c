
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_mbuf {int size; int frames; int* offsets; } ;
struct camera_data {int frame_size; int num_frames; } ;


 int FUNC_0 (struct video_mbuf*,int ,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, struct camera_data *VAR_1)
{
 struct video_mbuf *VAR_2;
 int VAR_3;
 VAR_2 = VAR_0;

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->size = VAR_1->frame_size*VAR_1->num_frames;
 VAR_2->frames = VAR_1->num_frames;
 for (VAR_3 = 0; VAR_3 < VAR_1->num_frames; VAR_3++)
  VAR_2->offsets[VAR_3] = VAR_1->frame_size * VAR_3;

 return 0;
}
