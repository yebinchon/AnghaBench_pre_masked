
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char contrast; } ;
struct TYPE_4__ {TYPE_1__ color_params; } ;
struct camera_data {TYPE_2__ params; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned char,unsigned char) ;
 int VAR_1 ;
 int FUNC_1 (struct camera_data*,int ,int ,unsigned char) ;

void FUNC_2(struct camera_data *VAR_2, unsigned char VAR_3)
{
 FUNC_0("Setting contrast to %d (0x%0x)\n", VAR_3, VAR_3);
 VAR_2->params.color_params.contrast = VAR_3;
 FUNC_1(VAR_2, VAR_0, VAR_1, VAR_3);
}
