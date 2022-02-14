
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int buttons_count; int buttons; int name; } ;
typedef TYPE_1__ joydata_t ;
typedef int joy_elemdata_t ;
typedef int io_object_t ;
typedef scalar_t__ SInt32 ;
typedef scalar_t__ CFTypeRef ;
typedef int CFStringRef ;
typedef int CFNumberRef ;
typedef int CFMutableDictionaryRef ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int ) ;
 scalar_t__ FUNC_5 (int ,int *,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (int ,int ,int,int *) ;
 void* FUNC_10 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_11(io_object_t VAR_14) {
    CFMutableDictionaryRef VAR_15 = 0;


    if(FUNC_5(VAR_14, &VAR_15, VAR_4,
                                         VAR_13) == VAR_0) {
        CFTypeRef VAR_16;
        SInt32 VAR_17, VAR_18;
        void *VAR_19;


        VAR_16 = FUNC_0(VAR_15, FUNC_3(VAR_11));

        if(!VAR_16 || !FUNC_1((CFNumberRef)VAR_16, VAR_5,
                                     &VAR_17)) {
            goto out;
        }


        if(VAR_17 != VAR_7) {
            goto out;
        }


        VAR_16 = FUNC_0(VAR_15, FUNC_3(VAR_10));

        if(!VAR_16 || !FUNC_1((CFNumberRef)VAR_16, VAR_5,
                                     &VAR_18)) {
            goto out;
        }


        if(VAR_18 != VAR_8 && VAR_18 != VAR_9) {
            goto out;
        }


        VAR_19 = FUNC_10(VAR_3, (VAR_2 + 1) * sizeof(joydata_t));

        if(VAR_19 == ((void*)0)) {
            goto out;
        }

        VAR_3 = (joydata_t *)VAR_19;
        FUNC_8(VAR_3 + VAR_2, 0, sizeof(joydata_t));


        VAR_16 = FUNC_0(VAR_15, FUNC_3(VAR_12));

        if(!FUNC_4((CFStringRef)VAR_16, VAR_3[VAR_2].name, 256,
                               VAR_6)) {
            goto out;
        }


        if(!FUNC_6(VAR_14, VAR_3 + VAR_2)) {
            goto out;
        }


        FUNC_7(VAR_15, VAR_3 + VAR_2);

        FUNC_9(VAR_3[VAR_2].buttons, VAR_3[VAR_2].buttons_count,
              sizeof(joy_elemdata_t), &VAR_1);

        ++VAR_2;
    }

out:
    FUNC_2(VAR_15);
}
