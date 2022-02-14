
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
typedef unsigned int u16 ;
struct itcw {int dummy; } ;
struct dcw {int dummy; } ;
struct TYPE_12__ {unsigned int trk_per_cyl; int dev_type; } ;
struct TYPE_22__ {scalar_t__ operation; int nr_cyl; } ;
struct TYPE_16__ {scalar_t__ type; } ;
struct dasd_eckd_private {int real_cyl; TYPE_10__ rdc_data; TYPE_9__ attrib; TYPE_3__ uid; TYPE_2__* ned; } ;
struct dasd_device {scalar_t__ private; } ;
struct TYPE_17__ {int define_extent; int verify_base; int hyper_pav; } ;
struct TYPE_14__ {unsigned int record; int head; int cyl; } ;
struct TYPE_13__ {int head; int cyl; } ;
struct TYPE_20__ {int check_bytes; int length_valid; int length_scope; int imbedded_ccw_valid; } ;
struct TYPE_19__ {int orientation; int operation; } ;
struct LRE_eckd_data {int extended_operation; unsigned int length; int imbedded_ccw; int count; int sector; TYPE_1__ search_arg; TYPE_11__ seek_addr; TYPE_7__ auxiliary; TYPE_6__ operation; } ;
struct TYPE_21__ {scalar_t__ operation; int mode; } ;
struct TYPE_18__ {int perm; } ;
struct DE_eckd_data {unsigned int blk_size; int ga_extended; int ep_format; unsigned int ep_rec_per_track; TYPE_11__ end_ext; TYPE_11__ beg_ext; TYPE_8__ attributes; TYPE_5__ mask; } ;
struct PFX_eckd_data {int format; TYPE_4__ validity; int base_lss; int base_address; struct LRE_eckd_data locate_record; struct DE_eckd_data define_extent; } ;
typedef int pfxdata ;
struct TYPE_15__ {int ID; int unit_addr; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,struct dasd_device*,char*,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (struct PFX_eckd_data*,struct dasd_device*) ;
 struct dcw* FUNC_4 (struct itcw*,int ,int ,struct PFX_eckd_data*,int,unsigned int) ;
 int FUNC_5 (struct PFX_eckd_data*,int ,int) ;
 int FUNC_6 (TYPE_11__*,int,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct itcw *VAR_7,
   unsigned int VAR_8, unsigned int VAR_9, int VAR_10,
   struct dasd_device *VAR_11,
   struct dasd_device *VAR_12,
   unsigned int VAR_13, int VAR_14,
   unsigned int VAR_15,
   unsigned int VAR_16,
   unsigned int VAR_17,
   unsigned int VAR_18)
{
 struct PFX_eckd_data VAR_19;
 struct dasd_eckd_private *VAR_20, *VAR_21;
 struct DE_eckd_data *VAR_22;
 struct LRE_eckd_data *VAR_23;
 struct dcw *VAR_24;

 u32 VAR_25, VAR_26;
 u16 VAR_27, VAR_28, VAR_29;
 u8 VAR_30;

 int VAR_31 = 0;
 int VAR_32 = 0;
 int VAR_33, VAR_34;



 VAR_20 = (struct dasd_eckd_private *) VAR_11->private;
 VAR_21 = (struct dasd_eckd_private *) VAR_12->private;
 VAR_22 = &VAR_19.define_extent;
 VAR_23 = &VAR_19.locate_record;

 FUNC_5(&VAR_19, 0, sizeof(VAR_19));
 VAR_19.format = 1;
 VAR_19.base_address = VAR_20->ned->unit_addr;
 VAR_19.base_lss = VAR_20->ned->ID;
 VAR_19.validity.define_extent = 1;


 if (VAR_21->uid.type != VAR_5) {
  VAR_19.validity.verify_base = 1;
  if (VAR_21->uid.type == VAR_6)
   VAR_19.validity.hyper_pav = 1;
 }

 switch (VAR_10) {
 case 129:
  VAR_22->mask.perm = 0x1;
  VAR_22->attributes.operation = VAR_20->attrib.operation;
  VAR_22->blk_size = VAR_15;
  VAR_22->ga_extended |= 0x42;
  VAR_23->operation.orientation = 0x0;
  VAR_23->operation.operation = 0x0C;
  VAR_23->auxiliary.check_bytes = 0x01;
  VAR_30 = VAR_1;
  break;
 case 128:
  VAR_22->mask.perm = 0x02;
  VAR_22->attributes.operation = VAR_20->attrib.operation;
  VAR_22->blk_size = VAR_15;
  VAR_31 = FUNC_3(&VAR_19, VAR_11);
  VAR_22->ga_extended |= 0x42;
  VAR_23->operation.orientation = 0x0;
  VAR_23->operation.operation = 0x3F;
  VAR_23->extended_operation = 0x23;
  VAR_23->auxiliary.check_bytes = 0x2;
  VAR_30 = VAR_0;
  break;
 default:
  FUNC_1(VAR_4, VAR_11,
         "prepare itcw, unknown opcode 0x%x", VAR_10);
  FUNC_0();
  break;
 }
 if (VAR_31)
  return VAR_31;

 VAR_22->attributes.mode = 0x3;

 VAR_27 = VAR_20->rdc_data.trk_per_cyl;
 VAR_25 = VAR_8 / VAR_27;
 VAR_28 = VAR_8 % VAR_27;
 VAR_26 = VAR_9 / VAR_27;
 VAR_29 = VAR_9 % VAR_27;


 if (VAR_22->attributes.operation == VAR_3 ||
     VAR_22->attributes.operation == VAR_2) {

  if (VAR_26 + VAR_20->attrib.nr_cyl < VAR_20->real_cyl)
   VAR_26 += VAR_20->attrib.nr_cyl;
  else
   VAR_26 = (VAR_20->real_cyl - 1);
 }

 FUNC_6(&VAR_22->beg_ext, VAR_25, VAR_28);
 FUNC_6(&VAR_22->end_ext, VAR_26, VAR_29);

 VAR_22->ep_format = 0x20;
 VAR_22->ep_rec_per_track = VAR_18;

 if (VAR_13) {
  switch (VAR_20->rdc_data.dev_type) {
  case 0x3390:
   VAR_33 = FUNC_2(VAR_15 + 6, 232);
   VAR_34 = 9 + FUNC_2(VAR_15 + 6 * (VAR_33 + 1), 34);
   VAR_32 = (49 + (VAR_13 - 1) * (10 + VAR_34)) / 8;
   break;
  case 0x3380:
   VAR_34 = 7 + FUNC_2(VAR_15 + 12, 32);
   VAR_32 = (39 + (VAR_13 - 1) * (8 + VAR_34)) / 7;
   break;
  }
 }

 VAR_23->auxiliary.length_valid = 1;
 VAR_23->auxiliary.length_scope = 1;
 VAR_23->auxiliary.imbedded_ccw_valid = 1;
 VAR_23->length = VAR_17;
 VAR_23->imbedded_ccw = VAR_10;
 VAR_23->count = VAR_14;
 VAR_23->sector = VAR_32;
 FUNC_6(&VAR_23->seek_addr, VAR_25, VAR_28);
 VAR_23->search_arg.cyl = VAR_23->seek_addr.cyl;
 VAR_23->search_arg.head = VAR_23->seek_addr.head;
 VAR_23->search_arg.record = VAR_13;

 VAR_24 = FUNC_4(VAR_7, VAR_30, 0,
       &VAR_19, sizeof(VAR_19), VAR_16);

 return VAR_31;
}
