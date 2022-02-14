
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_port_t ;
typedef int io_iterator_t ;
typedef scalar_t__ IOReturn ;
typedef int CFMutableDictionaryRef ;


 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(mach_port_t VAR_2, io_iterator_t *VAR_3) {
    CFMutableDictionaryRef VAR_4;
    IOReturn VAR_5;



    if(!(VAR_4 = FUNC_1(VAR_0))) {
        return;
    }


    VAR_5 = FUNC_0(VAR_2, VAR_4, VAR_3);

    if(VAR_5 != VAR_1 || !(*VAR_3)) {
        return;
    }
}
