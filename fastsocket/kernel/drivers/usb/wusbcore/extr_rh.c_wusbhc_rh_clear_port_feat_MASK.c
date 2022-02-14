
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct wusbhc {scalar_t__ ports_max; int mutex; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int change; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wusbhc*,scalar_t__) ;
 int FUNC_1 (struct device*,char*,scalar_t__,int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (struct wusbhc*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct wusbhc *VAR_6, u16 VAR_7,
         u8 VAR_8, u8 VAR_9)
{
 int VAR_10 = 0;
 struct device *VAR_11 = VAR_6->dev;

 if (VAR_9 > VAR_6->ports_max)
  return -VAR_0;

 FUNC_2(&VAR_6->mutex);
 switch (VAR_7) {
 case 129:

 case 133:
  break;
 case 132:
  FUNC_4(VAR_6, VAR_9)->change &= ~VAR_5;
  break;
 case 135:
  FUNC_4(VAR_6, VAR_9)->change &= ~VAR_3;
  break;
 case 130:
  FUNC_0(VAR_6, VAR_9);
  break;
 case 134:
  FUNC_4(VAR_6, VAR_9)->change &= ~VAR_4;
  break;
 case 128:
 case 131:
  FUNC_1(VAR_11, "(port_idx %d) Clear feat %d/%d UNIMPLEMENTED\n",
   VAR_9, VAR_7, VAR_8);
  VAR_10 = -VAR_1;
  break;
 default:
  FUNC_1(VAR_11, "(port_idx %d) Clear feat %d/%d UNKNOWN\n",
   VAR_9, VAR_7, VAR_8);
  VAR_10 = -VAR_2;
  break;
 }
 FUNC_3(&VAR_6->mutex);

 return VAR_10;
}
