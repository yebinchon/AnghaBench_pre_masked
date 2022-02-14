
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct isl6423_dev {int reg_3; int reg_4; } ;
struct dvb_frontend {scalar_t__ sec_priv; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;


 int VAR_0 ;



 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (struct isl6423_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1,
          enum fe_sec_voltage VAR_2)
{
 struct isl6423_dev *VAR_3 = (struct isl6423_dev *) VAR_1->sec_priv;
 u8 VAR_4 = VAR_3->reg_3;
 u8 VAR_5 = VAR_3->reg_4;
 int VAR_6 = 0;

 switch (VAR_2) {
 case 128:

  VAR_5 &= ~(1 << 4);
  break;

 case 130:

  VAR_5 |= (1 << 4);
  VAR_5 &= ~0x3;
  VAR_4 |= (1 << 3);
  break;

 case 129:

  VAR_5 |= (1 << 4);
  VAR_5 |= 0x2;
  VAR_5 &= ~0x1;
  VAR_4 |= (1 << 3);
  break;

 default:
  break;
 }
 VAR_6 = FUNC_1(VAR_3, VAR_4);
 if (VAR_6 < 0)
  goto exit;

 VAR_6 = FUNC_1(VAR_3, VAR_5);
 if (VAR_6 < 0)
  goto exit;

 VAR_3->reg_3 = VAR_4;
 VAR_3->reg_4 = VAR_5;

 return 0;
exit:
 FUNC_0(VAR_0, 1, "I/O error <%d>", VAR_6);
 return VAR_6;
}
