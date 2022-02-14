
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_3__* ahw; int * recv_ctx; } ;
struct TYPE_5__ {int * tmpl_hdr; } ;
struct TYPE_4__ {int * buff; } ;
struct TYPE_6__ {TYPE_2__ fw_dump; TYPE_1__ reset; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct qlcnic_adapter *VAR_0)
{
 FUNC_0(VAR_0->recv_ctx);
 VAR_0->recv_ctx = ((void*)0);

 if (VAR_0->ahw->fw_dump.tmpl_hdr) {
  FUNC_1(VAR_0->ahw->fw_dump.tmpl_hdr);
  VAR_0->ahw->fw_dump.tmpl_hdr = ((void*)0);
 }

 FUNC_0(VAR_0->ahw->reset.buff);
 VAR_0->ahw->fw_dump.tmpl_hdr = ((void*)0);
}
