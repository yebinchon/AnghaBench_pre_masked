
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int YYSTYPE ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (short*) ;
 scalar_t__ FUNC_2 (char*,int) ;
 short* VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static int

inline

FUNC_3 ()
{
    int VAR_5 = VAR_3;
    short *VAR_6;
    YYSTYPE *VAR_7;

    if (VAR_3 == VAR_0)
        return (1);
    VAR_3 += (VAR_3 + 1 ) / 2;
    if (VAR_3 > VAR_0)
        VAR_3 = VAR_0;





    VAR_6 = (short *) FUNC_2 ((char *)VAR_2, VAR_3 * sizeof (short));
    if (VAR_6 == 0)
        return (1);
    VAR_7 = (YYSTYPE *) FUNC_2 ((char *)VAR_4, VAR_3 * sizeof (YYSTYPE));
    if (VAR_7 == 0)
    {
        FUNC_1 (VAR_6);
        return (1);
    }
    VAR_2 = VAR_6;
    VAR_4 = VAR_7;
    return (0);
}
