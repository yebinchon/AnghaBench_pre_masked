
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tBTA_AG_SCB ;
typedef scalar_t__ UINT8 ;
typedef int INT16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static UINT8 FUNC_3(tBTA_AG_SCB *VAR_1, char *VAR_2)
{
    UINT8 VAR_3 = 0;
    INT16 VAR_4 = -1;
    FUNC_0(VAR_1);

    if (!FUNC_1(VAR_2[0])) {
        return VAR_0;
    }

    if (VAR_2[1] != 0) {

        VAR_4 = FUNC_2(&VAR_2[1]);
        if (VAR_4 != -1 && VAR_4 < 255) {
            VAR_3 = (UINT8)VAR_4;
        } else {
            VAR_3 = VAR_0;
        }
    }
    return(VAR_3);
}
