
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lp; struct vio_dring_state* drings; } ;
struct vnet_port {TYPE_2__* tx_bufs; TYPE_1__ vio; } ;
struct vio_dring_state {int entry_size; int num_entries; scalar_t__ ncookies; scalar_t__ pending; int * base; int cookies; } ;
struct TYPE_4__ {int * buf; int ncookies; int cookies; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int *,int,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct vnet_port *VAR_2)
{
 struct vio_dring_state *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_2->vio.drings[VAR_0];
 if (VAR_3->base) {
  FUNC_1(VAR_2->vio.lp, VAR_3->base,
       (VAR_3->entry_size * VAR_3->num_entries),
       VAR_3->cookies, VAR_3->ncookies);
  VAR_3->base = ((void*)0);
  VAR_3->entry_size = 0;
  VAR_3->num_entries = 0;
  VAR_3->pending = 0;
  VAR_3->ncookies = 0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  void *VAR_5 = VAR_2->tx_bufs[VAR_4].buf;

  if (!VAR_5)
   continue;

  FUNC_2(VAR_2->vio.lp,
     VAR_2->tx_bufs[VAR_4].cookies,
     VAR_2->tx_bufs[VAR_4].ncookies);

  FUNC_0(VAR_5);
  VAR_2->tx_bufs[VAR_4].buf = ((void*)0);
 }
}
