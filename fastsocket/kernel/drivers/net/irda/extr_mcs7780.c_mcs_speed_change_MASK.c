
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcs_cb {int new_speed; int speed; int transceiver_type; } ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int FUNC_2 (struct mcs_cb*,int ,int*) ;
 int FUNC_3 (struct mcs_cb*,int ,int) ;
 int FUNC_4 (struct mcs_cb*) ;
 int FUNC_5 (struct mcs_cb*) ;
 int FUNC_6 (struct mcs_cb*) ;
 int* VAR_8 ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct mcs_cb *VAR_9)
{
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 0;
 __u16 VAR_13;
 __u16 VAR_14;

 VAR_13 = VAR_8[(VAR_9->new_speed >> 8) & 0x0f];

 do {
  FUNC_2(VAR_9, VAR_6, &VAR_14);
 } while(VAR_12++ < 100 && (VAR_14 & VAR_2));

 if (VAR_12 > 100) {
  FUNC_0("unable to change speed\n");
  VAR_10 = -VAR_0;
  goto error;
 }

 FUNC_2(VAR_9, VAR_4, &VAR_14);


 if (VAR_9->new_speed <= 115200) {
  VAR_14 &= ~VAR_1;

  if ((VAR_11 = (VAR_9->speed > 115200)))
   FUNC_3(VAR_9, VAR_3, 0);

 } else if (VAR_9->new_speed <= 1152000) {
  VAR_14 &= ~VAR_1;

  if ((VAR_11 = !(VAR_9->speed == 576000 || VAR_9->speed == 1152000)))
   FUNC_3(VAR_9, VAR_3, 5);

 } else {
  VAR_14 |= VAR_1;

  if ((VAR_11 = (VAR_9->speed != 4000000)))
   FUNC_3(VAR_9, VAR_3, 5);

 }

 VAR_14 &= ~VAR_7;
 VAR_14 |= VAR_13;

 VAR_10 = FUNC_3(VAR_9, VAR_4, VAR_14);
 if (FUNC_7(VAR_10))
  goto error;

 if (VAR_11)
  switch (VAR_9->transceiver_type) {
  case 128:
   VAR_10 = FUNC_6(VAR_9);
   break;

  case 129:
   VAR_10 = FUNC_5(VAR_9);
   break;

  case 130:
   VAR_10 = FUNC_4(VAR_9);
   break;

  default:
   VAR_10 = 1;
   FUNC_1("Unknown transceiver type: %d\n",
         VAR_9->transceiver_type);
  }
 if (FUNC_7(VAR_10))
  goto error;

 FUNC_2(VAR_9, VAR_4, &VAR_14);
 VAR_14 &= ~VAR_5;
 VAR_10 = FUNC_3(VAR_9, VAR_4, VAR_14);

 VAR_9->speed = VAR_9->new_speed;
 error:
  VAR_9->new_speed = 0;
  return VAR_10;
}
