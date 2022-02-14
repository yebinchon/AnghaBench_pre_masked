
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct chp_id {int dummy; } ;
struct TYPE_2__ {int standby; int configured; int recognized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct chp_id) ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct chp_id VAR_6)
{
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2();
 if (VAR_7)
  return VAR_7;

 VAR_8 = FUNC_1(VAR_6);
 FUNC_3(&VAR_5);
 if (!FUNC_0(VAR_4.recognized, VAR_8))
  VAR_7 = VAR_1;
 else if (FUNC_0(VAR_4.configured, VAR_8))
  VAR_7 = VAR_0;
 else if (FUNC_0(VAR_4.standby, VAR_8))
  VAR_7 = VAR_3;
 else
  VAR_7 = VAR_2;
 FUNC_4(&VAR_5);

 return VAR_7;
}
