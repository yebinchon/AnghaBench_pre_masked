
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lance_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lance_private*) ;
 int FUNC_1 (struct lance_private*,int ) ;
 int FUNC_2 (struct lance_private*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static int FUNC_5 (struct lance_private *VAR_6)
{
        int VAR_7;

        FUNC_1(VAR_6, VAR_5);
        FUNC_2(VAR_6, VAR_3);




        for (VAR_7 = 0; (VAR_7 < 100) && !(FUNC_0(VAR_6) & (VAR_0 | VAR_1)); VAR_7++)
                FUNC_3();
        if ((VAR_7 == 100) || (FUNC_0(VAR_6) & VAR_0)) {
                FUNC_4 ("LANCE unopened after %d ticks, csr0=%4.4x.\n", VAR_7, FUNC_0(VAR_6));
                return -1;
        }


        FUNC_2(VAR_6, VAR_1);
        FUNC_2(VAR_6, VAR_2 | VAR_4);

        return 0;
}
