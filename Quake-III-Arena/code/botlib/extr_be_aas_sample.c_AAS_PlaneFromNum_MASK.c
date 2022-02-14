
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int aas_plane_t ;
struct TYPE_2__ {int * planes; int loaded; } ;


 TYPE_1__ VAR_0 ;

aas_plane_t *FUNC_0(int VAR_1)
{
 if (!VAR_0.loaded) return 0;

 return &VAR_0.planes[VAR_1];
}
