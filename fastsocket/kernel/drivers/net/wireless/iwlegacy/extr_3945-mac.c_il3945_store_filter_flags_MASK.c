
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int filter_flags; } ;
struct il_priv {int mutex; TYPE_1__ staging; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 struct il_priv* FUNC_3 (struct device*) ;
 int FUNC_4 (struct il_priv*) ;
 scalar_t__ FUNC_5 (struct il_priv*,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (char const*,int *,int ) ;

__attribute__((used)) static ssize_t
FUNC_10(struct device *VAR_0, struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 struct il_priv *VAR_4 = FUNC_3(VAR_0);
 u32 VAR_5 = FUNC_9(VAR_2, ((void*)0), 0);

 FUNC_7(&VAR_4->mutex);
 if (FUNC_6(VAR_4->staging.filter_flags) != VAR_5) {

  if (FUNC_5(VAR_4, 100))
   FUNC_1("Could not cancel scan.\n");
  else {
   FUNC_0("Committing rxon.filter_flags = " "0x%04X\n",
          VAR_5);
   VAR_4->staging.filter_flags = FUNC_2(VAR_5);
   FUNC_4(VAR_4);
  }
 }
 FUNC_8(&VAR_4->mutex);

 return VAR_3;
}
