
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct alps_data* private; } ;
struct alps_data {void* proto_version; int flags; int decode_fields; int hw_init; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct psmouse*) ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct psmouse*,struct alps_data*,unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_2 (struct psmouse*,int ) ;
 scalar_t__ FUNC_3 (struct psmouse*,int ,int ,unsigned char*) ;
 int FUNC_4 (struct alps_data*) ;
 int FUNC_5 (char*,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) ;

__attribute__((used)) static int FUNC_6(struct psmouse *VAR_12, struct alps_data *VAR_13)
{
 unsigned char VAR_14[4], VAR_15[4], VAR_16[4];







 if (FUNC_3(VAR_12, VAR_7,
    VAR_8, VAR_14))
  return -VAR_5;

 if ((VAR_14[0] & 0xf8) != 0 || VAR_14[1] != 0 || (VAR_14[2] != 10 && VAR_14[2] != 100))
  return -VAR_4;





 if (FUNC_3(VAR_12, VAR_7,
    VAR_9, VAR_15) ||
     FUNC_3(VAR_12, VAR_7,
    VAR_6, VAR_16) ||
     FUNC_0(VAR_12))
  return -VAR_5;

 if (FUNC_1(VAR_12, VAR_13, VAR_15, VAR_16) == 0) {
  return 0;
 } else if (VAR_15[0] == 0x73 && VAR_15[1] == 0x03 && VAR_15[2] == 0x50 &&
     VAR_16[0] == 0x73 && VAR_16[1] == 0x01) {
  VAR_13->proto_version = VAR_2;
  FUNC_4(VAR_13);

  return 0;
 } else if (VAR_16[0] == 0x88 && VAR_16[1] == 0x08) {
  VAR_13->proto_version = VAR_1;
  FUNC_4(VAR_13);

  VAR_13->hw_init = VAR_11;
  VAR_13->decode_fields = VAR_10;


  VAR_12->private = VAR_13;

  if (FUNC_2(VAR_12, VAR_3))
   VAR_13->flags &= ~VAR_0;

  return 0;
 } else if (VAR_16[0] == 0x88 && VAR_16[1] == 0x07 &&
     VAR_16[2] >= 0x90 && VAR_16[2] <= 0x9d) {
  VAR_13->proto_version = VAR_1;
  FUNC_4(VAR_13);

  return 0;
 }

 FUNC_5("Unknown ALPS touchpad: E7=%2.2x %2.2x %2.2x, EC=%2.2x %2.2x %2.2x\n",
     VAR_15[0], VAR_15[1], VAR_15[2], VAR_16[0], VAR_16[1], VAR_16[2]);

 return -VAR_4;
}
