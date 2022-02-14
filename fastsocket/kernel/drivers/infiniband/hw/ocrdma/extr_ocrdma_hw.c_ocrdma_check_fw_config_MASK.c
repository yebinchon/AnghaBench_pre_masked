
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ocrdma_fw_conf_rsp {int fn_mode; int max_eq; int base_eqid; } ;
struct TYPE_2__ {scalar_t__ max_cq; } ;
struct ocrdma_dev {TYPE_1__ attr; int max_eq; int base_eqid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct ocrdma_dev *VAR_3,
       struct ocrdma_fw_conf_rsp *VAR_4)
{
 u32 VAR_5;

 VAR_5 = VAR_4->fn_mode & VAR_1;
 if (VAR_5 != VAR_1)
  return -VAR_0;
 VAR_3->base_eqid = VAR_4->base_eqid;
 VAR_3->max_eq = VAR_4->max_eq;
 VAR_3->attr.max_cq = VAR_2 - 1;
 return 0;
}
