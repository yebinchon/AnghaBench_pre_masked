
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds2782_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ds2782_info*,int*) ;
 int FUNC_1 (struct ds2782_info*,int*) ;

__attribute__((used)) static int FUNC_2(struct ds2782_info *VAR_4, int *VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(VAR_4, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_4, &VAR_8);
 if (VAR_6)
  return VAR_6;

 if (VAR_8 == 100)
  *VAR_5 = VAR_2;
 else if (VAR_7 == 0)
  *VAR_5 = VAR_3;
 else if (VAR_7 < 0)
  *VAR_5 = VAR_1;
 else
  *VAR_5 = VAR_0;

 return 0;
}
