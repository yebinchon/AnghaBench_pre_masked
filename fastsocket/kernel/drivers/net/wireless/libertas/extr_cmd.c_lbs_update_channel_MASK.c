
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int channel; } ;
struct lbs_private {TYPE_1__ curbssparams; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct lbs_private*) ;

int FUNC_3(struct lbs_private *VAR_1)
{
 int VAR_2;


 FUNC_0(VAR_0);

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 > 0) {
  VAR_1->curbssparams.channel = VAR_2;
  VAR_2 = 0;
 }
 FUNC_1(VAR_0, "ret %d", VAR_2);
 return VAR_2;
}
