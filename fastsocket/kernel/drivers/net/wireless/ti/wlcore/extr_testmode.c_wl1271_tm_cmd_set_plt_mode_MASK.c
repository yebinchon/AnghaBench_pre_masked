
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1271 {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 size_t VAR_2 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wl1271*,int const) ;
 int FUNC_3 (struct wl1271*) ;
 int FUNC_4 (struct wl1271*,struct nlattr**) ;

__attribute__((used)) static int FUNC_5(struct wl1271 *VAR_3, struct nlattr *VAR_4[])
{
 u32 VAR_5;
 int VAR_6;

 FUNC_1(VAR_0, "testmode cmd set plt mode");

 if (!VAR_4[VAR_2])
  return -VAR_1;

 VAR_5 = FUNC_0(VAR_4[VAR_2]);

 switch (VAR_5) {
 case 129:
  VAR_6 = FUNC_3(VAR_3);
  break;
 case 128:
  VAR_6 = FUNC_2(VAR_3, 128);
  break;
 case 130:
  VAR_6 = FUNC_4(VAR_3, VAR_4);
  break;
 default:
  VAR_6 = -VAR_1;
  break;
 }

 return VAR_6;
}
