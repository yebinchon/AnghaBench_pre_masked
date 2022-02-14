
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* publicKeys; } ;
struct TYPE_4__ {TYPE_1__ x11; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2)
{

    if (VAR_2 < 0 || VAR_2 > 255)
        return VAR_0;

    return VAR_1.x11.publicKeys[VAR_2];
}
