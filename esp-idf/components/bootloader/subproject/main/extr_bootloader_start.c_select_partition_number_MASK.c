
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bootloader_state_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3 (bootloader_state_t *VAR_2)
{

    if (!FUNC_1(VAR_2)) {
        FUNC_0(VAR_1, "load partition table error!");
        return VAR_0;
    }


    return FUNC_2(VAR_2);
}
