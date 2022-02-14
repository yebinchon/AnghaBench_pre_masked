
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st6422_settings {int ctrls; } ;
struct TYPE_4__ {void* nctrls; void* ctrls; } ;
struct TYPE_6__ {int ctrls; void* nmodes; void* cam_mode; } ;
struct TYPE_5__ {TYPE_3__ cam; } ;
struct sd {scalar_t__ bridge; struct st6422_settings* sensor_priv; TYPE_1__ desc; TYPE_2__ gspca_dev; } ;


 void* FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 struct st6422_settings* FUNC_2 (int,int ) ;
 void* VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static int FUNC_3(struct sd *VAR_6)
{
 struct st6422_settings *VAR_7;

 if (VAR_6->bridge != VAR_0)
  return -VAR_1;

 FUNC_1("st6422 sensor detected");

 VAR_7 = FUNC_2(sizeof *VAR_7, VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_6->gspca_dev.cam.cam_mode = VAR_5;
 VAR_6->gspca_dev.cam.nmodes = FUNC_0(VAR_5);
 VAR_6->gspca_dev.cam.ctrls = VAR_7->ctrls;
 VAR_6->desc.ctrls = VAR_4;
 VAR_6->desc.nctrls = FUNC_0(VAR_4);
 VAR_6->sensor_priv = VAR_7;

 return 0;
}
