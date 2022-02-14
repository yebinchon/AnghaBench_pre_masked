
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct cxgbi_hba {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct cxgbi_device {char* dd_data; int list_head; TYPE_1__ pmap; struct cxgbi_hba** hbas; struct net_device** ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cxgbi_device* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int,char*,struct cxgbi_device*,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,unsigned int) ;
 int FUNC_6 (int *) ;

struct cxgbi_device *FUNC_7(unsigned int VAR_4,
        unsigned int VAR_5)
{
 struct cxgbi_device *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6) + VAR_4 + VAR_5 *
   (sizeof(struct cxgbi_hba *) +
    sizeof(struct net_device *)),
   VAR_1);
 if (!VAR_6) {
  FUNC_5("nport %d, OOM.\n", VAR_5);
  return ((void*)0);
 }
 VAR_6->ports = (struct net_device **)(VAR_6 + 1);
 VAR_6->hbas = (struct cxgbi_hba **)(((char*)VAR_6->ports) + VAR_5 *
      sizeof(struct net_device *));
 if (VAR_4)
  VAR_6->dd_data = ((char *)VAR_6->hbas) +
    VAR_5 * sizeof(struct cxgbi_hba *);
 FUNC_6(&VAR_6->pmap.lock);

 FUNC_3(&VAR_3);
 FUNC_1(&VAR_6->list_head, &VAR_2);
 FUNC_4(&VAR_3);

 FUNC_2(1 << VAR_0,
  "cdev 0x%p, p# %u.\n", VAR_6, VAR_5);
 return VAR_6;
}
