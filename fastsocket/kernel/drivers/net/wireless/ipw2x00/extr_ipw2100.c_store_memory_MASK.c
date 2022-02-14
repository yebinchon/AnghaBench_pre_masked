
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct ipw2100_priv {int dump_raw; struct net_device* net_dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char*,int ) ;
 struct ipw2100_priv* FUNC_1 (struct device*) ;
 int FUNC_2 (struct ipw2100_priv*) ;
 char FUNC_3 (char const) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 struct ipw2100_priv *VAR_4 = FUNC_1(VAR_0);
 struct net_device *VAR_5 = VAR_4->net_dev;
 const char *VAR_6 = VAR_2;

 (void)VAR_5;

 if (VAR_3 < 1)
  return VAR_3;

 if (VAR_6[0] == '1' ||
     (VAR_3 >= 2 && FUNC_3(VAR_6[0]) == 'o' && FUNC_3(VAR_6[1]) == 'n')) {
  FUNC_0("%s: Setting memory dump to RAW mode.\n",
          VAR_5->name);
  VAR_4->dump_raw = 1;

 } else if (VAR_6[0] == '0' || (VAR_3 >= 2 && FUNC_3(VAR_6[0]) == 'o' &&
       FUNC_3(VAR_6[1]) == 'f')) {
  FUNC_0("%s: Setting memory dump to HEX mode.\n",
          VAR_5->name);
  VAR_4->dump_raw = 0;

 } else if (FUNC_3(VAR_6[0]) == 'r') {
  FUNC_0("%s: Resetting firmware snapshot.\n", VAR_5->name);
  FUNC_2(VAR_4);

 } else
  FUNC_0("%s: Usage: 0|on = HEX, 1|off = RAW, "
          "reset = clear memory snapshot\n", VAR_5->name);

 return VAR_3;
}
