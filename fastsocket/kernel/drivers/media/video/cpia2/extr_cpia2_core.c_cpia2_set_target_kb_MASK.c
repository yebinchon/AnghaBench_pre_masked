
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char target_kb; } ;
struct TYPE_4__ {TYPE_1__ vc_params; } ;
struct camera_data {TYPE_2__ params; } ;


 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (struct camera_data*) ;
 int FUNC_2 (struct camera_data*) ;
 int FUNC_3 (struct camera_data*) ;

int FUNC_4(struct camera_data *VAR_0, unsigned char VAR_1)
{
 FUNC_0("Requested target_kb = %d\n", VAR_1);
 if (VAR_1 != VAR_0->params.vc_params.target_kb) {

  FUNC_2(VAR_0);


  VAR_0->params.vc_params.target_kb = VAR_1;
  FUNC_1(VAR_0);

  FUNC_3(VAR_0);
 }

 return 0;
}
