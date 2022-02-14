
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vrc4173_socket_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int ;


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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int *,int ) ;
 int * VAR_31 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_32, u_int *VAR_33)
{
 vrc4173_socket_t *VAR_34 = &VAR_31[VAR_32];
 uint32_t VAR_35;
 uint8_t VAR_36;
 u_int VAR_37 = 0;

 VAR_36 = FUNC_1(VAR_34, VAR_11);
 if (VAR_36 & VAR_5) VAR_37 |= VAR_21;
 if (VAR_36 & VAR_13) VAR_37 |= VAR_22;
 if (VAR_36 & VAR_7) VAR_37 |= VAR_24;
 if ((VAR_36 & (VAR_3|VAR_4)) == (VAR_3|VAR_4))
  VAR_37 |= VAR_19;
 if (FUNC_1(VAR_34, VAR_12) & VAR_6) {
  if (VAR_36 & VAR_26) VAR_37 |= VAR_23;
 } else {
  VAR_36 &= VAR_1;
  if (VAR_36 != VAR_0) {
   if (VAR_36 == VAR_2) VAR_37 |= VAR_17;
   else VAR_37 |= VAR_16;
  }
 }

 VAR_35 = FUNC_0(VAR_34, VAR_14);
 if (VAR_35 & VAR_27) VAR_37 |= VAR_15;
 if (VAR_35 & VAR_29) VAR_37 |= VAR_25;
 if (VAR_35 & VAR_8) VAR_37 |= VAR_18;
 if (!(VAR_35 &
       (VAR_30|VAR_29|VAR_27|VAR_28|VAR_10|VAR_9)))
  VAR_37 |= VAR_20;

 *VAR_33 = VAR_37;

 return 0;
}
