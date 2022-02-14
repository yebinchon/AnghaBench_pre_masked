
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double gdouble ;
typedef int gchar ;
typedef int GhbValue ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 double FUNC_1 (int *) ;
 int * FUNC_2 (int const*,int const*,int ) ;

gdouble
FUNC_3(const gchar *VAR_1, const GhbValue *VAR_2)
{
    if (VAR_2 == ((void*)0))
        return 0;
    GhbValue *VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_0);
    double VAR_4 = FUNC_1(VAR_3);
    FUNC_0(&VAR_3);
    return VAR_4;
}
