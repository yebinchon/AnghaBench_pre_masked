
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int act2000_card ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(act2000_card * VAR_3, u_char * VAR_4)
{
        u_char VAR_5 = 40;

        while (VAR_5) {
                if (FUNC_0(VAR_1) & VAR_2) {
                        *VAR_4 = FUNC_0(VAR_0);
                        return 0;
                } else {
                        VAR_5--;
                        FUNC_1(10);
                }
        }
        return 1;
}
