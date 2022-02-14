
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcs_cb {int speed; int transceiver_type; scalar_t__ receive_mode; scalar_t__ new_speed; scalar_t__ sir_tweak; } ;
typedef int __u16 ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int) ;
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
 int FUNC_2 (struct mcs_cb*,int ,int*) ;
 int FUNC_3 (struct mcs_cb*,int ,int) ;
 int FUNC_4 (struct mcs_cb*) ;
 int FUNC_5 (struct mcs_cb*) ;
 int FUNC_6 (struct mcs_cb*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline int FUNC_8(struct mcs_cb *VAR_15)
{
 int VAR_16 = 0;
 __u16 VAR_17;
 char *VAR_18;

 VAR_18 = "Basic transceiver setup error.";




 VAR_16 = FUNC_2(VAR_15, VAR_6, &VAR_17);
 if(FUNC_7(VAR_16 != 2))
  goto error;
 VAR_17 |= VAR_2;
 VAR_16 = FUNC_3(VAR_15, VAR_6, VAR_17);
 if(FUNC_7(VAR_16))
  goto error;

 VAR_17 = 0;
 VAR_16 = FUNC_3(VAR_15, VAR_5, VAR_17);
 if(FUNC_7(VAR_16))
  goto error;

 VAR_16 = FUNC_2(VAR_15, VAR_6, &VAR_17);
 if(FUNC_7(VAR_16 != 2))
  goto error;

 VAR_17 &= ~VAR_4;
 if(VAR_15->sir_tweak)
  VAR_17 |= VAR_11;
 else
  VAR_17 &= ~VAR_11;


 VAR_17 &= ~(VAR_1 | VAR_0);

 VAR_17 &= ~VAR_13;
 VAR_17 |= VAR_12;
 VAR_15->speed = 9600;
 VAR_15->new_speed = 0;
 VAR_17 &= ~VAR_7;




 VAR_17 |= VAR_3 | VAR_10;

 VAR_16 = FUNC_3(VAR_15, VAR_6, VAR_17);
 if(FUNC_7(VAR_16))
  goto error;

 VAR_18 = "transceiver model specific setup error.";
 switch (VAR_15->transceiver_type) {
 case 128:
  VAR_16 = FUNC_6(VAR_15);
  break;

 case 129:
  VAR_16 = FUNC_5(VAR_15);
  break;

 case 130:
  VAR_16 = FUNC_4(VAR_15);
  break;

 default:
  FUNC_1("Unknown transceiver type: %d\n",
        VAR_15->transceiver_type);
  VAR_16 = 1;
 }
 if (FUNC_7(VAR_16))
  goto error;




 if (VAR_15->transceiver_type != 129) {

  VAR_16 = FUNC_2(VAR_15, VAR_14, &VAR_17);
  if (FUNC_7(VAR_16 != 2))
   goto error;
  if (VAR_15->receive_mode)
   VAR_17 |= VAR_9;
  else
   VAR_17 &= ~VAR_9;
  VAR_16 = FUNC_3(VAR_15, VAR_14, VAR_17);
  if (FUNC_7(VAR_16))
   goto error;
 }

 VAR_18 = "transceiver reset.";

 VAR_16 = FUNC_2(VAR_15, VAR_6, &VAR_17);
 if (FUNC_7(VAR_16 != 2))
  goto error;


 VAR_17 &= ~VAR_8;
 VAR_16 = FUNC_3(VAR_15, VAR_6, VAR_17);
 if (FUNC_7(VAR_16))
  goto error;
 else
  return VAR_16;

error:
 FUNC_0("%s\n", VAR_18);
 return VAR_16;
}
