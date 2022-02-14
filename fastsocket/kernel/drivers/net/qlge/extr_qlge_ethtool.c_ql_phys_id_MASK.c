
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int led_config; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct ql_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ql_adapter*) ;
 int FUNC_2 (struct ql_adapter*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, u32 VAR_2)
{
 struct ql_adapter *VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4, VAR_5;
 int VAR_6;


 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6)
  return VAR_6;
 VAR_4 = VAR_3->led_config;


 if (!VAR_2 || VAR_2 > 300)
  VAR_2 = 300;

 for (VAR_5 = 0; VAR_5 < (VAR_2 * 10); VAR_5++)
  FUNC_2(VAR_3, VAR_0);


 VAR_6 = FUNC_2(VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 return 0;
}
