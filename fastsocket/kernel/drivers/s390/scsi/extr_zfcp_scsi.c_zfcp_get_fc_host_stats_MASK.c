
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {scalar_t__ stats_reset; int stats_reset_data; int qdio; } ;
struct fsf_qtcb_bottom_port {scalar_t__ seconds_since_last_reset; } ;
struct fc_host_statistics {int dummy; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct fsf_qtcb_bottom_port*) ;
 struct fsf_qtcb_bottom_port* FUNC_1 (int,int ) ;
 int FUNC_2 (struct fc_host_statistics*,struct fsf_qtcb_bottom_port*,int ) ;
 int FUNC_3 (int ,struct fsf_qtcb_bottom_port*) ;
 struct fc_host_statistics* FUNC_4 (struct zfcp_adapter*) ;
 int FUNC_5 (struct fc_host_statistics*,struct fsf_qtcb_bottom_port*) ;

__attribute__((used)) static struct fc_host_statistics *FUNC_6(struct Scsi_Host *VAR_3)
{
 struct zfcp_adapter *VAR_4;
 struct fc_host_statistics *VAR_5;
 struct fsf_qtcb_bottom_port *VAR_6;
 int VAR_7;

 VAR_4 = (struct zfcp_adapter *)VAR_3->hostdata[0];
 VAR_5 = FUNC_4(VAR_4);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_3(VAR_4->qdio, VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_6);
  return ((void*)0);
 }

 if (VAR_4->stats_reset &&
     ((VAR_2/VAR_1 - VAR_4->stats_reset) <
      VAR_6->seconds_since_last_reset))
  FUNC_2(VAR_5, VAR_6,
       VAR_4->stats_reset_data);
 else
  FUNC_5(VAR_5, VAR_6);

 FUNC_0(VAR_6);
 return VAR_5;
}
