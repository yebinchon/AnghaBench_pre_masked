
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lldesc_t ;


 int FUNC_0 (int ,char*,int) ;
 int * FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void __attribute((unused)) FUNC_3(lldesc_t *VAR_2)
{
    int VAR_3 = 0;
    lldesc_t *VAR_4 = VAR_2;
    while (VAR_4 != ((void*)0)) {
        VAR_3++;
        FUNC_2(VAR_4);
        VAR_4 = FUNC_1(VAR_4, VAR_1);
    }
    FUNC_0(VAR_0, "total: %d", VAR_3);
}
