
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct qib_pportdata {int link_width_enabled; int link_width_active; int link_speed_enabled; int link_speed_active; int vls_operational; TYPE_1__* cpspec; int dd; } ;
struct TYPE_2__ {int ibcctrl; int ibcddrctrl; } ;


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
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_15 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct qib_pportdata *VAR_16, int VAR_17)
{
 int VAR_18, VAR_19 = 0;
 u64 VAR_20;

 switch (VAR_17) {
 case 137:
  VAR_19 = VAR_16->link_width_enabled;
  goto done;

 case 138:
  VAR_19 = VAR_16->link_width_active;
  goto done;

 case 130:
  VAR_19 = VAR_16->link_speed_enabled;
  goto done;

 case 131:
  VAR_19 = VAR_16->link_speed_active;
  goto done;

 case 132:
  VAR_18 = VAR_7;
  VAR_20 = VAR_6;
  break;

 case 139:
  VAR_18 = VAR_5;
  VAR_20 = VAR_4;
  break;

 case 140:
  VAR_19 = FUNC_2(VAR_16->dd, VAR_15)
   & VAR_1;
  goto done;

 case 136:
  VAR_19 = VAR_16->vls_operational;
  goto done;

 case 129:
  VAR_19 = 0;
  goto done;

 case 128:
  VAR_19 = 0;
  goto done;

 case 135:
  VAR_19 = FUNC_0(VAR_16->cpspec->ibcctrl, VAR_8,
    VAR_12);
  goto done;

 case 134:
  VAR_19 = FUNC_0(VAR_16->cpspec->ibcctrl, VAR_8,
    VAR_13);
  goto done;

 case 141:

  VAR_19 = (VAR_16->cpspec->ibcctrl &
         FUNC_1(VAR_8, VAR_11)) ?
   VAR_10 : VAR_9;
  goto done;

 case 142:
  VAR_18 = VAR_3;
  VAR_20 = VAR_2;
  break;

 case 133:




  VAR_19 = (VAR_16->link_speed_active == VAR_14);
  goto done;

 default:
  VAR_19 = -VAR_0;
  goto done;
 }
 VAR_19 = (int)((VAR_16->cpspec->ibcddrctrl >> VAR_18) & VAR_20);
done:
 return VAR_19;
}
