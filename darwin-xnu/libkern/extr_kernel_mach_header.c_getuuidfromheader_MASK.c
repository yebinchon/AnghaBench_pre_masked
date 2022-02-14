
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uuid_command {void* uuid; } ;
typedef int kernel_mach_header_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;

void *
FUNC_1(kernel_mach_header_t *VAR_1, unsigned long *VAR_2)
{
    struct uuid_command *VAR_3 = (struct uuid_command *)
        FUNC_0(VAR_1, VAR_0);

    if (VAR_3 != ((void*)0)) {
        if (VAR_2) {
            *VAR_2 = sizeof(VAR_3->uuid);
        }
        return VAR_3->uuid;
    }

    return ((void*)0);
}
