
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_vf {scalar_t__ evq0_count; scalar_t__ peer_page_count; int * peer_page_addrs; int buf; } ;
struct efx_nic {unsigned int vf_count; struct efx_vf* vf; } ;


 int FUNC_0 (struct efx_nic*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct efx_nic *VAR_0)
{
 struct efx_vf *VAR_1;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->vf_count; ++VAR_2) {
  VAR_1 = VAR_0->vf + VAR_2;

  FUNC_0(VAR_0, &VAR_1->buf);
  FUNC_1(VAR_1->peer_page_addrs);
  VAR_1->peer_page_addrs = ((void*)0);
  VAR_1->peer_page_count = 0;

  VAR_1->evq0_count = 0;
 }
}
