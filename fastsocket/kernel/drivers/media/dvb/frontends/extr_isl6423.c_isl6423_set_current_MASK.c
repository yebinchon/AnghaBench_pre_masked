
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct isl6423_dev {int reg_3; struct isl6423_config* config; } ;
struct isl6423_config {int current_max; int curlim; } ;
struct dvb_frontend {scalar_t__ sec_priv; } ;


 int VAR_0 ;






 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (struct isl6423_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1)
{
 struct isl6423_dev *VAR_2 = (struct isl6423_dev *) VAR_1->sec_priv;
 u8 VAR_3 = VAR_2->reg_3;
 const struct isl6423_config *VAR_4 = VAR_2->config;
 int VAR_5 = 0;

 switch (VAR_4->current_max) {
 case 133:


  VAR_3 &= ~0x3;
  break;

 case 132:


  VAR_3 &= ~0x2;
  VAR_3 |= 0x1;
  break;

 case 131:


  VAR_3 &= ~0x1;
  VAR_3 |= 0x2;
  break;

 case 130:


  VAR_3 |= 0x3;
  break;
 }

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5 < 0)
  goto exit;

 switch (VAR_4->curlim) {
 case 128:

  VAR_3 &= ~0x10;
  break;

 case 129:

  VAR_3 |= 0x10;
  break;
 }

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5 < 0)
  goto exit;

 VAR_2->reg_3 = VAR_3;

 return 0;
exit:
 FUNC_0(VAR_0, 1, "I/O error <%d>", VAR_5);
 return VAR_5;
}
