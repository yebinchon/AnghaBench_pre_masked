
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxgbi_device {int list_head; TYPE_1__** ports; scalar_t__ nports; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cxgbi_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*,struct cxgbi_device*,scalar_t__,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct cxgbi_device *VAR_2)
{
 FUNC_2(1 << VAR_0,
  "cdev 0x%p, p# %u,%s.\n",
  VAR_2, VAR_2->nports, VAR_2->nports ? VAR_2->ports[0]->name : "");
 FUNC_3(&VAR_1);
 FUNC_1(&VAR_2->list_head);
 FUNC_4(&VAR_1);
 FUNC_0(VAR_2);
}
