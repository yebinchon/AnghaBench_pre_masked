
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {void* nctrls; void* ctrls; } ;
struct TYPE_6__ {void* nmodes; void* cam_mode; } ;
struct TYPE_7__ {TYPE_1__ cam; } ;
struct sd {scalar_t__ bridge; struct hdcs* sensor_priv; TYPE_3__ desc; TYPE_2__ gspca_dev; } ;
struct TYPE_10__ {int cto; int cpo; int rs; int er; } ;
struct TYPE_9__ {int left; int top; int border; int height; int width; } ;
struct hdcs {int psmp; TYPE_5__ exp; TYPE_4__ array; } ;


 void* FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_1 (char*) ;
 struct hdcs* FUNC_2 (int,int ) ;
 int FUNC_3 (struct sd*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct sd *VAR_9)
{
 struct hdcs *VAR_10;
 u16 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_3(VAR_9, VAR_6, &VAR_11);
 if (VAR_12 < 0 || VAR_11 != 0x08)
  return -VAR_1;

 FUNC_1("HDCS-1000/1100 sensor detected");

 VAR_9->gspca_dev.cam.cam_mode = VAR_8;
 VAR_9->gspca_dev.cam.nmodes = FUNC_0(VAR_8);
 VAR_9->desc.ctrls = VAR_7;
 VAR_9->desc.nctrls = FUNC_0(VAR_7);

 VAR_10 = FUNC_2(sizeof(struct hdcs), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->array.left = 8;
 VAR_10->array.top = 8;
 VAR_10->array.width = VAR_5;
 VAR_10->array.height = VAR_4;
 VAR_10->array.border = 4;

 VAR_10->exp.cto = 4;
 VAR_10->exp.cpo = 2;
 VAR_10->exp.rs = 186;
 VAR_10->exp.er = 100;
 VAR_10->psmp = (VAR_9->bridge == VAR_0) ? 20 : 5;

 VAR_9->sensor_priv = VAR_10;

 return 0;
}
