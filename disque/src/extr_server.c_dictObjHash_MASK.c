
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sds ;
struct TYPE_2__ {scalar_t__ ptr; } ;
typedef TYPE_1__ robj ;


 unsigned int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ) ;

unsigned int FUNC_2(const void *VAR_0) {
    const robj *VAR_1 = VAR_0;
    return FUNC_0(VAR_1->ptr, FUNC_1((sds)VAR_1->ptr));
}
