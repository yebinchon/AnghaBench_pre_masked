
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct wpa_state_machine {size_t index; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct wpa_state_machine** VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,size_t,...) ;

__attribute__((used)) static void FUNC_2(struct wpa_state_machine *VAR_5)
{
    if (VAR_5) {
        u8 VAR_6;
        for (VAR_6=0; VAR_6<VAR_2; VAR_6++) {
            if (FUNC_0(VAR_6) & VAR_4) {
                if (VAR_3[VAR_6] == VAR_5) {
                    FUNC_1( VAR_1, "add sm already exist i=%d", VAR_6);
                }
                continue;
            }
            VAR_3[VAR_6] = VAR_5;
            VAR_4 |= FUNC_0(VAR_6);
            VAR_5->index = VAR_6;
            FUNC_1( VAR_0, "add sm, index=%d bitmap=%x\n", VAR_6, VAR_4);
            return;
        }
    }
}
