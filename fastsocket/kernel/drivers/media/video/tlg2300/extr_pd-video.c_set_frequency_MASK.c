
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct running_context {int freq; } ;
struct TYPE_2__ {struct running_context context; } ;
struct poseidon {int lock; TYPE_1__ video_data; } ;
typedef int s32 ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct poseidon*,int ,int,int*) ;

__attribute__((used)) static int FUNC_4(struct poseidon *VAR_5, __u32 VAR_6)
{
 s32 VAR_7 = 0, VAR_8, VAR_9;
 struct running_context *VAR_10 = &VAR_5->video_data.context;

 VAR_8 = VAR_6 * 62500 / 1000;
 if (VAR_8 < VAR_3/1000 || VAR_8 > VAR_2 / 1000)
  return -VAR_0;

 FUNC_1(&VAR_5->lock);
 VAR_7 = FUNC_3(VAR_5, VAR_4, VAR_8, &VAR_9);
 VAR_7 = FUNC_3(VAR_5, VAR_1, 0, &VAR_9);

 FUNC_0(250);
 VAR_10->freq = VAR_6;
 FUNC_2(&VAR_5->lock);
 return VAR_7;
}
