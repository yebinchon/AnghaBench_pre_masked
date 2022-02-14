
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct libipw_device {TYPE_1__** networks; } ;
struct TYPE_2__ {struct TYPE_2__* ibss_dfs; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1(struct libipw_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->networks[VAR_2]->ibss_dfs)
   FUNC_0(VAR_1->networks[VAR_2]->ibss_dfs);
  FUNC_0(VAR_1->networks[VAR_2]);
 }
}
