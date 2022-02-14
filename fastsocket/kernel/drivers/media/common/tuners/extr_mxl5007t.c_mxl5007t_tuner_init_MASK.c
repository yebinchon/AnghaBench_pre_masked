
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_pair_t {int dummy; } ;
struct mxl5007t_state {int dummy; } ;
typedef enum mxl5007t_mode { ____Placeholder_mxl5007t_mode } mxl5007t_mode ;


 int FUNC_0 (int) ;
 struct reg_pair_t* FUNC_1 (struct mxl5007t_state*,int) ;
 int FUNC_2 (struct mxl5007t_state*) ;
 int FUNC_3 (struct mxl5007t_state*,struct reg_pair_t*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct mxl5007t_state *VAR_0,
          enum mxl5007t_mode VAR_1)
{
 struct reg_pair_t *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0);
 if (FUNC_4(VAR_3))
  goto fail;


 VAR_2 = FUNC_1(VAR_0, VAR_1);

 VAR_3 = FUNC_3(VAR_0, VAR_2);
 if (FUNC_4(VAR_3))
  goto fail;
 FUNC_0(1);
fail:
 return VAR_3;
}
