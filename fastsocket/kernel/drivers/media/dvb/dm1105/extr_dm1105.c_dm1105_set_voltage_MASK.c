
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_frontend {int dummy; } ;
struct dm1105_dev {int boardnr; } ;
typedef scalar_t__ fe_sec_voltage_t ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,int ) ;
 struct dm1105_dev* FUNC_1 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_12, fe_sec_voltage_t VAR_13)
{
 struct dm1105_dev *VAR_14 = FUNC_1(VAR_12);
 u32 VAR_15, VAR_16, VAR_17, VAR_18;

 switch (VAR_14->boardnr) {
 case 130:
  VAR_15 = VAR_2;
  VAR_18 = VAR_3;
  VAR_16 = VAR_0;
  VAR_17 = VAR_1;
  break;
 case 129:
 case 128:
 default:
  VAR_15 = VAR_8;
  VAR_18 = VAR_9;
  VAR_16 = VAR_6;
  VAR_17 = VAR_7;
 }

 FUNC_0(VAR_4, VAR_15);
 if (VAR_13 == VAR_11)
  FUNC_0(VAR_5, VAR_17);
 else if (VAR_13 == VAR_10)
  FUNC_0(VAR_5, VAR_16);
 else
  FUNC_0(VAR_5, VAR_18);

 return 0;
}
