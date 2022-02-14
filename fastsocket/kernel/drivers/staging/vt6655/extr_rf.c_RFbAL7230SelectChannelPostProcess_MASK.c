
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD_PTR ;
typedef scalar_t__ BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

BOOL FUNC_1 (DWORD_PTR VAR_4, BYTE VAR_5, BYTE VAR_6)
{
    BOOL VAR_7;

    VAR_7 = VAR_1;




    if( (VAR_5 <= VAR_0) && (VAR_6 > VAR_0) )
    {

        VAR_7 &= FUNC_0(VAR_4, VAR_3[2]);
        VAR_7 &= FUNC_0(VAR_4, VAR_3[3]);
        VAR_7 &= FUNC_0(VAR_4, VAR_3[5]);
        VAR_7 &= FUNC_0(VAR_4, VAR_3[7]);
        VAR_7 &= FUNC_0(VAR_4, VAR_3[10]);
        VAR_7 &= FUNC_0(VAR_4, VAR_3[12]);
        VAR_7 &= FUNC_0(VAR_4, VAR_3[15]);
    }
    else if( (VAR_5 > VAR_0) && (VAR_6 <= VAR_0) )
    {

        VAR_7 &= FUNC_0(VAR_4, VAR_2[2]);
        VAR_7 &= FUNC_0(VAR_4, VAR_2[3]);
        VAR_7 &= FUNC_0(VAR_4, VAR_2[5]);
        VAR_7 &= FUNC_0(VAR_4, VAR_2[7]);
        VAR_7 &= FUNC_0(VAR_4, VAR_2[10]);
        VAR_7 &= FUNC_0(VAR_4, VAR_2[12]);
        VAR_7 &= FUNC_0(VAR_4, VAR_2[15]);
    }

    return VAR_7;
}
