
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ds_status {int dummy; } ;
struct ds_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ds_device*,scalar_t__*,int) ;
 int FUNC_1 (struct ds_device*,int,int ) ;
 int FUNC_2 (struct ds_device*,struct ds_status*) ;

__attribute__((used)) static int FUNC_3(struct ds_device *VAR_3, u8 VAR_4, u8 *VAR_5)
{
 int VAR_6;
 struct ds_status VAR_7;

 VAR_6 = FUNC_1(VAR_3, VAR_0 | VAR_2 | (VAR_4 ? VAR_1 : 0),
  0);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_3, &VAR_7);

 VAR_6 = FUNC_0(VAR_3, VAR_5, sizeof(*VAR_5));
 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
