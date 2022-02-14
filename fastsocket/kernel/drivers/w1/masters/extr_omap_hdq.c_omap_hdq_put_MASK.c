
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdq_data {scalar_t__ hdq_usecount; int hdq_mutex; int hdq_fck; int hdq_ick; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hdq_data *VAR_3)
{
 int VAR_4 = 0;

 VAR_4 = FUNC_3(&VAR_3->hdq_mutex);
 if (VAR_4 < 0)
  return -VAR_0;

 if (0 == VAR_3->hdq_usecount) {
  FUNC_1(VAR_3->dev, "attempt to decrement use count"
   "when it is zero");
  VAR_4 = -VAR_1;
 } else {
  VAR_3->hdq_usecount--;
  FUNC_2(VAR_2);
  if (0 == VAR_3->hdq_usecount) {
   FUNC_0(VAR_3->hdq_ick);
   FUNC_0(VAR_3->hdq_fck);
  }
 }
 FUNC_4(&VAR_3->hdq_mutex);

 return VAR_4;
}
