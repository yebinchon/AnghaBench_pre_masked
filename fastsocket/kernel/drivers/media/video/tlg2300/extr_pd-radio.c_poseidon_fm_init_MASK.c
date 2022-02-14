
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct TYPE_2__ {struct video_device* fm_dev; } ;
struct poseidon {TYPE_1__ radio_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct video_device* FUNC_0 (struct poseidon*,int *) ;
 int FUNC_1 (struct video_device*) ;
 scalar_t__ FUNC_2 (struct video_device*,int ,int) ;

int FUNC_3(struct poseidon *VAR_2)
{
 struct video_device *VAR_3;

 VAR_3 = FUNC_0(VAR_2, &VAR_1);
 if (VAR_3 == ((void*)0))
  return -1;

 if (FUNC_2(VAR_3, VAR_0, -1) < 0) {
  FUNC_1(VAR_3);
  return -1;
 }
 VAR_2->radio_data.fm_dev = VAR_3;
 return 0;
}
