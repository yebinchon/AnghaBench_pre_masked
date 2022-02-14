
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sin_port; } ;
struct cxgbi_sock {size_t port_id; TYPE_1__ saddr; struct cxgbi_device* cdev; } ;
struct cxgbi_ports_map {int sport_base; int max_connect; int lock; int used; int ** port_csk; } ;
struct cxgbi_device {TYPE_2__** ports; struct cxgbi_ports_map pmap; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxgbi_sock*) ;
 int FUNC_1 (int,char*,struct cxgbi_device*,size_t,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,struct cxgbi_device*,size_t,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct cxgbi_sock *VAR_1)
{
 struct cxgbi_device *VAR_2 = VAR_1->cdev;
 struct cxgbi_ports_map *VAR_3 = &VAR_2->pmap;

 if (VAR_1->saddr.sin_port) {
  int VAR_4 = FUNC_2(VAR_1->saddr.sin_port) - VAR_3->sport_base;

  VAR_1->saddr.sin_port = 0;
  if (VAR_4 < 0 || VAR_4 >= VAR_3->max_connect) {
   FUNC_3("cdev 0x%p, p#%u %s, port %u OOR.\n",
    VAR_2, VAR_1->port_id,
    VAR_2->ports[VAR_1->port_id]->name,
    FUNC_2(VAR_1->saddr.sin_port));
   return;
  }

  FUNC_4(&VAR_3->lock);
  VAR_3->port_csk[VAR_4] = ((void*)0);
  VAR_3->used--;
  FUNC_5(&VAR_3->lock);

  FUNC_1(1 << VAR_0,
   "cdev 0x%p, p#%u %s, release %u.\n",
   VAR_2, VAR_1->port_id, VAR_2->ports[VAR_1->port_id]->name,
   VAR_3->sport_base + VAR_4);

  FUNC_0(VAR_1);
 }
}
