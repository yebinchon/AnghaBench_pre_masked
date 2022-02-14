
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int buff ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,char*,int*) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (char*,int ,int) ;

bool FUNC_4(const char *VAR_4, const int VAR_5)
{
 int VAR_6;
 char VAR_7[64];
 int64_t VAR_8;

 if (VAR_5 != VAR_2)
 {
  return 0;
 }

 FUNC_3(VAR_7, 0, sizeof(VAR_7));
 FUNC_1(&VAR_3, (char *)VAR_4 + VAR_1, VAR_0, VAR_7, &VAR_6);



 VAR_8 = FUNC_2(VAR_7 + sizeof(int) * 2);
 return FUNC_0(VAR_8);
}
