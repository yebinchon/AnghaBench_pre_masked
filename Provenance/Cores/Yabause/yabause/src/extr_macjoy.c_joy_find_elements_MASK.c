
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int joydata_t ;
struct TYPE_3__ {int member_1; int member_0; } ;
typedef int CFTypeRef ;
typedef scalar_t__ CFTypeID ;
typedef TYPE_1__ CFRange ;
typedef int CFMutableDictionaryRef ;


 int FUNC_0 (int ,TYPE_1__,int *,void*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(CFMutableDictionaryRef VAR_2, joydata_t *VAR_3) {
    CFTypeRef VAR_4;
    CFTypeID VAR_5;

    if((VAR_4 = FUNC_3(VAR_2, FUNC_5(VAR_1)))) {
        VAR_5 = FUNC_4(VAR_4);

        if(VAR_5 == FUNC_2()) {

            CFRange VAR_6 = { 0, FUNC_1(VAR_4) };
            FUNC_0(VAR_4, VAR_6, &VAR_0, (void *)VAR_3);
        }
    }
}
