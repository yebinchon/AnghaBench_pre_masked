
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_17__ {TYPE_11__** attrs; scalar_t__* name; } ;
struct TYPE_15__ {char* name; int mode; } ;
struct TYPE_24__ {TYPE_11__ attr; int show; } ;
struct TYPE_21__ {TYPE_11__ attr; int show; } ;
struct TYPE_20__ {TYPE_11__ attr; int show; } ;
struct TYPE_23__ {TYPE_11__ attr; int show; } ;
struct TYPE_25__ {int store; int show; TYPE_11__ attr; } ;
struct TYPE_16__ {int store; int show; TYPE_11__ attr; } ;
struct TYPE_22__ {TYPE_11__ attr; int show; } ;
struct TYPE_14__ {TYPE_11__ attr; int show; } ;
struct TYPE_26__ {TYPE_11__ attr; int show; } ;
struct pvr2_sysfs_ctl_item {int ctl_id; int created_ok; TYPE_13__ grp; TYPE_11__** attr_gen; scalar_t__* name; TYPE_7__ attr_bits; TYPE_4__ attr_max; TYPE_3__ attr_min; TYPE_6__ attr_enum; TYPE_8__ attr_custom; TYPE_12__ attr_val; TYPE_5__ attr_def; TYPE_10__ attr_type; TYPE_9__ attr_name; struct pvr2_sysfs_ctl_item* item_next; struct pvr2_sysfs* chptr; struct pvr2_ctrl* cptr; } ;
struct TYPE_19__ {int hdw; } ;
struct pvr2_sysfs {TYPE_1__* class_dev; struct pvr2_sysfs_ctl_item* item_last; struct pvr2_sysfs_ctl_item* item_first; TYPE_2__ channel; } ;
struct pvr2_ctrl {int dummy; } ;
struct TYPE_18__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pvr2_sysfs_ctl_item* FUNC_0 (int,int ) ;



 int FUNC_1 (struct pvr2_ctrl*) ;
 int FUNC_2 (struct pvr2_ctrl*) ;
 scalar_t__ FUNC_3 (struct pvr2_ctrl*) ;
 scalar_t__ FUNC_4 (struct pvr2_ctrl*) ;
 struct pvr2_ctrl* FUNC_5 (int ,int) ;
 int FUNC_6 (char*,struct pvr2_sysfs_ctl_item*) ;
 int FUNC_7 (int ,char*,int) ;
 unsigned int FUNC_8 (scalar_t__*,int,char*,int ) ;
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
 int FUNC_9 (int *,TYPE_13__*) ;

__attribute__((used)) static void FUNC_10(struct pvr2_sysfs *VAR_16,int VAR_17)
{
 struct pvr2_sysfs_ctl_item *VAR_18;
 struct pvr2_ctrl *VAR_19;
 unsigned int VAR_20,VAR_21;
 int VAR_22;

 VAR_19 = FUNC_5(VAR_16->channel.hdw,VAR_17);
 if (!VAR_19) return;

 VAR_18 = FUNC_0(sizeof(*VAR_18),VAR_0);
 if (!VAR_18) return;
 FUNC_6("Creating pvr2_sysfs_ctl_item id=%p",VAR_18);

 VAR_18->cptr = VAR_19;
 VAR_18->ctl_id = VAR_17;

 VAR_18->chptr = VAR_16;
 VAR_18->item_next = ((void*)0);
 if (VAR_16->item_last) {
  VAR_16->item_last->item_next = VAR_18;
 } else {
  VAR_16->item_first = VAR_18;
 }
 VAR_16->item_last = VAR_18;

 VAR_18->attr_name.attr.name = "name";
 VAR_18->attr_name.attr.mode = VAR_2;
 VAR_18->attr_name.show = VAR_10;

 VAR_18->attr_type.attr.name = "type";
 VAR_18->attr_type.attr.mode = VAR_2;
 VAR_18->attr_type.show = VAR_11;

 VAR_18->attr_min.attr.name = "min_val";
 VAR_18->attr_min.attr.mode = VAR_2;
 VAR_18->attr_min.show = VAR_9;

 VAR_18->attr_max.attr.name = "max_val";
 VAR_18->attr_max.attr.mode = VAR_2;
 VAR_18->attr_max.show = VAR_8;

 VAR_18->attr_def.attr.name = "def_val";
 VAR_18->attr_def.attr.mode = VAR_2;
 VAR_18->attr_def.show = VAR_6;

 VAR_18->attr_val.attr.name = "cur_val";
 VAR_18->attr_val.attr.mode = VAR_2;

 VAR_18->attr_custom.attr.name = "custom_val";
 VAR_18->attr_custom.attr.mode = VAR_2;

 VAR_18->attr_enum.attr.name = "enum_val";
 VAR_18->attr_enum.attr.mode = VAR_2;
 VAR_18->attr_enum.show = VAR_7;

 VAR_18->attr_bits.attr.name = "bit_val";
 VAR_18->attr_bits.attr.mode = VAR_2;
 VAR_18->attr_bits.show = VAR_5;

 if (FUNC_4(VAR_19)) {
  VAR_18->attr_val.attr.mode |= VAR_4|VAR_3;
  VAR_18->attr_custom.attr.mode |= VAR_4|VAR_3;
 }

 VAR_21 = 0;
 VAR_18->attr_gen[VAR_21++] = &VAR_18->attr_name.attr;
 VAR_18->attr_gen[VAR_21++] = &VAR_18->attr_type.attr;
 VAR_18->attr_gen[VAR_21++] = &VAR_18->attr_val.attr;
 VAR_18->attr_gen[VAR_21++] = &VAR_18->attr_def.attr;
 VAR_18->attr_val.show = VAR_13;
 VAR_18->attr_val.store = VAR_15;
 if (FUNC_3(VAR_19)) {
  VAR_18->attr_gen[VAR_21++] = &VAR_18->attr_custom.attr;
  VAR_18->attr_custom.show = VAR_12;
  VAR_18->attr_custom.store = VAR_14;
 }
 switch (FUNC_2(VAR_19)) {
 case 129:

  VAR_18->attr_gen[VAR_21++] = &VAR_18->attr_enum.attr;
  break;
 case 128:

  VAR_18->attr_gen[VAR_21++] = &VAR_18->attr_min.attr;
  VAR_18->attr_gen[VAR_21++] = &VAR_18->attr_max.attr;
  break;
 case 130:

  VAR_18->attr_gen[VAR_21++] = &VAR_18->attr_bits.attr;
  break;
 default: break;
 }

 VAR_20 = FUNC_8(VAR_18->name,sizeof(VAR_18->name)-1,"ctl_%s",
   FUNC_1(VAR_19));
 VAR_18->name[VAR_20] = 0;
 VAR_18->grp.name = VAR_18->name;
 VAR_18->grp.attrs = VAR_18->attr_gen;

 VAR_22 = FUNC_9(&VAR_16->class_dev->kobj,&VAR_18->grp);
 if (VAR_22) {
  FUNC_7(VAR_1,
      "sysfs_create_group error: %d",
      VAR_22);
  return;
 }
 VAR_18->created_ok = !0;
}
