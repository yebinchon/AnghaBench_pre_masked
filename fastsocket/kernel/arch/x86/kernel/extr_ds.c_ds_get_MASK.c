
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum ds_qualifier { ____Placeholder_ds_qualifier } ds_qualifier ;
typedef enum ds_field { ____Placeholder_ds_field } ds_field ;
struct TYPE_2__ {int sizeof_ptr_field; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline unsigned long
FUNC_0(const unsigned char *VAR_1, enum ds_qualifier VAR_2, enum ds_field VAR_3)
{
 VAR_1 += (VAR_0.sizeof_ptr_field * (VAR_3 + (4 * VAR_2)));
 return *(unsigned long *)VAR_1;
}
