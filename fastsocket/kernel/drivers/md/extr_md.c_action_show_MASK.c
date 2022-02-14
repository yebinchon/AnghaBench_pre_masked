
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int recovery; int ro; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,char*,char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static ssize_t
FUNC_2(struct mddev *VAR_8, char *VAR_9)
{
 char *VAR_10 = "idle";
 if (FUNC_1(VAR_1, &VAR_8->recovery))
  VAR_10 = "frozen";
 else if (FUNC_1(VAR_6, &VAR_8->recovery) ||
     (!VAR_8->ro && FUNC_1(VAR_2, &VAR_8->recovery))) {
  if (FUNC_1(VAR_5, &VAR_8->recovery))
   VAR_10 = "reshape";
  else if (FUNC_1(VAR_7, &VAR_8->recovery)) {
   if (!FUNC_1(VAR_4, &VAR_8->recovery))
    VAR_10 = "resync";
   else if (FUNC_1(VAR_0, &VAR_8->recovery))
    VAR_10 = "check";
   else
    VAR_10 = "repair";
  } else if (FUNC_1(VAR_3, &VAR_8->recovery))
   VAR_10 = "recover";
 }
 return FUNC_0(VAR_9, "%s\n", VAR_10);
}
