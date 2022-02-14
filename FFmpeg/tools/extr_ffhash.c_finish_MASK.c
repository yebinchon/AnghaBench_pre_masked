
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int res ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 char* FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    char VAR_3[2 * VAR_0 + 4];

    FUNC_3("%s=", FUNC_2(VAR_1));
    if (VAR_2) {
        FUNC_0(VAR_1, VAR_3, sizeof(VAR_3));
        FUNC_3("b64:%s", VAR_3);
    } else {
        FUNC_1(VAR_1, VAR_3, sizeof(VAR_3));
        FUNC_3("0x%s", VAR_3);
    }
}
