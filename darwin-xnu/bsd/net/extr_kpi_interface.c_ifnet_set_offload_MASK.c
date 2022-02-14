
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int32_t ;
typedef TYPE_1__* ifnet_t ;
typedef int ifnet_offload_t ;
typedef int errno_t ;
struct TYPE_8__ {int if_hwassist; } ;


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
 scalar_t__ VAR_28 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int ,char*,int ,int,int ) ;
 int VAR_29 ;

errno_t
FUNC_6(ifnet_t VAR_30, ifnet_offload_t VAR_31)
{
 u_int32_t VAR_32 = 0;

 if (VAR_30 == ((void*)0))
  return (VAR_0);

 FUNC_2(VAR_30);
 VAR_30->if_hwassist = (VAR_31 & VAR_29);







 if (VAR_30->if_hwassist & VAR_12) {
  VAR_30->if_hwassist |= (VAR_13 | VAR_15 |
      VAR_14 | VAR_16);
 }
 if (VAR_28) {
  FUNC_5(VAR_26, "%s: set offload flags=%b\n",
      FUNC_0(VAR_30),
      VAR_30->if_hwassist, VAR_19);
 }
 FUNC_1(VAR_30);

 if ((VAR_31 & VAR_27))
  VAR_32 |= VAR_3;
 if ((VAR_31 & VAR_21))
  VAR_32 |= VAR_6;
 if ((VAR_31 & VAR_22))
  VAR_32 |= VAR_7;
 if ((VAR_31 & VAR_24))
  VAR_32 |= VAR_11;
 if ((VAR_31 & VAR_25))
  VAR_32 |= VAR_10;
 if ((VAR_31 & VAR_23))
  VAR_32 |= VAR_8;
 if ((VAR_31 & VAR_18))
  VAR_32 |= VAR_4;
 if ((VAR_31 & VAR_20))
  VAR_32 |= VAR_5;
 if ((VAR_31 & VAR_12))
  VAR_32 |= VAR_1;
 if ((VAR_31 & VAR_17))
  VAR_32 |= VAR_2;
 if (VAR_32 != 0) {
  (void) FUNC_4(VAR_30, VAR_32,
      VAR_9);
  (void) FUNC_3(VAR_30, VAR_32,
      VAR_9);
 }

 return (0);
}
