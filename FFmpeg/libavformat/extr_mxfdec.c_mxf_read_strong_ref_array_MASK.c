
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int UID ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(AVIOContext *VAR_1, UID **VAR_2, int *VAR_3)
{
    *VAR_3 = FUNC_2(VAR_1);
    *VAR_2 = FUNC_1(*VAR_3, sizeof(UID));
    if (!*VAR_2) {
        *VAR_3 = 0;
        return FUNC_0(VAR_0);
    }
    FUNC_4(VAR_1, 4);
    FUNC_3(VAR_1, (uint8_t *)*VAR_2, *VAR_3 * sizeof(UID));
    return 0;
}
