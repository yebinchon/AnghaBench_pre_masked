
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int recovery; int ro; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static const char *FUNC_1(struct mddev *VAR_8)
{
 if (FUNC_0(VAR_1, &VAR_8->recovery))
  return "frozen";

 if (FUNC_0(VAR_6, &VAR_8->recovery) ||
     (!VAR_8->ro && FUNC_0(VAR_2, &VAR_8->recovery))) {
  if (FUNC_0(VAR_5, &VAR_8->recovery))
   return "reshape";

  if (FUNC_0(VAR_7, &VAR_8->recovery)) {
   if (!FUNC_0(VAR_4, &VAR_8->recovery))
    return "resync";
   else if (FUNC_0(VAR_0, &VAR_8->recovery))
    return "check";
   return "repair";
  }

  if (FUNC_0(VAR_3, &VAR_8->recovery))
   return "recover";
 }

 return "idle";
}
