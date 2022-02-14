
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;
struct h3600_dev {unsigned char event; unsigned char len; size_t idx; unsigned char chksum; unsigned char* buf; } ;
typedef int irqreturn_t ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;




 int FUNC_0 (struct h3600_dev*) ;
 int FUNC_1 (char*) ;
 struct h3600_dev* FUNC_2 (struct serio*) ;
 int VAR_4 ;

__attribute__((used)) static irqreturn_t FUNC_3(struct serio *VAR_5, unsigned char VAR_6,
                                     unsigned int VAR_7)
{
 struct h3600_dev *VAR_8 = FUNC_2(VAR_5);




 switch (VAR_4) {
  case 128:
   if (VAR_6 == VAR_1)
    VAR_4 = 129;
   break;
  case 129:
   VAR_8->event = (VAR_6 & 0xf0) >> 4;
   VAR_8->len = (VAR_6 & 0xf);
   VAR_8->idx = 0;
   if (VAR_8->event >= VAR_3) {
    VAR_4 = 128;
    break;
   }
   VAR_8->chksum = VAR_6;
   VAR_4 = (VAR_8->len > 0) ? 131 : 130;
   break;
  case 131:
   VAR_8->chksum += VAR_6;
   VAR_8->buf[VAR_8->idx]= VAR_6;
   if (++VAR_8->idx == VAR_8->len)
    VAR_4 = 130;
   break;
  case 130:
   VAR_4 = 128;
   if (VAR_6 == VAR_0 || VAR_6 == VAR_8->chksum)
    FUNC_0(VAR_8);
   break;
  default:
   FUNC_1("Error3\n");
   break;
 }

 return VAR_2;
}
