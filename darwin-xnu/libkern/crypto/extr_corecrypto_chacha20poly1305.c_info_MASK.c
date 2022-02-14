
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccchacha20poly1305_info {int dummy; } ;
struct TYPE_2__ {struct ccchacha20poly1305_info const* (* info ) () ;} ;


 TYPE_1__* FUNC_0 () ;
 struct ccchacha20poly1305_info const* FUNC_1 () ;

__attribute__((used)) static const struct ccchacha20poly1305_info *FUNC_2(void)
{
    return FUNC_0()->info();
}
