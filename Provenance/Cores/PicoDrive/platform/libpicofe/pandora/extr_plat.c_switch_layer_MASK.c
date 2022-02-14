
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*) ;
 char* VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,char*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_1, int VAR_2)
{
 static int VAR_3 = -1;
 int VAR_4 = 0;
 char VAR_5[128];
 int VAR_6;

 if (VAR_1 != 1)
  return -1;
 if (VAR_2 == VAR_3)
  return 0;

 VAR_3 = -1;

 VAR_4 = FUNC_1(
     "/sys/devices/platform/omapdss/display1/enabled");
 if (VAR_4 < 0)
  return -1;

 if (!VAR_4) {

  return 0;
 }

 FUNC_2(VAR_5, sizeof(VAR_5), "%s/op_tvout.sh -l %d",
   VAR_0, VAR_2);
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 == 0)
  VAR_3 = VAR_2;

 return VAR_6;
}
