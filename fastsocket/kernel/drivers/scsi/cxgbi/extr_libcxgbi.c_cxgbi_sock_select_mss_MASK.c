
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dst_entry {int dummy; } ;
struct cxgbi_sock {unsigned int advmss; TYPE_1__* cdev; struct dst_entry* dst; } ;
struct TYPE_2__ {int* mtus; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct cxgbi_sock*,int) ;
 unsigned int FUNC_1 (struct dst_entry*,int ) ;

unsigned int FUNC_2(struct cxgbi_sock *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;
 struct dst_entry *VAR_4 = VAR_1->dst;

 VAR_1->advmss = FUNC_1(VAR_4, VAR_0);

 if (VAR_1->advmss > VAR_2 - 40)
  VAR_1->advmss = VAR_2 - 40;
 if (VAR_1->advmss < VAR_1->cdev->mtus[0] - 40)
  VAR_1->advmss = VAR_1->cdev->mtus[0] - 40;
 VAR_3 = FUNC_0(VAR_1, VAR_1->advmss + 40);

 return VAR_3;
}
