
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds_status {int dummy; } ;
struct ds_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ds_device*,int *,int) ;
 int FUNC_1 (struct ds_device*,int,int) ;
 int FUNC_2 (struct ds_device*,struct ds_status*) ;

__attribute__((used)) static int FUNC_3(struct ds_device *VAR_2, u8 *VAR_3)
{
 int VAR_4;
 struct ds_status VAR_5;

 VAR_4 = FUNC_1(VAR_2, VAR_0 | VAR_1 , 0xff);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_2, &VAR_5);

 VAR_4 = FUNC_0(VAR_2, VAR_3, sizeof(*VAR_3));
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
