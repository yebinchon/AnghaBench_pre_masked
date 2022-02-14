
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_4)
{
 int VAR_5, VAR_6 = -1, VAR_7 = 0;

 if (!VAR_1)
  return 0;

 for (VAR_5 = VAR_2; VAR_5 <= VAR_3; VAR_5++) {
  if (VAR_0[VAR_5] != VAR_4 &&
      VAR_0[VAR_5] != -1) {
   VAR_6 = VAR_5;
   break;
  }
 }

 if (VAR_6 != -1) {
  for (VAR_5 = VAR_2; VAR_5 <= VAR_3; VAR_5++) {
   if (VAR_0[VAR_5] == VAR_4)
    FUNC_1(VAR_5, VAR_6, 0);
  }
 } else
  VAR_7 = FUNC_0();

 return VAR_7;
}
