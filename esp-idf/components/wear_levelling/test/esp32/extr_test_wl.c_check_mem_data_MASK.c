
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wl_handle_t ;
typedef scalar_t__ uint32_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,size_t,scalar_t__*,size_t) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(wl_handle_t VAR_1, uint32_t VAR_2, uint32_t* VAR_3)
{
    size_t VAR_4 = FUNC_3(VAR_1);

    for (int VAR_5=0 ; VAR_5 < VAR_0 ; VAR_5++) {
        FUNC_1(FUNC_2(VAR_1, VAR_4 * VAR_5, VAR_3, VAR_4));
        for (int VAR_6=0 ; VAR_6< VAR_4/sizeof(uint32_t) ; VAR_6++) {
            uint32_t VAR_7 = VAR_2 + VAR_6 + VAR_5*VAR_4;
            FUNC_0( VAR_3[VAR_6], VAR_7);
        }
    }
}
