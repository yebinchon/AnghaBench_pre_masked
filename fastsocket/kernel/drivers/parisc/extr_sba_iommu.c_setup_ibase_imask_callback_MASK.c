
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int start; } ;
struct parisc_device {TYPE_1__ hpa; } ;
struct ibase_data_struct {int ioc_num; TYPE_2__* ioc; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int imask; int ibase; } ;


 struct parisc_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1)
{

        extern void FUNC_2(struct parisc_device *, u32, u32);
 struct parisc_device *VAR_2 = FUNC_0(VAR_0);
 struct ibase_data_struct *VAR_3 = VAR_1;
 int VAR_4 = (VAR_2->hpa.start >> 13) & 0xf;
 if (VAR_4 >> 3 == VAR_3->ioc_num)
  FUNC_2(VAR_2, VAR_3->ioc->ibase, VAR_3->ioc->imask);
 return 0;
}
