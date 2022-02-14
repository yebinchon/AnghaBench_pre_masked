
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ kind; char const* name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 char const* FUNC_0 (scalar_t__) ;

const char *FUNC_1(void) {
    if (VAR_2.kind == VAR_1 || VAR_2.kind == VAR_0) {
        return VAR_2.name;
    } else {
        return FUNC_0(VAR_2.kind);
    }
}
