
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int scsi_qla_host_t ;
typedef int gfp_t ;
struct TYPE_5__ {int supported_classes; int loop_id; int port_type; int * vha; } ;
typedef TYPE_1__ fc_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

fc_port_t *
FUNC_2(scsi_qla_host_t *VAR_4, gfp_t VAR_5)
{
 fc_port_t *VAR_6;

 VAR_6 = FUNC_0(sizeof(fc_port_t), VAR_5);
 if (!VAR_6)
  return ((void*)0);


 VAR_6->vha = VAR_4;
 VAR_6->port_type = VAR_1;
 VAR_6->loop_id = VAR_3;
 FUNC_1(VAR_6, VAR_0);
 VAR_6->supported_classes = VAR_2;

 return VAR_6;
}
