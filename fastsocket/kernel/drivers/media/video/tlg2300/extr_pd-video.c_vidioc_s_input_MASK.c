
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int sig_index; } ;
struct TYPE_5__ {TYPE_1__ context; } ;
struct poseidon {TYPE_2__ video_data; } ;
struct front_face {struct poseidon* pd; } ;
struct file {int dummy; } ;
typedef int s32 ;
struct TYPE_6__ {int tlg_src; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (struct poseidon*,int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5, unsigned int VAR_6)
{
 struct front_face *VAR_7 = VAR_5;
 struct poseidon *VAR_8 = VAR_7->pd;
 s32 VAR_9, VAR_10;

 if (VAR_6 < 0 || VAR_6 >= VAR_1)
  return -VAR_0;
 VAR_9 = FUNC_0(VAR_8, VAR_2,
   VAR_3[VAR_6].tlg_src, &VAR_10);
 if (VAR_9)
  return VAR_9;

 VAR_8->video_data.context.sig_index = VAR_6;
 return 0;
}
