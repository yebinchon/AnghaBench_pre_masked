
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t word ;
typedef scalar_t__ byte ;
struct TYPE_14__ {size_t max_plci; TYPE_3__* plci; } ;
struct TYPE_12__ {scalar_t__ Id; } ;
struct TYPE_11__ {scalar_t__ Id; } ;
struct TYPE_13__ {int data_sent; int manufacturer; int call_dir; int cr_enquiry; int ncpi_state; scalar_t__ Id; scalar_t__ vsprotdialect; scalar_t__ vsprot; scalar_t__ vswitchstate; scalar_t__ notifiedcall; scalar_t__ requested_options; scalar_t__ requested_options_conn; scalar_t__* ncpi_buffer; scalar_t__ nsf_control_bits; scalar_t__ fax_connect_info_length; scalar_t__* inc_dis_ncci_table; scalar_t__ ncci_ring_list; scalar_t__ hangup_flow_ctrl_timer; scalar_t__ ptyState; scalar_t__ spoofed_msg; scalar_t__ adv_nl; scalar_t__ nl_remove_id; scalar_t__ nl_global_req; scalar_t__ sig_remove_id; scalar_t__ sig_global_req; scalar_t__ send_disc; void* msg_in_wrap_pos; void* msg_in_read_pos; void* msg_in_write_pos; scalar_t__ req_out; scalar_t__ req_in; scalar_t__ req_in_start; scalar_t__ number; scalar_t__ m_command; scalar_t__ command; scalar_t__ B3_prot; scalar_t__ B2_prot; scalar_t__ B1_resource; scalar_t__ tel; scalar_t__ channels; void* SuppState; void* State; int * relatedPTYPLCI; int * appl; scalar_t__ nl_req; scalar_t__ sig_req; TYPE_2__ NL; TYPE_1__ Sig; } ;
typedef TYPE_3__ PLCI ;
typedef TYPE_4__ DIVA_CAPI_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 size_t VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static word FUNC_7(DIVA_CAPI_ADAPTER *VAR_5)
{
  word VAR_6,VAR_7;
  PLCI * VAR_8;

  FUNC_3 (VAR_5);
  for(VAR_6=0;VAR_6<VAR_5->max_plci && VAR_5->plci[VAR_6].Id;VAR_6++);
  if(VAR_6==VAR_5->max_plci) {
    FUNC_1(1,FUNC_2("get_plci: out of PLCIs"));
    return 0;
  }
  VAR_8 = &VAR_5->plci[VAR_6];
  VAR_8->Id = (byte)(VAR_6+1);

  VAR_8->Sig.Id = 0;
  VAR_8->NL.Id = 0;
  VAR_8->sig_req = 0;
  VAR_8->nl_req = 0;

  VAR_8->appl = ((void*)0);
  VAR_8->relatedPTYPLCI = ((void*)0);
  VAR_8->State = VAR_2;
  VAR_8->SuppState = VAR_2;
  VAR_8->channels = 0;
  VAR_8->tel = 0;
  VAR_8->B1_resource = 0;
  VAR_8->B2_prot = 0;
  VAR_8->B3_prot = 0;

  VAR_8->command = 0;
  VAR_8->m_command = 0;
  FUNC_5 (VAR_8);
  VAR_8->number = 0;
  VAR_8->req_in_start = 0;
  VAR_8->req_in = 0;
  VAR_8->req_out = 0;
  VAR_8->msg_in_write_pos = VAR_4;
  VAR_8->msg_in_read_pos = VAR_4;
  VAR_8->msg_in_wrap_pos = VAR_4;

  VAR_8->data_sent = 0;
  VAR_8->send_disc = 0;
  VAR_8->sig_global_req = 0;
  VAR_8->sig_remove_id = 0;
  VAR_8->nl_global_req = 0;
  VAR_8->nl_remove_id = 0;
  VAR_8->adv_nl = 0;
  VAR_8->manufacturer = 0;
  VAR_8->call_dir = VAR_1 | VAR_0;
  VAR_8->spoofed_msg = 0;
  VAR_8->ptyState = 0;
  VAR_8->cr_enquiry = 0;
  VAR_8->hangup_flow_ctrl_timer = 0;

  VAR_8->ncci_ring_list = 0;
  for(VAR_7=0;VAR_7<VAR_3;VAR_7++) VAR_8->inc_dis_ncci_table[VAR_7] = 0;
  FUNC_0 (VAR_8);
  FUNC_6 (VAR_8);
  VAR_8->fax_connect_info_length = 0;
  VAR_8->nsf_control_bits = 0;
  VAR_8->ncpi_state = 0x00;
  VAR_8->ncpi_buffer[0] = 0;

  VAR_8->requested_options_conn = 0;
  VAR_8->requested_options = 0;
  VAR_8->notifiedcall = 0;
  VAR_8->vswitchstate = 0;
  VAR_8->vsprot = 0;
  VAR_8->vsprotdialect = 0;
  FUNC_4 (VAR_8);
  FUNC_1(1,FUNC_2("get_plci(%x)",VAR_8->Id));
  return VAR_6+1;
}
