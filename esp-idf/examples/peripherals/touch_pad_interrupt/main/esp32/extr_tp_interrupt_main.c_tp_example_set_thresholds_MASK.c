
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(void)
{
    uint16_t VAR_3;
    for (int VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {

        FUNC_2(VAR_4, &VAR_3);
        VAR_2[VAR_4] = VAR_3;
        FUNC_1(VAR_0, "test init: touch pad [%d] val is %d", VAR_4, VAR_3);

        FUNC_0(FUNC_3(VAR_4, VAR_3 * 2 / 3));

    }
}
