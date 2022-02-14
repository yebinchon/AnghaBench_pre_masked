
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct ib_wc {scalar_t__ slid; } ;
struct ib_port_attr {scalar_t__ lid; } ;
struct TYPE_2__ {scalar_t__ method; scalar_t__ mgmt_class; int attr_id; int status; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;
struct ib_grh {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,struct ib_mad*) ;
 int FUNC_3 (struct ib_device*,int ,struct ib_port_attr*) ;
 int FUNC_4 (int ,int,int,int ,struct ib_wc*,struct ib_grh*,struct ib_mad*,struct ib_mad*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct ib_device*,struct ib_mad*) ;
 int FUNC_7 (struct ib_device*,int ,struct ib_mad*,scalar_t__) ;
 int FUNC_8 (struct ib_device*) ;

int FUNC_9(struct ib_device *VAR_20,
        int VAR_21,
        u8 VAR_22,
        struct ib_wc *VAR_23,
        struct ib_grh *VAR_24,
        struct ib_mad *VAR_25,
        struct ib_mad *VAR_26)
{
 int VAR_27;
 u16 VAR_28 = VAR_23 ? VAR_23->slid : FUNC_0(VAR_1);
 u16 VAR_29 = 0;
 struct ib_port_attr VAR_30;


 if (VAR_25->mad_hdr.method == VAR_13 &&
     VAR_28 == 0) {
  FUNC_2(FUNC_8(VAR_20), VAR_22, VAR_25);
  return VAR_7 | VAR_4;
 }







 if (VAR_25->mad_hdr.mgmt_class == VAR_10 ||
     VAR_25->mad_hdr.mgmt_class == VAR_9) {
  if (VAR_25->mad_hdr.method != VAR_11 &&
      VAR_25->mad_hdr.method != VAR_12 &&
      VAR_25->mad_hdr.method != VAR_14)
   return VAR_7;





  if (VAR_25->mad_hdr.attr_id == VAR_16 ||
      ((VAR_25->mad_hdr.attr_id & VAR_17) ==
       VAR_17))
   return VAR_7;
 } else if (VAR_25->mad_hdr.mgmt_class == VAR_8 ||
     VAR_25->mad_hdr.mgmt_class == VAR_18 ||
     VAR_25->mad_hdr.mgmt_class == VAR_19) {
  if (VAR_25->mad_hdr.method != VAR_11 &&
      VAR_25->mad_hdr.method != VAR_12)
   return VAR_7;
 } else
  return VAR_7;
 if ((VAR_25->mad_hdr.mgmt_class == VAR_10 ||
      VAR_25->mad_hdr.mgmt_class == VAR_9) &&
     VAR_25->mad_hdr.method == VAR_12 &&
     VAR_25->mad_hdr.attr_id == VAR_15 &&
     !FUNC_3(VAR_20, VAR_22, &VAR_30))
  VAR_29 = VAR_30.lid;

 VAR_27 = FUNC_4(FUNC_8(VAR_20),
       VAR_21 & VAR_3,
       VAR_21 & VAR_2,
       VAR_22, VAR_23, VAR_24, VAR_25, VAR_26);
 if (VAR_27 == -VAR_0)
  return VAR_7;
 else if (VAR_27) {
  FUNC_5(FUNC_8(VAR_20), "MAD_IFC returned %d\n", VAR_27);
  return VAR_5;
 }

 if (!VAR_26->mad_hdr.status) {
  FUNC_7(VAR_20, VAR_22, VAR_25, VAR_29);
  FUNC_6(VAR_20, VAR_26);
 }


 if (VAR_25->mad_hdr.mgmt_class == VAR_9)
  VAR_26->mad_hdr.status |= FUNC_1(1 << 15);

 if (VAR_25->mad_hdr.method == VAR_14)

  return VAR_7 | VAR_4;

 return VAR_7 | VAR_6;
}
