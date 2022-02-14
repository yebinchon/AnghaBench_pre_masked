
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int *,int) ;

__attribute__((used)) static bool FUNC_3(struct connectdata *VAR_2, char *VAR_3, size_t VAR_4,
                          int *VAR_5)
{
  (void)VAR_2;

  if((VAR_4 > 3) && FUNC_0(VAR_3)) {
    *VAR_5 = FUNC_1(FUNC_2(VAR_3, ((void*)0), 10));
    return VAR_1;
  }

  return VAR_0;
}
