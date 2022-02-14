
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rfkill {int dummy; } ;
struct device {int dummy; } ;
typedef enum rfkill_type { ____Placeholder_rfkill_type } rfkill_type ;


 int VAR_0 ;
 struct rfkill* FUNC_0 (int) ;
 int VAR_1 ;
 struct rfkill* FUNC_1 (char*,struct device*,int,int *,void*) ;
 int FUNC_2 (struct rfkill*) ;
 int FUNC_3 (struct rfkill*) ;

__attribute__((used)) static struct rfkill *FUNC_4(struct device *VAR_2,
        enum rfkill_type VAR_3,
        char *VAR_4, u32 VAR_5)
{
 int VAR_6;
 struct rfkill *VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_2, VAR_3,
      &VAR_1,
      (void *)(unsigned long)VAR_5);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_3(VAR_7);
 if (VAR_6) {
  FUNC_2(VAR_7);
  return FUNC_0(VAR_6);
 }
 return VAR_7;
}
