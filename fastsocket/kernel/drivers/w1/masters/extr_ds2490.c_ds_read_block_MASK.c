
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds_status {int dummy; } ;
struct ds_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ds_device*,int *,int) ;
 int FUNC_1 (struct ds_device*,int,int) ;
 int FUNC_2 (struct ds_device*,int *,int) ;
 int FUNC_3 (struct ds_device*,struct ds_status*) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static int FUNC_5(struct ds_device *VAR_3, u8 *VAR_4, int VAR_5)
{
 struct ds_status VAR_6;
 int VAR_7;

 if (VAR_5 > 64*1024)
  return -VAR_2;

 FUNC_4(VAR_4, 0xFF, VAR_5);

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_0 | VAR_1, VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_3(VAR_3, &VAR_6);

 FUNC_4(VAR_4, 0x00, VAR_5);
 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5);

 return VAR_7;
}
