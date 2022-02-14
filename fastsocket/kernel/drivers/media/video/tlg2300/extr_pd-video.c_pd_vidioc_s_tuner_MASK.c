
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int audio_idx; int tvnormid; } ;
struct TYPE_5__ {TYPE_1__ context; } ;
struct poseidon {int lock; TYPE_2__ video_data; } ;
typedef int s32 ;
struct TYPE_6__ {int tlg_audio_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_3__* VAR_2 ;
 int FUNC_3 (struct poseidon*,int ,int,int*) ;

__attribute__((used)) static int FUNC_4(struct poseidon *VAR_3, int VAR_4)
{
 s32 VAR_5 = 0, VAR_6, VAR_7, VAR_8;

 FUNC_1(&VAR_3->lock);
 VAR_7 = VAR_2[VAR_4].tlg_audio_mode;
 VAR_5 = FUNC_3(VAR_3, VAR_1, VAR_7, &VAR_6);
 VAR_8 = FUNC_0(VAR_3->video_data.context.tvnormid);
 VAR_5 |= FUNC_3(VAR_3, VAR_0, VAR_8,
    &VAR_6);
 if (!VAR_5)
  VAR_3->video_data.context.audio_idx = VAR_4;
 FUNC_2(&VAR_3->lock);
 return VAR_5;
}
