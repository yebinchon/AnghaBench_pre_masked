
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {int bg_channels; int a_channels; TYPE_2__* a; TYPE_1__* bg; } ;
struct libipw_device {int freq_band; TYPE_3__ geo; } ;
struct TYPE_5__ {scalar_t__ channel; } ;
struct TYPE_4__ {scalar_t__ channel; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct libipw_device *VAR_2, u8 VAR_3)
{
 int VAR_4;



 if (VAR_2->geo.bg_channels == 0 && VAR_2->geo.a_channels == 0)
  return -1;

 if (VAR_2->freq_band & VAR_0)
  for (VAR_4 = 0; VAR_4 < VAR_2->geo.bg_channels; VAR_4++)
   if (VAR_2->geo.bg[VAR_4].channel == VAR_3)
    return VAR_4;

 if (VAR_2->freq_band & VAR_1)
  for (VAR_4 = 0; VAR_4 < VAR_2->geo.a_channels; VAR_4++)
   if (VAR_2->geo.a[VAR_4].channel == VAR_3)
    return VAR_4;

 return -1;
}
