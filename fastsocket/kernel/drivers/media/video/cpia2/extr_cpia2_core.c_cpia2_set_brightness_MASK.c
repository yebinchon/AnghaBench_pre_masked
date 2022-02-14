
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ device_type; } ;
struct TYPE_4__ {TYPE_1__ pnp_id; } ;
struct camera_data {TYPE_2__ params; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned char,unsigned char) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct camera_data*,int ,int ,unsigned char) ;

void FUNC_2(struct camera_data *VAR_3, unsigned char VAR_4)
{




 if (VAR_3->params.pnp_id.device_type == VAR_1 && VAR_4 == 0)
  VAR_4++;
 FUNC_0("Setting brightness to %d (0x%0x)\n", VAR_4, VAR_4);
 FUNC_1(VAR_3,VAR_0, VAR_2,VAR_4);
}
