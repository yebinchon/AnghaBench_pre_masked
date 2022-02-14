
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char* packet; scalar_t__ pktcnt; scalar_t__ pktsize; scalar_t__ type; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;
typedef int psmouse_ret_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct input_dev*,int ,unsigned char) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static psmouse_ret_t FUNC_3(struct psmouse *VAR_16)
{
 struct input_dev *VAR_17 = VAR_16->dev;
 unsigned char *VAR_18 = VAR_16->packet;

 if (VAR_16->pktcnt < VAR_16->pktsize)
  return VAR_8;
 if (VAR_16->type == VAR_10 || VAR_16->type == VAR_7)
  FUNC_1(VAR_17, VAR_13, -(signed char) VAR_18[3]);





 if (VAR_16->type == VAR_9) {
  switch (VAR_18[3] & 0xC0) {
   case 0x80:
    FUNC_1(VAR_17, VAR_13, (int) (VAR_18[3] & 32) - (int) (VAR_18[3] & 31));
    break;
   case 0x40:
    FUNC_1(VAR_17, VAR_12, (int) (VAR_18[3] & 32) - (int) (VAR_18[3] & 31));
    break;
   case 0x00:
   case 0xC0:
    FUNC_1(VAR_17, VAR_13, (int) (VAR_18[3] & 8) - (int) (VAR_18[3] & 7));
    FUNC_0(VAR_17, VAR_4, (VAR_18[3] >> 4) & 1);
    FUNC_0(VAR_17, VAR_0, (VAR_18[3] >> 5) & 1);
    break;
  }
 }





 if (VAR_16->type == VAR_7) {
  FUNC_0(VAR_17, VAR_4, (VAR_18[0] >> 6) & 1);
  FUNC_0(VAR_17, VAR_0, (VAR_18[0] >> 7) & 1);
 }




 if (VAR_16->type == VAR_11) {
  FUNC_0(VAR_17, VAR_0, (VAR_18[0] >> 3) & 1);

  VAR_18[1] |= (VAR_18[0] & 0x40) << 1;
 }





 if (VAR_16->type == VAR_5) {
  FUNC_0(VAR_17, VAR_4, (VAR_18[0] >> 3) & 1);
  VAR_18[0] |= 0x08;
 }





 FUNC_0(VAR_17, VAR_1, VAR_18[0] & 1);
 FUNC_0(VAR_17, VAR_2, (VAR_18[0] >> 2) & 1);
 FUNC_0(VAR_17, VAR_3, (VAR_18[0] >> 1) & 1);

 FUNC_1(VAR_17, VAR_14, VAR_18[1] ? (int) VAR_18[1] - (int) ((VAR_18[0] << 4) & 0x100) : 0);
 FUNC_1(VAR_17, VAR_15, VAR_18[2] ? (int) ((VAR_18[0] << 3) & 0x100) - (int) VAR_18[2] : 0);

 FUNC_2(VAR_17);

 return VAR_6;
}
