
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int match; int * class; int ** attrs; } ;
struct TYPE_6__ {TYPE_1__ ac; } ;
struct scsi_transport_template {int host_size; TYPE_2__ host_attrs; int it_nexus_response; int tsk_mgmt_response; } ;
struct srp_internal {struct scsi_transport_template t; struct srp_function_template* f; TYPE_2__ rport_attr_cont; int ** rport_attrs; int ** host_attrs; } ;
struct srp_host_attrs {int dummy; } ;
struct srp_function_template {scalar_t__ rport_delete; } ;
struct TYPE_8__ {int class; } ;
struct TYPE_7__ {int class; } ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct srp_internal* FUNC_2 (int,int ) ;
 TYPE_4__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_2__*) ;

struct scsi_transport_template *
FUNC_4(struct srp_function_template *VAR_10)
{
 int VAR_11;
 struct srp_internal *VAR_12;

 VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_0);
 if (!VAR_12)
  return ((void*)0);

 VAR_12->t.tsk_mgmt_response = VAR_9;
 VAR_12->t.it_nexus_response = VAR_6;

 VAR_12->t.host_size = sizeof(struct srp_host_attrs);
 VAR_12->t.host_attrs.ac.attrs = &VAR_12->host_attrs[0];
 VAR_12->t.host_attrs.ac.class = &VAR_4.class;
 VAR_12->t.host_attrs.ac.match = VAR_5;
 VAR_12->host_attrs[0] = ((void*)0);
 FUNC_3(&VAR_12->t.host_attrs);

 VAR_12->rport_attr_cont.ac.attrs = &VAR_12->rport_attrs[0];
 VAR_12->rport_attr_cont.ac.class = &VAR_7.class;
 VAR_12->rport_attr_cont.ac.match = VAR_8;

 VAR_11 = 0;
 VAR_12->rport_attrs[VAR_11++] = &VAR_2;
 VAR_12->rport_attrs[VAR_11++] = &VAR_3;
 if (VAR_10->rport_delete)
  VAR_12->rport_attrs[VAR_11++] = &VAR_1;
 VAR_12->rport_attrs[VAR_11++] = ((void*)0);
 FUNC_1(VAR_11 > FUNC_0(VAR_12->rport_attrs));

 FUNC_3(&VAR_12->rport_attr_cont);

 VAR_12->f = VAR_10;

 return &VAR_12->t;
}
