
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
struct sd {struct hdcs* sensor_priv; TYPE_3__ desc; TYPE_2__ gspca_dev; } ;
struct TYPE_10__ {int cto; int cpo; int rs; int er; } ;
struct TYPE_9__ {int left; int top; int height; int border; int width; } ;
struct hdcs {int psmp; TYPE_5__ exp; TYPE_4__ array; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (char*) ;
 struct hdcs* FUNC_2 (int,int ) ;
 int FUNC_3 (struct sd*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct sd *VAR_7)
{
 struct hdcs *VAR_8;
 u16 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_7, VAR_4, &VAR_9);
 if (VAR_10 < 0 || VAR_9 != 0x10)
  return -VAR_0;

 FUNC_1("HDCS-1020 sensor detected");

 VAR_7->gspca_dev.cam.cam_mode = VAR_6;
 VAR_7->gspca_dev.cam.nmodes = FUNC_0(VAR_6);
 VAR_7->desc.ctrls = VAR_5;
 VAR_7->desc.nctrls = FUNC_0(VAR_5);

 VAR_8 = FUNC_2(sizeof(struct hdcs), VAR_2);
 if (!VAR_8)
  return -VAR_1;






 VAR_8->array.left = 24;
 VAR_8->array.top = 4;
 VAR_8->array.width = VAR_3;
 VAR_8->array.height = 304;
 VAR_8->array.border = 4;

 VAR_8->psmp = 6;

 VAR_8->exp.cto = 3;
 VAR_8->exp.cpo = 3;
 VAR_8->exp.rs = 155;
 VAR_8->exp.er = 96;

 VAR_7->sensor_priv = VAR_8;

 return 0;
}
