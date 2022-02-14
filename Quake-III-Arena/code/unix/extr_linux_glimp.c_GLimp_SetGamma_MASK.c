
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float red; float green; float blue; } ;
typedef TYPE_1__ XF86VidModeGamma ;
struct TYPE_7__ {float value; } ;
struct TYPE_6__ {int deviceSupportsGamma; } ;


 TYPE_4__* FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;

void FUNC_3( unsigned char VAR_3[256], unsigned char VAR_4[256], unsigned char VAR_5[256] )
{


  float VAR_6 = FUNC_0("r_gamma", "1.0", 0)->value;
  XF86VidModeGamma VAR_7;
  FUNC_2(VAR_1.deviceSupportsGamma);
  VAR_7.red = VAR_6;
  VAR_7.green = VAR_6;
  VAR_7.blue = VAR_6;
  FUNC_1(VAR_0, VAR_2, &VAR_7);
}
