
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int min; int max; scalar_t__ cookie; } ;
typedef TYPE_1__ joy_elemdata_t ;
typedef scalar_t__ IOHIDElementCookie ;
typedef int CFTypeRef ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_4(CFTypeRef VAR_4, joy_elemdata_t *VAR_5) {
    CFTypeRef VAR_6;
    int VAR_7;

    FUNC_3(VAR_5, 0, sizeof(joy_elemdata_t));


    if((VAR_6 = FUNC_0(VAR_4, FUNC_2(VAR_1)))) {
        if(FUNC_1(VAR_6, VAR_0, &VAR_7)) {
            VAR_5->cookie = (IOHIDElementCookie)VAR_7;
        }
    }


    if((VAR_6 = FUNC_0(VAR_4, FUNC_2(VAR_3)))) {
        if(FUNC_1(VAR_6, VAR_0, &VAR_7)) {
            VAR_5->min = VAR_7;
        }
    }


    if((VAR_6 = FUNC_0(VAR_4, FUNC_2(VAR_2)))) {
        if(FUNC_1(VAR_6, VAR_0, &VAR_7)) {
            VAR_5->max = VAR_7;
        }
    }
}
