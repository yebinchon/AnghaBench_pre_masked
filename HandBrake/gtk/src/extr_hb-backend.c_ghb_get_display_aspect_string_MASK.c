
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gint ;
typedef char gchar ;


 char* FUNC_0 (char*,int,...) ;
 int FUNC_1 (int*,int*,double,double) ;

char *
FUNC_2(double VAR_0, double VAR_1)
{
    gchar *VAR_2;

    gint VAR_3 = VAR_0 * 9 / VAR_1;
    if (VAR_0 > 2 * VAR_1)
    {
        VAR_2 = FUNC_0("%.2f:1", VAR_0 / VAR_1);
    }
    else if (VAR_3 <= 16 && VAR_3 >= 15)
    {
        VAR_2 = FUNC_0("%.4g:9", VAR_0 * 9 / VAR_1);
    }
    else if (VAR_3 <= 12 && VAR_3 >= 11)
    {
        VAR_2 = FUNC_0("%.4g:3", VAR_0 * 3 / VAR_1);
    }
    else
    {
        gint VAR_4, VAR_5;
        FUNC_1(&VAR_4, &VAR_5, VAR_0, VAR_1);
        VAR_2 = FUNC_0("%d:%d", VAR_4, VAR_5);
    }
    return VAR_2;
}
