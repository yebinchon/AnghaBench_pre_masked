
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_10__ {int nctrls; TYPE_5__* ctrls; } ;
struct TYPE_8__ {int nmodes; TYPE_5__* cam_mode; } ;
struct TYPE_9__ {TYPE_1__ cam; } ;
struct sd {int * sensor_priv; TYPE_3__ desc; TYPE_2__ gspca_dev; } ;
typedef int s32 ;
struct TYPE_11__ {int default_value; } ;
struct TYPE_12__ {TYPE_4__ qctrl; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (struct sd*,int ,int*) ;
 TYPE_5__* VAR_4 ;
 TYPE_5__* VAR_5 ;

__attribute__((used)) static int FUNC_4(struct sd *VAR_6)
{
 u16 VAR_7;
 int VAR_8, VAR_9;
 s32 *VAR_10;

 VAR_8 = FUNC_3(VAR_6, VAR_3, &VAR_7);
 if (VAR_8 < 0)
  return -VAR_0;

 if (VAR_7 == 0x19) {
  FUNC_1("vv6410 sensor detected");

  VAR_10 = FUNC_2(FUNC_0(VAR_4) * sizeof(s32),
       VAR_2);
  if (!VAR_10)
   return -VAR_1;

  VAR_6->gspca_dev.cam.cam_mode = VAR_5;
  VAR_6->gspca_dev.cam.nmodes = FUNC_0(VAR_5);
  VAR_6->desc.ctrls = VAR_4;
  VAR_6->desc.nctrls = FUNC_0(VAR_4);

  for (VAR_9 = 0; VAR_9 < VAR_6->desc.nctrls; VAR_9++)
   VAR_10[VAR_9] = VAR_4[VAR_9].qctrl.default_value;
  VAR_6->sensor_priv = VAR_10;
  return 0;
 }
 return -VAR_0;
}
