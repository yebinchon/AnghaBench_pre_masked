
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
typedef int BOOLEAN ;
typedef scalar_t__ BD_NAME ;
typedef int BD_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__) ;

void FUNC_4(BOOLEAN VAR_3, BD_ADDR VAR_4, UINT16 VAR_5, char *VAR_6)
{
    UINT8 VAR_7 = VAR_2;
    BD_NAME VAR_8;

    FUNC_3(VAR_8, 0, (VAR_0 + 1));
    if (VAR_5 > VAR_0) {
        VAR_5 = VAR_0;
    }
    FUNC_2((UINT8 *)VAR_8, VAR_6, VAR_5);

    if ((!VAR_3) || (VAR_5 == 0)) {
        VAR_7 = VAR_1;
    }

    FUNC_0(VAR_4, VAR_8, VAR_5 + 1, VAR_7);

    FUNC_1 (VAR_4, (UINT8 *)VAR_6, VAR_7);

}
