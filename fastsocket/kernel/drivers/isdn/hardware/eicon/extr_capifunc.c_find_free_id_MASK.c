
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Id; } ;
typedef TYPE_1__ DIVA_CAPI_ADAPTER ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_0(void)
{
 int VAR_2 = 0;
 DIVA_CAPI_ADAPTER *VAR_3;

 while (VAR_2 < VAR_0) {
  VAR_3 = &VAR_1[VAR_2];
  if (!VAR_3->Id)
   break;
  VAR_2++;
 }
 return(VAR_2 + 1);
}
