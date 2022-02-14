
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_1(u_int VAR_1, char *VAR_2, int VAR_3)
{ char VAR_4[VAR_0];
 char *VAR_5 = VAR_4+VAR_0-1;

        *VAR_5 = 0;
        do { VAR_3--;
  VAR_5--;
                *VAR_5 = "0123456789"[VAR_1 % 10];
                VAR_1 /= 10;
        } while (VAR_1 != 0 && VAR_3 > 0);
 FUNC_0(VAR_2, VAR_5, VAR_0-VAR_3);
        return;
}
