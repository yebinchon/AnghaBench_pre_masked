
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char gchar ;
typedef scalar_t__ GhbType ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,char const*) ;

void
FUNC_1(GhbType VAR_6)
{
    const gchar *VAR_7 = "unknown";
    if (VAR_6 == VAR_5)
    {
        VAR_7 ="string";
    }
    else if (VAR_6 == VAR_4)
    {
        VAR_7 ="int";
    }
    else if (VAR_6 == VAR_3)
    {
        VAR_7 ="double";
    }
    else if (VAR_6 == VAR_1)
    {
        VAR_7 ="bool";
    }
    else if (VAR_6 == VAR_0)
    {
        VAR_7 ="array";
    }
    else if (VAR_6 == VAR_2)
    {
        VAR_7 ="dict";
    }
    FUNC_0("Type %s", VAR_7);
}
