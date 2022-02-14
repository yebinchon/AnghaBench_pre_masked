
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill {int dummy; } ;
struct device {int dummy; } ;
typedef enum rfkill_type { ____Placeholder_rfkill_type } rfkill_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct rfkill* FUNC_1 (char const*,struct device*,int,int *,void*) ;
 int FUNC_2 (struct rfkill*) ;
 int FUNC_3 (struct rfkill*,int) ;
 int FUNC_4 (struct rfkill*) ;

__attribute__((used)) static int FUNC_5(struct rfkill **VAR_2,
       const char *VAR_3, struct device *VAR_4,
       enum rfkill_type VAR_5, int VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 *VAR_2 = FUNC_1(VAR_3, VAR_4, VAR_5,
          &VAR_1, (void *)(unsigned long)VAR_6);

 if (!*VAR_2)
  return -VAR_0;

 FUNC_3(*VAR_2, FUNC_0(VAR_6) != 1);
 VAR_7 = FUNC_4(*VAR_2);
 if (VAR_7) {
  FUNC_2(*VAR_2);
  *VAR_2 = ((void*)0);
  return VAR_7;
 }
 return 0;
}
