
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int range; int low; } ;
typedef TYPE_1__ CABACContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1(CABACContext *VAR_1){
    int VAR_2= (uint32_t)(VAR_1->range - 0x100)>>31;
    VAR_1->range<<= VAR_2;
    VAR_1->low <<= VAR_2;
    if(!(VAR_1->low & VAR_0))
        FUNC_0(VAR_1);
}
