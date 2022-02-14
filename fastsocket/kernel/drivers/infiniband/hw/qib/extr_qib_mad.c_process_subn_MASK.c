
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct qib_pportdata {TYPE_2__* dd; } ;
struct qib_ibport {int port_cap_flags; } ;
struct ib_smp {int class_version; int method; int status; int * data; int attr_id; int attr_mod; } ;
struct TYPE_3__ {scalar_t__ attr_id; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;
struct ib_device {scalar_t__ phys_port_cnt; } ;
struct TYPE_4__ {int (* f_set_ib_cfg ) (struct qib_pportdata*,int ,int ) ;} ;


 int VAR_0 ;
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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct qib_ibport*,struct ib_smp*,int) ;
 int FUNC_2 (struct ib_smp*) ;
 struct qib_pportdata* FUNC_3 (struct qib_ibport*) ;
 int FUNC_4 (struct ib_smp*) ;
 int FUNC_5 (struct qib_pportdata*,int ,int ) ;
 int FUNC_6 (struct ib_smp*,struct ib_device*,scalar_t__) ;
 int FUNC_7 (struct ib_smp*,struct ib_device*) ;
 int FUNC_8 (struct ib_smp*,struct ib_device*,scalar_t__) ;
 int FUNC_9 (struct ib_smp*,struct ib_device*,scalar_t__) ;
 int FUNC_10 (struct ib_smp*,struct ib_device*,scalar_t__) ;
 int FUNC_11 (struct ib_smp*,struct ib_device*,scalar_t__) ;
 int FUNC_12 (struct ib_smp*,struct ib_device*,scalar_t__) ;
 int FUNC_13 (struct ib_smp*,struct ib_device*,scalar_t__) ;
 int FUNC_14 (struct ib_smp*,struct ib_device*,scalar_t__) ;
 int FUNC_15 (struct ib_smp*,struct ib_device*,scalar_t__) ;
 int FUNC_16 (struct ib_smp*,struct ib_device*,scalar_t__) ;
 int FUNC_17 (struct ib_smp*,struct ib_device*,scalar_t__) ;
 int FUNC_18 (struct ib_smp*,struct ib_device*,scalar_t__) ;
 struct qib_ibport* FUNC_19 (struct ib_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_20(struct ib_device *VAR_11, int VAR_12,
   u8 VAR_13, struct ib_mad *VAR_14,
   struct ib_mad *VAR_15)
{
 struct ib_smp *VAR_16 = (struct ib_smp *)VAR_15;
 struct qib_ibport *VAR_17 = FUNC_19(VAR_11, VAR_13);
 struct qib_pportdata *VAR_18 = FUNC_3(VAR_17);
 int VAR_19;

 *VAR_15 = *VAR_14;
 if (VAR_16->class_version != 1) {
  VAR_16->status |= VAR_8;
  VAR_19 = FUNC_4(VAR_16);
  goto bail;
 }

 VAR_19 = FUNC_1(VAR_17, VAR_16, VAR_12);
 if (VAR_19) {
  u32 VAR_20 = FUNC_0(VAR_16->attr_mod);
  if (VAR_14->mad_hdr.attr_id == 131 &&
      (VAR_16->method == 143 ||
       VAR_16->method == 138) &&
      VAR_20 && VAR_20 <= VAR_11->phys_port_cnt &&
      VAR_13 != VAR_20)
   (void) FUNC_1(FUNC_19(VAR_11, VAR_20), VAR_16, 0);
  VAR_19 = VAR_1;
  goto bail;
 }

 switch (VAR_16->method) {
 case 143:
  switch (VAR_16->attr_id) {
  case 134:
   VAR_19 = FUNC_7(VAR_16, VAR_11);
   goto bail;
  case 133:
   VAR_19 = FUNC_8(VAR_16, VAR_11, VAR_13);
   goto bail;
  case 135:
   VAR_19 = FUNC_6(VAR_16, VAR_11, VAR_13);
   goto bail;
  case 131:
   VAR_19 = FUNC_10(VAR_16, VAR_11, VAR_13);
   goto bail;
  case 132:
   VAR_19 = FUNC_9(VAR_16, VAR_11, VAR_13);
   goto bail;
  case 130:
   VAR_19 = FUNC_11(VAR_16, VAR_11, VAR_13);
   goto bail;
  case 128:
   VAR_19 = FUNC_12(VAR_16, VAR_11, VAR_13);
   goto bail;
  case 129:
   if (VAR_17->port_cap_flags & VAR_4) {
    VAR_19 = VAR_2 |
     VAR_0;
    goto bail;
   }
   if (VAR_17->port_cap_flags & VAR_3) {
    VAR_19 = VAR_2;
    goto bail;
   }

  default:
   VAR_16->status |= VAR_7;
   VAR_19 = FUNC_4(VAR_16);
   goto bail;
  }

 case 138:
  switch (VAR_16->attr_id) {
  case 135:
   VAR_19 = FUNC_13(VAR_16, VAR_11, VAR_13);
   goto bail;
  case 131:
   VAR_19 = FUNC_15(VAR_16, VAR_11, VAR_13);
   goto bail;
  case 132:
   VAR_19 = FUNC_14(VAR_16, VAR_11, VAR_13);
   goto bail;
  case 130:
   VAR_19 = FUNC_16(VAR_16, VAR_11, VAR_13);
   goto bail;
  case 128:
   VAR_19 = FUNC_17(VAR_16, VAR_11, VAR_13);
   goto bail;
  case 129:
   if (VAR_17->port_cap_flags & VAR_4) {
    VAR_19 = VAR_2 |
     VAR_0;
    goto bail;
   }
   if (VAR_17->port_cap_flags & VAR_3) {
    VAR_19 = VAR_2;
    goto bail;
   }

  default:
   VAR_16->status |= VAR_7;
   VAR_19 = FUNC_4(VAR_16);
   goto bail;
  }

 case 136:
  if (VAR_16->attr_id == VAR_5)
   VAR_19 = FUNC_18(VAR_16, VAR_11, VAR_13);
  else {
   VAR_16->status |= VAR_7;
   VAR_19 = FUNC_4(VAR_16);
  }
  goto bail;

 case 137:
 case 141:
 case 140:
 case 142:





  VAR_19 = VAR_2;
  goto bail;

 case 139:
  if (FUNC_2(VAR_16) &&
      VAR_16->attr_id == VAR_10) {
   VAR_18->dd->f_set_ib_cfg(VAR_18, VAR_9,
           VAR_16->data[0]);
   VAR_19 = VAR_2 | VAR_0;
  } else
   VAR_19 = VAR_2;
  goto bail;

 default:
  VAR_16->status |= VAR_6;
  VAR_19 = FUNC_4(VAR_16);
 }

bail:
 return VAR_19;
}
