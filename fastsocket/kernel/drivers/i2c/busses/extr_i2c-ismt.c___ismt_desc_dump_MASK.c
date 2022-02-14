
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ismt_desc {struct ismt_desc const* dptr_high; struct ismt_desc const* dptr_low; struct ismt_desc const* txbytes; struct ismt_desc const* rxbytes; struct ismt_desc const* retry; struct ismt_desc const* status; struct ismt_desc const* control; struct ismt_desc const* rd_len; struct ismt_desc const* wr_len_cmd; struct ismt_desc const* tgtaddr_rw; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,struct ismt_desc const*) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0, const struct ismt_desc *VAR_1)
{

 FUNC_0(VAR_0, "Descriptor struct:  %p\n", VAR_1);
 FUNC_0(VAR_0, "\ttgtaddr_rw=0x%02X\n", VAR_1->tgtaddr_rw);
 FUNC_0(VAR_0, "\twr_len_cmd=0x%02X\n", VAR_1->wr_len_cmd);
 FUNC_0(VAR_0, "\trd_len=    0x%02X\n", VAR_1->rd_len);
 FUNC_0(VAR_0, "\tcontrol=   0x%02X\n", VAR_1->control);
 FUNC_0(VAR_0, "\tstatus=    0x%02X\n", VAR_1->status);
 FUNC_0(VAR_0, "\tretry=     0x%02X\n", VAR_1->retry);
 FUNC_0(VAR_0, "\trxbytes=   0x%02X\n", VAR_1->rxbytes);
 FUNC_0(VAR_0, "\ttxbytes=   0x%02X\n", VAR_1->txbytes);
 FUNC_0(VAR_0, "\tdptr_low=  0x%08X\n", VAR_1->dptr_low);
 FUNC_0(VAR_0, "\tdptr_high= 0x%08X\n", VAR_1->dptr_high);
}
