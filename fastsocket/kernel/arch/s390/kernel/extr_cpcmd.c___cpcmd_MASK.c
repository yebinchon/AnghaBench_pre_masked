
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,int*) ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (char const*) ;

int FUNC_8(const char *VAR_1, char *VAR_2, int VAR_3, int *VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_5 = FUNC_7(VAR_1);
 FUNC_1(VAR_5 > 240);
 FUNC_5(VAR_0, VAR_1, VAR_5);
 FUNC_0(VAR_0, VAR_5);

 if (VAR_2) {
  FUNC_6(VAR_2, 0, VAR_3);
  VAR_7 = VAR_3;
  VAR_6 = FUNC_4(VAR_5, VAR_2, &VAR_3);
  FUNC_2(VAR_2, VAR_7);
        } else {
  VAR_6 = FUNC_3(VAR_5);
        }
 if (VAR_4)
  *VAR_4 = VAR_6;
 return VAR_3;
}
