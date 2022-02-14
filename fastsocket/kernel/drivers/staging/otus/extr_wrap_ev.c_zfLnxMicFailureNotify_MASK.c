
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int wrqu ;
struct TYPE_2__ {int length; } ;
union iwreq_data {TYPE_1__ data; } ;
typedef int u16_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (union iwreq_data*,int ,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,union iwreq_data*,char*) ;
 scalar_t__ FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_2, u16_t* VAR_3, u16_t VAR_4)
{
 static const char *VAR_5 = "MLME-MICHAELMICFAILURE.indication";
 union iwreq_data VAR_6;
 char VAR_7[128];






 if (FUNC_4(VAR_2) == VAR_1)
 {
  FUNC_1(VAR_7, VAR_5);
 }

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.data.length = FUNC_2(VAR_7);
 FUNC_3(VAR_2, VAR_0, &VAR_6, VAR_7);
}
