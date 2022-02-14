
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct wpa_state_machine {int dummy; } ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 struct wpa_state_machine** VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct wpa_state_machine * FUNC_1(u32 VAR_3)
{
    if ( (VAR_3 < VAR_0) && (FUNC_0(VAR_3) & VAR_2)){
        return VAR_1[VAR_3];
    }

    return ((void*)0);
}
