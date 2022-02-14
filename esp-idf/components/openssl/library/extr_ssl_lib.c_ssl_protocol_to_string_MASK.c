
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static const char* FUNC_0(int VAR_4)
{
    const char *VAR_5;

    if (VAR_4 == VAR_2)
        VAR_5 = "TLSv1.2";
    else if (VAR_4 == VAR_1)
        VAR_5 = "TLSv1.1";
    else if (VAR_4 == VAR_3)
        VAR_5 = "TLSv1";
    else if (VAR_4 == VAR_0)
        VAR_5 = "SSLv3";
    else
        VAR_5 = "unknown";

    return VAR_5;
}
