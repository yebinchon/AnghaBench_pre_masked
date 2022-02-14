
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct ib_fast_reg_page_list {int max_page_list_len; int * page_list; } ;
struct ib_device {int dummy; } ;
struct c4iw_fr_page_list {int size; struct ib_fast_reg_page_list ibpl; struct c4iw_dev* dev; int dma_addr; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_6__ {TYPE_2__ lldi; } ;
struct c4iw_dev {TYPE_3__ rdev; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 struct ib_fast_reg_page_list* FUNC_0 (int ) ;
 int VAR_1 ;
 struct c4iw_fr_page_list* FUNC_1 (int *,int,int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct c4iw_fr_page_list*,int ,int ) ;
 struct c4iw_dev* FUNC_3 (struct ib_device*) ;

struct ib_fast_reg_page_list *FUNC_4(struct ib_device *VAR_3,
           int VAR_4)
{
 struct c4iw_fr_page_list *VAR_5;
 struct c4iw_dev *VAR_6 = FUNC_3(VAR_3);
 dma_addr_t VAR_7;
 int VAR_8 = sizeof *VAR_5 + VAR_4 * sizeof(u64);

 VAR_5 = FUNC_1(&VAR_6->rdev.lldi.pdev->dev, VAR_8,
      &VAR_7, VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 FUNC_2(VAR_5, VAR_2, VAR_7);
 VAR_5->dma_addr = VAR_7;
 VAR_5->dev = VAR_6;
 VAR_5->size = VAR_8;
 VAR_5->ibpl.page_list = (u64 *)(VAR_5 + 1);
 VAR_5->ibpl.max_page_list_len = VAR_4;

 return &VAR_5->ibpl;
}
