
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {scalar_t__ vc_mode; int vc_num; TYPE_1__* vc_sw; } ;
struct TYPE_4__ {struct vc_data* d; } ;
struct TYPE_3__ {int (* con_blank ) (struct vc_data*,int,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 size_t VAR_9 ;
 int FUNC_3 (struct vc_data*) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (struct vc_data*) ;
 int FUNC_6 (struct vc_data*) ;
 int FUNC_7 (struct vc_data*,int,int) ;
 int FUNC_8 (struct vc_data*,int,int) ;
 int FUNC_9 (struct vc_data*,int,int) ;
 TYPE_2__* VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_10 (int ,int ,int ) ;

void FUNC_11(int VAR_14)
{
 struct vc_data *VAR_15 = VAR_11[VAR_9].d;
 int VAR_16;

 FUNC_0();

 if (VAR_7) {
  if (VAR_4 == VAR_6) {
   VAR_4 = VAR_3;
   VAR_15->vc_sw->con_blank(VAR_15, VAR_12 + 1, 0);
  }
  return;
 }


 if (VAR_14) {
  FUNC_3(VAR_15);
  FUNC_5(VAR_15);
  VAR_15->vc_sw->con_blank(VAR_15, -1, 1);
  VAR_7 = VAR_9 + 1;
  VAR_4 = VAR_3;
  FUNC_6(VAR_15);
  return;
 }

 if (VAR_4 != VAR_2)
  return;
 VAR_4 = VAR_3;


 if (VAR_15->vc_mode != VAR_0) {
  VAR_7 = VAR_9 + 1;
  return;
 }

 FUNC_3(VAR_15);
 FUNC_2(&VAR_8);
 VAR_5 = 0;

 FUNC_5(VAR_15);

 VAR_16 = VAR_15->vc_sw->con_blank(VAR_15, VAR_13 ? 1 : (VAR_12 + 1), 0);
 VAR_7 = VAR_9 + 1;
 if (VAR_16)
  FUNC_6(VAR_15);

 if (&FUNC_1 && FUNC_1(1))
  return;

 if (VAR_13 && VAR_12) {
  VAR_4 = VAR_6;
  FUNC_4(&VAR_8, VAR_10 + VAR_13);
 }
 FUNC_10(VAR_1, VAR_15->vc_num, VAR_15->vc_num);
}
