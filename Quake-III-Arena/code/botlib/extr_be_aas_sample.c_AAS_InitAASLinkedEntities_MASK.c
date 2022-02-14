
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int aas_link_t ;
struct TYPE_2__ {int numareas; int ** arealinkedentities; int loaded; } ;


 int FUNC_0 (int **) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__ VAR_0 ;

void FUNC_2(void)
{
 if (!VAR_0.loaded) return;
 if (VAR_0.arealinkedentities) FUNC_0(VAR_0.arealinkedentities);
 VAR_0.arealinkedentities = (aas_link_t **) FUNC_1(
      VAR_0.numareas * sizeof(aas_link_t *));
}
