
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libipw_network {int * ibss_dfs; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct libipw_network *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->ibss_dfs) {
  FUNC_0(VAR_0->ibss_dfs);
  VAR_0->ibss_dfs = ((void*)0);
 }
}
