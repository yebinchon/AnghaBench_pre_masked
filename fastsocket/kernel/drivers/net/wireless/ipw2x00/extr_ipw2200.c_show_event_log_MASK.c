
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw_priv {int dummy; } ;
struct ipw_event {int time; int event; int data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 struct ipw_priv* FUNC_1 (struct device*) ;
 int FUNC_2 (struct ipw_priv*,int,struct ipw_event*) ;
 int FUNC_3 (struct ipw_priv*) ;
 int FUNC_4 (struct ipw_event*) ;
 struct ipw_event* FUNC_5 (int,int ) ;
 int FUNC_6 (char*,int,char*,...) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
         struct device_attribute *VAR_3, char *VAR_4)
{
 struct ipw_priv *VAR_5 = FUNC_1(VAR_2);
 u32 VAR_6 = FUNC_3(VAR_5);
 u32 VAR_7;
 struct ipw_event *VAR_8;
 u32 VAR_9 = 0, VAR_10;


 VAR_7 = VAR_1 / sizeof(*VAR_8) > VAR_6 ?
   sizeof(*VAR_8) * VAR_6 : VAR_1;
 VAR_8 = FUNC_5(VAR_7, VAR_0);
 if (!VAR_8) {
  FUNC_0("Unable to allocate memory for log\n");
  return 0;
 }
 VAR_6 = VAR_7 / sizeof(*VAR_8);
 FUNC_2(VAR_5, VAR_6, VAR_8);

 VAR_9 += FUNC_6(VAR_4 + VAR_9, VAR_1 - VAR_9, "%08X", VAR_6);
 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
  VAR_9 += FUNC_6(VAR_4 + VAR_9, VAR_1 - VAR_9,
    "\n%08X%08X%08X",
    VAR_8[VAR_10].time, VAR_8[VAR_10].event, VAR_8[VAR_10].data);
 VAR_9 += FUNC_6(VAR_4 + VAR_9, VAR_1 - VAR_9, "\n");
 FUNC_4(VAR_8);
 return VAR_9;
}
