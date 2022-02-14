
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int stats_reset; struct fsf_qtcb_bottom_port* stats_reset_data; int qdio; } ;
struct fsf_qtcb_bottom_port {int dummy; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fsf_qtcb_bottom_port*) ;
 struct fsf_qtcb_bottom_port* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,struct fsf_qtcb_bottom_port*) ;

__attribute__((used)) static void FUNC_3(struct Scsi_Host *VAR_3)
{
 struct zfcp_adapter *VAR_4;
 struct fsf_qtcb_bottom_port *VAR_5;
 int VAR_6;

 VAR_4 = (struct zfcp_adapter *)VAR_3->hostdata[0];
 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return;

 VAR_6 = FUNC_2(VAR_4->qdio, VAR_5);
 if (VAR_6)
  FUNC_0(VAR_5);
 else {
  VAR_4->stats_reset = VAR_2/VAR_1;
  FUNC_0(VAR_4->stats_reset_data);
  VAR_4->stats_reset_data = VAR_5;

 }
}
