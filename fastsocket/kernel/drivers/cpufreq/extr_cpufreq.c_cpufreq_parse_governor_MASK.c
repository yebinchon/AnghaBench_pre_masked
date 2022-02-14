
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_governor {int dummy; } ;
struct TYPE_2__ {scalar_t__ target; scalar_t__ setpolicy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cpufreq_governor* FUNC_0 (char*) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 char* FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_7(char *VAR_7, unsigned int *VAR_8,
    struct cpufreq_governor **VAR_9)
{
 int VAR_10 = -VAR_3;

 if (!VAR_5)
  goto out;

 if (VAR_5->setpolicy) {
  if (!FUNC_6(VAR_7, "performance", VAR_0)) {
   *VAR_8 = VAR_1;
   VAR_10 = 0;
  } else if (!FUNC_6(VAR_7, "powersave",
      VAR_0)) {
   *VAR_8 = VAR_2;
   VAR_10 = 0;
  }
 } else if (VAR_5->target) {
  struct cpufreq_governor *VAR_11;

  FUNC_3(&VAR_6);

  VAR_11 = FUNC_0(VAR_7);

  if (VAR_11 == ((void*)0)) {
   char *VAR_12 = FUNC_1(VAR_4, "cpufreq_%s",
        VAR_7);

   if (VAR_12) {
    int VAR_13;

    FUNC_4(&VAR_6);
    VAR_13 = FUNC_5("%s", VAR_12);
    FUNC_3(&VAR_6);

    if (VAR_13 == 0)
     VAR_11 = FUNC_0(VAR_7);
   }

   FUNC_2(VAR_12);
  }

  if (VAR_11 != ((void*)0)) {
   *VAR_9 = VAR_11;
   VAR_10 = 0;
  }

  FUNC_4(&VAR_6);
 }
out:
 return VAR_10;
}
