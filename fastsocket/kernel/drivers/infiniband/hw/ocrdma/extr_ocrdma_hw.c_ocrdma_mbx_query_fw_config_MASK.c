
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * cmd; } ;
struct ocrdma_mqe {TYPE_1__ u; } ;
struct ocrdma_mbx_hdr {int dummy; } ;
struct ocrdma_fw_conf_rsp {int dummy; } ;
struct ocrdma_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ocrdma_mqe*) ;
 int FUNC_1 (struct ocrdma_dev*,struct ocrdma_fw_conf_rsp*) ;
 struct ocrdma_mqe* FUNC_2 (int ,int) ;
 int FUNC_3 (struct ocrdma_mbx_hdr*,int ,int ,int) ;
 int FUNC_4 (struct ocrdma_dev*,struct ocrdma_mqe*) ;

__attribute__((used)) static int FUNC_5(struct ocrdma_dev *VAR_3)
{
 int VAR_4 = -VAR_0;
 struct ocrdma_mqe *VAR_5;
 struct ocrdma_fw_conf_rsp *VAR_6;

 VAR_5 = FUNC_2(VAR_1, sizeof(*VAR_5));
 if (!VAR_5)
  return -VAR_0;
 FUNC_3((struct ocrdma_mbx_hdr *)&VAR_5->u.cmd[0],
   VAR_1,
   VAR_2, sizeof(*VAR_5));
 VAR_4 = FUNC_4(VAR_3, (struct ocrdma_mqe *)VAR_5);
 if (VAR_4)
  goto mbx_err;
 VAR_6 = (struct ocrdma_fw_conf_rsp *)VAR_5;
 VAR_4 = FUNC_1(VAR_3, VAR_6);
mbx_err:
 FUNC_0(VAR_5);
 return VAR_4;
}
