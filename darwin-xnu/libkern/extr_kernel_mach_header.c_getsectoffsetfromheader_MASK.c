
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int offset; } ;
typedef TYPE_1__ const kernel_section_t ;
typedef int kernel_mach_header_t ;


 TYPE_1__ const* FUNC_0 (int *,char const*,char const*) ;

uint32_t
FUNC_1(
    kernel_mach_header_t *VAR_0,
    const char *VAR_1,
    const char *VAR_2)
{
 const kernel_section_t *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if(VAR_3 == (kernel_section_t *)0){
     return(0);
 }

 return VAR_3->offset;
}
