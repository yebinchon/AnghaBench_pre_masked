
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350 {int i2c_client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct wm8350 *VAR_1, char VAR_2,
      int VAR_3, void *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1->i2c_client, &VAR_2, 1);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_5 = FUNC_0(VAR_1->i2c_client, VAR_4, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_5 != VAR_3)
  return -VAR_0;
 return 0;
}
