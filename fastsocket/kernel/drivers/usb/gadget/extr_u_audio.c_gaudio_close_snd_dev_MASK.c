
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gaudio_snd_dev {int filp; } ;
struct gaudio {struct gaudio_snd_dev capture; struct gaudio_snd_dev playback; struct gaudio_snd_dev control; } ;
struct TYPE_2__ {int files; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct gaudio *VAR_1)
{
 struct gaudio_snd_dev *VAR_2;


 VAR_2 = &VAR_1->control;
 if (!FUNC_0(VAR_2->filp))
  FUNC_1(VAR_2->filp, VAR_0->files);


 VAR_2 = &VAR_1->playback;
 if (!FUNC_0(VAR_2->filp))
  FUNC_1(VAR_2->filp, VAR_0->files);


 VAR_2 = &VAR_1->capture;
 if (!FUNC_0(VAR_2->filp))
  FUNC_1(VAR_2->filp, VAR_0->files);

 return 0;
}
