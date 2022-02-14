
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ number; } ;
typedef TYPE_1__ joy_elemdata_t ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1) {
    const joy_elemdata_t *VAR_2 = (const joy_elemdata_t *)VAR_0;
    const joy_elemdata_t *VAR_3 = (const joy_elemdata_t *)VAR_1;

    return VAR_2->number < VAR_3->number ? -1 :
        (VAR_2->number > VAR_3->number ? 1 : 0);
}
