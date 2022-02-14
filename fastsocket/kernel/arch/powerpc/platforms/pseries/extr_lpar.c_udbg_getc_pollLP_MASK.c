
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (int ,int*,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(void)
{



 char VAR_4, *VAR_5 = (char *)VAR_1;
 int VAR_6;
 long VAR_7;
 if (VAR_2 == 0) {

  VAR_2 = 0;
  VAR_7 = FUNC_0(VAR_3, &VAR_2, VAR_5);
  if (VAR_7 != VAR_0)
   VAR_2 = 0;
 }
 if (VAR_2 <= 0 || VAR_2 > 16) {

  VAR_2 = 0;
  return -1;
 }
 VAR_4 = VAR_5[0];
 for (VAR_6 = 1; VAR_6 < VAR_2; VAR_6++)
  VAR_5[VAR_6-1] = VAR_5[VAR_6];
 VAR_2--;
 return VAR_4;
}
