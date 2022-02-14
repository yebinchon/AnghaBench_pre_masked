
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct mvs_slot_info {size_t tx; int cmd_size; int n_elem; scalar_t__ buf_dma; scalar_t__ buf; } ;
struct mvs_info {size_t tx_prod; int dev; scalar_t__ slot_dma; int * slot; scalar_t__ tx_dma; int * tx; struct mvs_slot_info* slot_info; } ;
struct mvs_cmd_hdr {int dummy; } ;
typedef enum sas_protocol { ____Placeholder_sas_protocol } sas_protocol ;
struct TYPE_2__ {int (* prd_size ) () ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (struct mvs_info*,size_t,int) ;
 int FUNC_2 (int,int *,size_t) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct mvs_info *VAR_4, u32 VAR_5,
    enum sas_protocol VAR_6)
{
}
