
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
struct TYPE_2__ {char** hwfilters; } ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (char*,int,char*,char*,char*) ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{
 static int VAR_3 = -1;
 char VAR_4[128];
 int VAR_5;

 if (VAR_0.hwfilters == ((void*)0))
  return -1;

 if (VAR_2 == VAR_3)
  return 0;

 for (VAR_5 = 0; VAR_5 <= VAR_2; VAR_5++)
  if (VAR_0.hwfilters[VAR_5] == ((void*)0))
   return -1;

 VAR_3 = VAR_2;

 FUNC_1(VAR_4, sizeof(VAR_4), "%s/op_videofir.sh %s",
  VAR_1, VAR_0.hwfilters[VAR_2]);
 return FUNC_0(VAR_4);
}
