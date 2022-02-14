
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct pcmcia_socket {unsigned int sock; } ;


 unsigned int VAR_0 ;
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



 int FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_socket *VAR_22, u_int *VAR_23)
{
 unsigned int VAR_24;
 uint8_t VAR_25, VAR_26;
 u_int VAR_27 = 0;

 if (VAR_22 == ((void*)0) || VAR_22->sock >= VAR_0 || VAR_23 == ((void*)0))
  return -VAR_2;

 VAR_24 = VAR_22->sock;

 VAR_25 = FUNC_0(VAR_24, VAR_12);
 if (FUNC_0(VAR_24, VAR_10) & VAR_11) {
  if (VAR_25 & VAR_8)
   VAR_27 |= VAR_19;
 } else {
  if (!(VAR_25 & VAR_3))
   VAR_27 |= VAR_14;
  else if ((VAR_25 & (VAR_3 | VAR_4)) == VAR_3)
   VAR_27 |= VAR_15;
 }
 if ((VAR_25 & VAR_5) == VAR_5)
  VAR_27 |= VAR_16;
 if (VAR_25 & VAR_9)
  VAR_27 |= VAR_20;
 if (VAR_25 & VAR_7)
  VAR_27 |= VAR_18;
 if (VAR_25 & VAR_6)
  VAR_27 |= VAR_17;

 VAR_26 = FUNC_0(VAR_24, VAR_1);
 switch (VAR_26) {
 case 130:
  VAR_27 |= VAR_13 | VAR_21;
  break;
 case 128:
  VAR_27 |= VAR_21;
  break;
 case 129:
  VAR_27 |= VAR_13;
  break;
 default:

  break;
 }

 *VAR_23 = VAR_27;

 return 0;
}
