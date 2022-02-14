
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdq_data {int hdq_usecount; int hdq_mutex; int hdq_fck; int hdq_ick; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct hdq_data*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct hdq_data*,int ) ;
 int FUNC_6 (struct hdq_data*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct hdq_data *VAR_13)
{
 int VAR_14 = 0;

 VAR_14 = FUNC_7(&VAR_13->hdq_mutex);
 if (VAR_14 < 0) {
  VAR_14 = -VAR_0;
  goto rtn;
 }

 if (VAR_7 == VAR_13->hdq_usecount) {
  FUNC_4(VAR_13->dev, "attempt to exceed the max use count");
  VAR_14 = -VAR_1;
  goto out;
 } else {
  VAR_13->hdq_usecount++;
  FUNC_9(VAR_12);
  if (1 == VAR_13->hdq_usecount) {
   if (FUNC_2(VAR_13->hdq_ick)) {
    FUNC_4(VAR_13->dev, "Can not enable ick\n");
    VAR_14 = -VAR_2;
    goto clk_err;
   }
   if (FUNC_2(VAR_13->hdq_fck)) {
    FUNC_4(VAR_13->dev, "Can not enable fck\n");
    FUNC_1(VAR_13->hdq_ick);
    VAR_14 = -VAR_2;
    goto clk_err;
   }


   if (!(FUNC_5(VAR_13, VAR_10) &
    VAR_11)) {
    VAR_14 = FUNC_0(VAR_13);
    if (VAR_14)

     VAR_13->hdq_usecount--;
   } else {

    FUNC_6(VAR_13, VAR_3,
     VAR_4 |
     VAR_5);
    FUNC_6(VAR_13, VAR_8,
     VAR_9);
    FUNC_5(VAR_13, VAR_6);
   }
  }
 }

clk_err:
 FUNC_3(VAR_13->hdq_ick);
 FUNC_3(VAR_13->hdq_fck);
out:
 FUNC_8(&VAR_13->hdq_mutex);
rtn:
 return VAR_14;
}
