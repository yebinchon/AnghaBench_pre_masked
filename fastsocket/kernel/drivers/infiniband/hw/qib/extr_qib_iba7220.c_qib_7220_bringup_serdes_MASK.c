
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct qib_pportdata {int ibmaxlen; int link_speed_enabled; int link_width_enabled; int guid; TYPE_1__* cpspec; struct qib_devdata* dd; } ;
struct qib_devdata {int control; int base_guid; } ;
struct TYPE_2__ {int ibdeltainprog; int ibcctrl; int ibcddrctrl; void* iblnkerrsnap; void* ibsymsnap; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 int FUNC_2 (struct qib_devdata*,int ) ;
 void* FUNC_3 (struct qib_devdata*,int ) ;
 int FUNC_4 (struct qib_devdata*) ;
 int FUNC_5 (struct qib_devdata*,int ,int) ;
 void* FUNC_6 (struct qib_devdata*,int ) ;

__attribute__((used)) static int FUNC_7(struct qib_pportdata *VAR_38)
{
 struct qib_devdata *VAR_39 = VAR_38->dd;
 u64 VAR_40, VAR_41, VAR_42, VAR_43;
 int VAR_44 = 0;


 VAR_39->control &= ~VAR_23;
 FUNC_5(VAR_39, VAR_30, 0ULL);

 if (VAR_37) {
  VAR_38->cpspec->ibdeltainprog = 1;
  VAR_38->cpspec->ibsymsnap = FUNC_6(VAR_39, VAR_29);
  VAR_38->cpspec->iblnkerrsnap =
   FUNC_6(VAR_39, VAR_28);
 }


 VAR_43 = 0x5ULL << FUNC_0(VAR_15, VAR_2);





 VAR_43 |= 0x3ULL << FUNC_0(VAR_15, VAR_1);

 VAR_43 |= 0xfULL << FUNC_0(VAR_15, VAR_20);

 VAR_43 |= 4ULL << FUNC_0(VAR_15, VAR_0);

 VAR_43 |= 0xfULL << FUNC_0(VAR_15, VAR_19);




 VAR_43 |= ((u64)(VAR_38->ibmaxlen >> 2) + 1) << FUNC_0(VAR_15, VAR_18);
 VAR_38->cpspec->ibcctrl = VAR_43;


 VAR_40 = VAR_38->cpspec->ibcctrl | (VAR_24 <<
  VAR_25);
 FUNC_5(VAR_39, VAR_32, VAR_40);

 if (!VAR_38->cpspec->ibcddrctrl) {

  VAR_38->cpspec->ibcddrctrl = FUNC_3(VAR_39, VAR_33);

  if (VAR_38->link_speed_enabled == (VAR_22 | VAR_21))
   VAR_38->cpspec->ibcddrctrl |=
    VAR_9 |
    VAR_5;
  else
   VAR_38->cpspec->ibcddrctrl |=
    VAR_38->link_speed_enabled == VAR_21 ?
    VAR_10 : VAR_11;
  if ((VAR_38->link_width_enabled & (VAR_16 | VAR_17)) ==
      (VAR_16 | VAR_17))
   VAR_38->cpspec->ibcddrctrl |= VAR_14;
  else
   VAR_38->cpspec->ibcddrctrl |=
    VAR_38->link_width_enabled == VAR_17 ?
    VAR_13 :
    VAR_12;


  VAR_38->cpspec->ibcddrctrl |=
   VAR_7 << VAR_8;
  VAR_38->cpspec->ibcddrctrl |=
   VAR_3 << VAR_4;


  VAR_38->cpspec->ibcddrctrl |= VAR_6;
 } else

  FUNC_5(VAR_39, VAR_35, 0);

 FUNC_5(VAR_39, VAR_33, VAR_38->cpspec->ibcddrctrl);
 FUNC_5(VAR_39, VAR_35, 0);

 FUNC_5(VAR_39, VAR_34, 0Ull);
 FUNC_5(VAR_39, VAR_35, 0);

 VAR_44 = FUNC_4(VAR_39);

 VAR_40 = FUNC_3(VAR_39, VAR_36);
 VAR_41 = VAR_40;
 VAR_40 |= VAR_26;
 if (VAR_40 != VAR_41) {
  FUNC_5(VAR_39, VAR_36, VAR_40);
  FUNC_2(VAR_39, VAR_35);
 }
 if (VAR_40 & VAR_27)
  VAR_40 &= ~VAR_27;
 if (VAR_40 != VAR_41)
  FUNC_5(VAR_39, VAR_36, VAR_40);


 if (!VAR_38->guid)
  VAR_38->guid = VAR_39->base_guid;
 VAR_42 = FUNC_1(VAR_38->guid);

 FUNC_5(VAR_39, VAR_31, VAR_42);
 if (!VAR_44) {
  VAR_39->control |= VAR_23;
  FUNC_5(VAR_39, VAR_30, VAR_39->control);
 } else

  FUNC_5(VAR_39, VAR_35, 0);
 return VAR_44;
}
