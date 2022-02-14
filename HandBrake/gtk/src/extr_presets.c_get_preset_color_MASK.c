
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gint ;
typedef char gchar ;
typedef scalar_t__ gboolean ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static const gchar*
FUNC_0(gint VAR_1, gboolean VAR_2)
{
    const gchar *VAR_3;

    if (VAR_1 == VAR_0)
    {
        VAR_3 = "DimGray";
        if (VAR_2)
        {
            VAR_3 = "black";
        }
    }
    else
    {
        VAR_3 = "blue";
        if (VAR_2)
        {
            VAR_3 = "Navy";
        }
    }
    return VAR_3;
}
