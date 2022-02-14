
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_0(int VAR_6, int VAR_7)
{
    switch (VAR_6) {
        case 400: return VAR_0;
        case 401: return VAR_5;
        case 403: return VAR_1;
        case 404: return VAR_2;
        default: break;
    }
    if (VAR_6 >= 400 && VAR_6 <= 499)
        return VAR_3;
    else if (VAR_6 >= 500)
        return VAR_4;
    else
        return VAR_7;
}
