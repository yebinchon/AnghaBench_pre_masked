
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdq_data {int hdq_mutex; scalar_t__ init_trans; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hdq_data*,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hdq_data*) ;

__attribute__((used)) static u8 FUNC_5(void *VAR_1)
{
 struct hdq_data *VAR_2 = VAR_1;
 u8 VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, &VAR_3);
 if (VAR_4) {
  VAR_4 = FUNC_2(&VAR_2->hdq_mutex);
  if (VAR_4 < 0) {
   FUNC_0(VAR_2->dev, "Could not acquire mutex\n");
   return -VAR_0;
  }
  VAR_2->init_trans = 0;
  FUNC_3(&VAR_2->hdq_mutex);
  FUNC_4(VAR_2);
  return -1;
 }


 if (VAR_2->init_trans) {
  VAR_4 = FUNC_2(&VAR_2->hdq_mutex);
  if (VAR_4 < 0) {
   FUNC_0(VAR_2->dev, "Could not acquire mutex\n");
   return -VAR_0;
  }
  VAR_2->init_trans = 0;
  FUNC_3(&VAR_2->hdq_mutex);
  FUNC_4(VAR_2);
 }

 return VAR_3;
}
