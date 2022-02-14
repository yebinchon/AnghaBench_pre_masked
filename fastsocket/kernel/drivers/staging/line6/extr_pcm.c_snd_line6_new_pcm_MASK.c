
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm {int name; int private_free; struct snd_line6_pcm* private_data; } ;
struct snd_line6_pcm {TYPE_2__* line6; struct snd_pcm* pcm; } ;
struct TYPE_4__ {TYPE_1__* properties; int card; } ;
struct TYPE_3__ {scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,int ,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct snd_line6_pcm *VAR_7)
{
 struct snd_pcm *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_7->line6->card,
    (char *)VAR_7->line6->properties->name,
    0, 1, 1, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8->private_data = VAR_7;
 VAR_8->private_free = VAR_4;
 VAR_7->pcm = VAR_8;
 FUNC_4(VAR_8->name, VAR_7->line6->properties->name);


 FUNC_3(VAR_8, VAR_3, &VAR_6);
 FUNC_3(VAR_8, VAR_2, &VAR_5);


 FUNC_1(VAR_8, VAR_1,
     FUNC_0(VAR_0),
     64 * 1024, 128 * 1024);

 return 0;
}
