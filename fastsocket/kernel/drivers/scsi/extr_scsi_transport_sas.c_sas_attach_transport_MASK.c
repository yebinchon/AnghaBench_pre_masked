
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int match; int ** attrs; int * class; } ;
struct TYPE_10__ {TYPE_1__ ac; } ;
struct scsi_transport_template {int host_size; TYPE_2__ host_attrs; int user_scan; } ;
struct sas_internal {struct scsi_transport_template t; int ** expander_attrs; int ** end_dev_attrs; int ** rphy_attrs; int ** port_attrs; int ** phy_attrs; struct sas_function_template* f; TYPE_2__ expander_attr_cont; TYPE_2__ end_dev_attr_cont; TYPE_2__ rphy_attr_cont; TYPE_2__ port_attr_cont; TYPE_2__ phy_attr_cont; int ** host_attrs; } ;
struct sas_host_attrs {int dummy; } ;
struct sas_function_template {int dummy; } ;
struct TYPE_16__ {int class; } ;
struct TYPE_15__ {int class; } ;
struct TYPE_14__ {int class; } ;
struct TYPE_13__ {int class; } ;
struct TYPE_12__ {int class; } ;
struct TYPE_11__ {int class; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct sas_internal* FUNC_9 (int,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 TYPE_8__ VAR_40 ;
 int VAR_41 ;
 TYPE_7__ VAR_42 ;
 int VAR_43 ;
 TYPE_6__ VAR_44 ;
 int VAR_45 ;
 TYPE_5__ VAR_46 ;
 int VAR_47 ;
 TYPE_4__ VAR_48 ;
 int VAR_49 ;
 TYPE_3__ VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int FUNC_10 (TYPE_2__*) ;
 int VAR_54 ;

struct scsi_transport_template *
FUNC_11(struct sas_function_template *VAR_55)
{
 struct sas_internal *VAR_56;
 int VAR_57;

 VAR_56 = FUNC_9(sizeof(struct sas_internal), VAR_0);
 if (!VAR_56)
  return ((void*)0);

 VAR_56->t.user_scan = VAR_52;

 VAR_56->t.host_attrs.ac.attrs = &VAR_56->host_attrs[0];
 VAR_56->t.host_attrs.ac.class = &VAR_44.class;
 VAR_56->t.host_attrs.ac.match = VAR_45;
 FUNC_10(&VAR_56->t.host_attrs);
 VAR_56->t.host_size = sizeof(struct sas_host_attrs);

 VAR_56->phy_attr_cont.ac.class = &VAR_46.class;
 VAR_56->phy_attr_cont.ac.attrs = &VAR_56->phy_attrs[0];
 VAR_56->phy_attr_cont.ac.match = VAR_47;
 FUNC_10(&VAR_56->phy_attr_cont);

 VAR_56->port_attr_cont.ac.class = &VAR_48.class;
 VAR_56->port_attr_cont.ac.attrs = &VAR_56->port_attrs[0];
 VAR_56->port_attr_cont.ac.match = VAR_49;
 FUNC_10(&VAR_56->port_attr_cont);

 VAR_56->rphy_attr_cont.ac.class = &VAR_50.class;
 VAR_56->rphy_attr_cont.ac.attrs = &VAR_56->rphy_attrs[0];
 VAR_56->rphy_attr_cont.ac.match = VAR_51;
 FUNC_10(&VAR_56->rphy_attr_cont);

 VAR_56->end_dev_attr_cont.ac.class = &VAR_40.class;
 VAR_56->end_dev_attr_cont.ac.attrs = &VAR_56->end_dev_attrs[0];
 VAR_56->end_dev_attr_cont.ac.match = VAR_41;
 FUNC_10(&VAR_56->end_dev_attr_cont);

 VAR_56->expander_attr_cont.ac.class = &VAR_42.class;
 VAR_56->expander_attr_cont.ac.attrs = &VAR_56->expander_attrs[0];
 VAR_56->expander_attr_cont.ac.match = VAR_43;
 FUNC_10(&VAR_56->expander_attr_cont);

 VAR_56->f = VAR_55;

 VAR_57 = 0;
 FUNC_5(VAR_14);
 FUNC_5(VAR_53);
 FUNC_5(VAR_4);
 FUNC_5(VAR_39);
 FUNC_5(VAR_26);

 FUNC_5(VAR_23);
 FUNC_5(VAR_22);
 FUNC_6(VAR_21);
 FUNC_5(VAR_20);
 FUNC_6(VAR_19);

 FUNC_5(VAR_15);
 FUNC_5(VAR_38);
 FUNC_5(VAR_18);
 FUNC_5(VAR_28);
 FUNC_3(VAR_17, VAR_27);
 FUNC_3(VAR_13, VAR_27);
 FUNC_2(VAR_5, VAR_25);
 VAR_56->phy_attrs[VAR_57] = ((void*)0);

 VAR_57 = 0;
 FUNC_7(VAR_24);
 VAR_56->port_attrs[VAR_57] = ((void*)0);

 VAR_57 = 0;
 FUNC_8(VAR_34);
 FUNC_8(VAR_37);
 FUNC_8(VAR_32);
 FUNC_8(VAR_36);
 FUNC_8(VAR_35);
 FUNC_4(VAR_33,
           VAR_12);
 FUNC_4(VAR_31,
           VAR_11);
 VAR_56->rphy_attrs[VAR_57] = ((void*)0);

 VAR_57 = 0;
 FUNC_0(VAR_8);
 FUNC_0(VAR_6);
 FUNC_0(VAR_7);
 FUNC_0(VAR_10);
 FUNC_0(VAR_9);
 VAR_56->end_dev_attrs[VAR_57] = ((void*)0);

 VAR_57 = 0;
 FUNC_1(VAR_54);
 FUNC_1(VAR_29);
 FUNC_1(VAR_30);
 FUNC_1(VAR_3);
 FUNC_1(VAR_1);
 FUNC_1(VAR_2);
 FUNC_1(VAR_16);
 VAR_56->expander_attrs[VAR_57] = ((void*)0);

 return &VAR_56->t;
}
