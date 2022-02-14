
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD_PTR ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int) ;
 int * VAR_3 ;
 int * VAR_4 ;

BOOL FUNC_3 (DWORD_PTR VAR_5, BYTE VAR_6)
{
    BOOL VAR_7;

    VAR_7 = VAR_2;

    VAR_7 &= FUNC_0 (VAR_5, VAR_3[VAR_6-1]);
    VAR_7 &= FUNC_0 (VAR_5, VAR_4[VAR_6-1]);


    FUNC_2(VAR_5 + VAR_0, (VAR_6 & 0x7F));
    FUNC_1(VAR_5, VAR_1);

    FUNC_2(VAR_5 + VAR_0, (VAR_6 | 0x80));

    return VAR_7;
}
