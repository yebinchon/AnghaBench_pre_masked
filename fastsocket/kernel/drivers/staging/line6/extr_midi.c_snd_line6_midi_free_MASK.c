
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_line6_midi {int midibuf_out; int midibuf_in; TYPE_1__* line6; } ;
struct snd_device {struct snd_line6_midi* device_data; } ;
struct TYPE_2__ {int ifcdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct snd_device *VAR_2)
{
 struct snd_line6_midi *VAR_3 = VAR_2->device_data;
 FUNC_0(VAR_3->line6->ifcdev, &VAR_1);
 FUNC_0(VAR_3->line6->ifcdev, &VAR_0);
 FUNC_1(&VAR_3->midibuf_in);
 FUNC_1(&VAR_3->midibuf_out);
 return 0;
}
