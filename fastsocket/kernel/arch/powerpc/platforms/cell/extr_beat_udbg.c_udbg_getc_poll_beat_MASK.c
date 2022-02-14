
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long FUNC_0 (int ,int*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(void)
{



 char VAR_3, *VAR_4 = (char *)VAR_1;
 int VAR_5;
 long VAR_6;
 if (VAR_2 == 0) {

  VAR_2 = 0;
  VAR_6 = FUNC_0(VAR_0, &VAR_2,
     VAR_1+0, VAR_1+1);
  if (VAR_6 != 0)
   VAR_2 = 0;
 }
 if (VAR_2 <= 0 || VAR_2 > 16) {

  VAR_2 = 0;
  return -1;
 }
 VAR_3 = VAR_4[0];
 for (VAR_5 = 1; VAR_5 < VAR_2; VAR_5++)
  VAR_4[VAR_5-1] = VAR_4[VAR_5];
 VAR_2--;
 return VAR_3;
}
