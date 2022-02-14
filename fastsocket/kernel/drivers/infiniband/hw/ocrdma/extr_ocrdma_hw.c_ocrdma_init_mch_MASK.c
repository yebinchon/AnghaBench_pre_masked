
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ocrdma_mbx_hdr {int subsys_op; int timeout; scalar_t__ cmd_len; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ocrdma_mbx_hdr *VAR_1,
       u8 VAR_2, u8 VAR_3, u32 VAR_4)
{
 VAR_1->subsys_op = (VAR_2 | (VAR_3 << VAR_0));
 VAR_1->timeout = 20;
 VAR_1->cmd_len = VAR_4 - sizeof(struct ocrdma_mbx_hdr);
}
