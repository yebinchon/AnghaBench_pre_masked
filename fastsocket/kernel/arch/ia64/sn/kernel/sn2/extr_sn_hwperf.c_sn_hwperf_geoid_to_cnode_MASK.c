
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int moduleid_t ;
typedef int geoid_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (char*,int*,int*,int*,int*) ;

__attribute__((used)) static int FUNC_8(char *VAR_1)
{
 int VAR_2;
 geoid_t VAR_3;
 moduleid_t VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 if (FUNC_7(VAR_1, &VAR_5, &VAR_6, &VAR_7, &VAR_8))
  return -1;





 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = FUNC_3(VAR_2);
  VAR_4 = FUNC_4(VAR_3);
  VAR_9 = FUNC_1(VAR_4);
  VAR_10 = FUNC_0(VAR_4);
  VAR_11 = FUNC_6(VAR_3);
  VAR_12 = FUNC_5(VAR_3);
  if (VAR_5 == VAR_9 && VAR_6 == VAR_10 &&
   VAR_7 == VAR_11 && VAR_8 == VAR_12) {
   break;
  }
 }

 return FUNC_2(VAR_2) ? VAR_2 : -1;
}
