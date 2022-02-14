
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct map_info {scalar_t__ map_priv_1; } ;
struct TYPE_3__ {scalar_t__* x; } ;
typedef TYPE_1__ map_word ;
typedef scalar_t__ flash_data ;



__attribute__((used)) static void FUNC_0(struct map_info *VAR_0, map_word VAR_1, unsigned long VAR_2)
{
 *(flash_data *)(VAR_0->map_priv_1 + VAR_2) = (flash_data)VAR_1.x[0];
}
