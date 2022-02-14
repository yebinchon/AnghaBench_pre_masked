
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct si4713_device {scalar_t__ power_state; TYPE_1__* platform_data; int sd; } ;
struct TYPE_2__ {int (* set_power ) (int ) ;} ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct si4713_device*,int ,int *,int ,int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ,int *,char*,...) ;

__attribute__((used)) static int FUNC_4(struct si4713_device *VAR_5)
{
 int VAR_6;
 u8 VAR_7[VAR_3];

 if (!VAR_5->power_state)
  return 0;

 VAR_6 = FUNC_1(VAR_5, VAR_2,
     ((void*)0), 0,
     VAR_7, FUNC_0(VAR_7),
     VAR_0);

 if (!VAR_6) {
  FUNC_3(1, VAR_4, &VAR_5->sd, "Power down response: 0x%02x\n",
    VAR_7[0]);
  FUNC_3(1, VAR_4, &VAR_5->sd, "Device in reset mode\n");
  VAR_5->platform_data->set_power(0);
  VAR_5->power_state = VAR_1;
 }

 return VAR_6;
}
