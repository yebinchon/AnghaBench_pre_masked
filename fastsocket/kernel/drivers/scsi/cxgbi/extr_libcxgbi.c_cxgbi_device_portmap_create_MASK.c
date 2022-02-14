
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {int dummy; } ;
struct cxgbi_ports_map {unsigned int max_connect; unsigned int sport_base; int lock; int port_csk; } ;
struct cxgbi_device {struct cxgbi_ports_map pmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (char*,struct cxgbi_device*,unsigned int) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct cxgbi_device *VAR_2, unsigned int VAR_3,
    unsigned int VAR_4)
{
 struct cxgbi_ports_map *VAR_5 = &VAR_2->pmap;

 VAR_5->port_csk = FUNC_0(VAR_4 *
          sizeof(struct cxgbi_sock *),
          VAR_1);
 if (!VAR_5->port_csk) {
  FUNC_1("cdev 0x%p, portmap OOM %u.\n", VAR_2, VAR_4);
  return -VAR_0;
 }

 VAR_5->max_connect = VAR_4;
 VAR_5->sport_base = VAR_3;
 FUNC_2(&VAR_5->lock);
 return 0;
}
