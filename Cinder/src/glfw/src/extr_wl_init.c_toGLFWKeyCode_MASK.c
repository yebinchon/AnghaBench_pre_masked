
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* publicKeys; } ;
struct TYPE_4__ {TYPE_1__ wl; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_0(uint32_t VAR_2)
{
    if (VAR_2 < sizeof(VAR_1.wl.publicKeys) / sizeof(VAR_1.wl.publicKeys[0]))
        return VAR_1.wl.publicKeys[VAR_2];

    return VAR_0;
}
