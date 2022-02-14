
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_recv_context {int * sds_rings; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct qlcnic_recv_context *VAR_0)
{
 if (VAR_0->sds_rings != ((void*)0))
  FUNC_0(VAR_0->sds_rings);

 VAR_0->sds_rings = ((void*)0);
}
