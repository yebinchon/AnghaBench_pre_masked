
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sbmac_softc {int sbm_speed; scalar_t__ sbm_state; int sbm_maccfg; int sbm_framecfg; } ;
typedef enum sbmac_speed { ____Placeholder_sbmac_speed } sbmac_speed ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;



 scalar_t__ VAR_21 ;

__attribute__((used)) static int FUNC_2(struct sbmac_softc *VAR_22, enum sbmac_speed VAR_23)
{
 uint64_t VAR_24;
 uint64_t VAR_25;





 VAR_22->sbm_speed = VAR_23;

 if (VAR_22->sbm_state == VAR_21)
  return 0;





 VAR_24 = FUNC_0(VAR_22->sbm_maccfg);
 VAR_25 = FUNC_0(VAR_22->sbm_framecfg);





 VAR_24 &= ~(VAR_1 | VAR_6);
 VAR_25 &= ~(VAR_2 | VAR_4 | VAR_3 |
        VAR_5);





 switch (VAR_23) {
 case 130:
  VAR_25 |= VAR_7 |
   VAR_12 |
   VAR_0 |
   VAR_15;
  VAR_24 |= VAR_20;
  break;

 case 129:
  VAR_25 |= VAR_8 |
   VAR_13 |
   VAR_10 |
   VAR_16;
  VAR_24 |= VAR_19 ;
  break;

 case 128:
  VAR_25 |= VAR_9 |
   VAR_14 |
   VAR_11 |
   VAR_17;
  VAR_24 |= VAR_18 | VAR_1;
  break;

 default:
  return 0;
 }





 FUNC_1(VAR_25, VAR_22->sbm_framecfg);
 FUNC_1(VAR_24, VAR_22->sbm_maccfg);

 return 1;
}
