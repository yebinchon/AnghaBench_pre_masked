
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timediff_t ;


 int FUNC_0 (int ,char*,int,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_1(timediff_t VAR_2, int VAR_3)
{
  int VAR_4 = (int)(VAR_2 / VAR_1);
  bool VAR_5 = (VAR_4 == VAR_3);
  FUNC_0(VAR_0, "is %d us same as %d seconds? %s\n",
          (int)VAR_2, VAR_3,
          VAR_5?"Yes":"No");
  return VAR_5;
}
