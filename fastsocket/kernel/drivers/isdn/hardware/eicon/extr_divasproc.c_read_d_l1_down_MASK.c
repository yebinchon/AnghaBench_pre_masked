
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_6__ {int controller; } ;
typedef TYPE_2__ diva_os_xdi_adapter_t ;
struct TYPE_5__ {int cfg_1; } ;
struct TYPE_7__ {TYPE_1__ capi_cfg; } ;
typedef TYPE_3__* PISDN_ADAPTER ;


 int VAR_0 ;
 TYPE_3__** VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static int
FUNC_1(char *VAR_2, char **VAR_3, off_t VAR_4, int VAR_5, int *VAR_6,
        void *VAR_7)
{
 int VAR_8 = 0;
 diva_os_xdi_adapter_t *VAR_9 = (diva_os_xdi_adapter_t *) VAR_7;
 PISDN_ADAPTER VAR_10 = VAR_1[VAR_9->controller - 1];

 VAR_8 += FUNC_0(VAR_2 + VAR_8, "%s\n",
         (VAR_10->capi_cfg.
   cfg_1 & VAR_0) ? "1" :
         "0");

 if (VAR_4 + VAR_5 >= VAR_8)
  *VAR_6 = 1;
 if (VAR_8 < VAR_4)
  return 0;
 *VAR_3 = VAR_2 + VAR_4;
 return ((VAR_5 < VAR_8 - VAR_4) ? VAR_5 : VAR_8 - VAR_4);
}
