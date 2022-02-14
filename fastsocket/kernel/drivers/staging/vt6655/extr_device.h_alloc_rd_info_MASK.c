
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PDEVICE_RD_INFO ;
typedef int DEVICE_RD_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static inline PDEVICE_RD_INFO FUNC_2(void) {
    PDEVICE_RD_INFO VAR_1;
    if ((VAR_1 = (PDEVICE_RD_INFO)FUNC_0((int)sizeof(DEVICE_RD_INFO), (int)VAR_0)) == ((void*)0))
        return ((void*)0);
    else {
        FUNC_1(VAR_1,0,sizeof(DEVICE_RD_INFO));
        return VAR_1;
    }
}
