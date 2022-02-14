
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int* speed_scan; int config; scalar_t__ speed_scan_pos; int ieee; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 struct ipw_priv* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (char const*,int *,int ) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2, struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 struct ipw_priv *VAR_6 = FUNC_1(VAR_2);
 int VAR_7, VAR_8 = 0;
 const char *VAR_9 = VAR_4;


 while ((VAR_7 = FUNC_3(VAR_9, ((void*)0), 0))) {
  if (VAR_8 == VAR_1 - 1) {
   VAR_6->speed_scan[VAR_8] = 0;
   break;
  }

  if (FUNC_2(VAR_6->ieee, VAR_7))
   VAR_6->speed_scan[VAR_8++] = VAR_7;
  else
   FUNC_0("Skipping invalid channel request: %d\n",
        VAR_7);
  VAR_9 = FUNC_4(VAR_9, ' ');
  if (!VAR_9)
   break;
  while (*VAR_9 == ' ' || *VAR_9 == '\t')
   VAR_9++;
 }

 if (VAR_8 == 0)
  VAR_6->config &= ~VAR_0;
 else {
  VAR_6->speed_scan_pos = 0;
  VAR_6->config |= VAR_0;
 }

 return VAR_5;
}
