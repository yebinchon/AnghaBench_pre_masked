
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sin_port; } ;
struct cxgbi_sock {size_t port_id; TYPE_1__ saddr; struct cxgbi_device* cdev; } ;
struct cxgbi_ports_map {int max_connect; int used; int next; int lock; scalar_t__ sport_base; struct cxgbi_sock** port_csk; } ;
struct cxgbi_device {TYPE_2__** ports; struct cxgbi_ports_map pmap; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cxgbi_sock*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,char*,struct cxgbi_device*,size_t,int ,scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,struct cxgbi_device*,...) ;
 int FUNC_5 (char*,struct cxgbi_device*,size_t,int ) ;
 int FUNC_6 (char*,struct cxgbi_device*,size_t,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct cxgbi_sock *VAR_3)
{
 struct cxgbi_device *VAR_4 = VAR_3->cdev;
 struct cxgbi_ports_map *VAR_5 = &VAR_4->pmap;
 unsigned int VAR_6;
 int VAR_7;

 if (!VAR_5->max_connect) {
  FUNC_4("cdev 0x%p, p#%u %s, NO port map.\n",
      VAR_4, VAR_3->port_id, VAR_4->ports[VAR_3->port_id]->name);
  return -VAR_2;
 }

 if (VAR_3->saddr.sin_port) {
  FUNC_4("source port NON-ZERO %u.\n",
   FUNC_3(VAR_3->saddr.sin_port));
  return -VAR_1;
 }

 FUNC_7(&VAR_5->lock);
 if (VAR_5->used >= VAR_5->max_connect) {
  FUNC_8(&VAR_5->lock);
  FUNC_5("cdev 0x%p, p#%u %s, ALL ports used.\n",
   VAR_4, VAR_3->port_id, VAR_4->ports[VAR_3->port_id]->name);
  return -VAR_2;
 }

 VAR_6 = VAR_7 = VAR_5->next;
 do {
  if (++VAR_7 >= VAR_5->max_connect)
   VAR_7 = 0;
  if (!VAR_5->port_csk[VAR_7]) {
   VAR_5->used++;
   VAR_3->saddr.sin_port =
    FUNC_1(VAR_5->sport_base + VAR_7);
   VAR_5->next = VAR_7;
   VAR_5->port_csk[VAR_7] = VAR_3;
   FUNC_8(&VAR_5->lock);
   FUNC_0(VAR_3);
   FUNC_2(1 << VAR_0,
    "cdev 0x%p, p#%u %s, p %u, %u.\n",
    VAR_4, VAR_3->port_id,
    VAR_4->ports[VAR_3->port_id]->name,
    VAR_5->sport_base + VAR_7, VAR_5->next);
   return 0;
  }
 } while (VAR_7 != VAR_6);
 FUNC_8(&VAR_5->lock);


 FUNC_6("cdev 0x%p, p#%u %s, next %u?\n",
  VAR_4, VAR_3->port_id, VAR_4->ports[VAR_3->port_id]->name,
  VAR_5->next);
 return -VAR_2;
}
