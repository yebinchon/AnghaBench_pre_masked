
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD_PTR ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__,int) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;

BOOL FUNC_5 (DWORD_PTR VAR_8, BYTE VAR_9)
{
    BOOL VAR_10;

    VAR_10 = VAR_4;


    FUNC_2(VAR_8, VAR_1, VAR_2);

    VAR_10 &= FUNC_0 (VAR_8, VAR_5[VAR_9-1]);
    VAR_10 &= FUNC_0 (VAR_8, VAR_6[VAR_9-1]);
    VAR_10 &= FUNC_0 (VAR_8, VAR_7[VAR_9-1]);


    FUNC_3(VAR_8, VAR_1, VAR_2);


    FUNC_4(VAR_8 + VAR_0, (VAR_9 & 0x7F));
    FUNC_1(VAR_8, VAR_3);

    FUNC_4(VAR_8 + VAR_0, (VAR_9 | 0x80));

    return VAR_10;
}
