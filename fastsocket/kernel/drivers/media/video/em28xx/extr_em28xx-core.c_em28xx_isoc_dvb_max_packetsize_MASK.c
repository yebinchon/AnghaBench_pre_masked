
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {scalar_t__ chip_id; } ;


 scalar_t__ VAR_0 ;




 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,unsigned int) ;
 unsigned int FUNC_1 (struct em28xx*,int ) ;

int FUNC_2(struct em28xx *VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5 = 564;

 if (VAR_3->chip_id == VAR_0) {


  VAR_5 = 564;
 } else {

  VAR_4 = FUNC_1(VAR_3, VAR_2);
  switch (VAR_4 & VAR_1) {
  case 131:
   VAR_5 = 188;
   break;
  case 130:
   VAR_5 = 376;
   break;
  case 129:
   VAR_5 = 564;
   break;
  case 128:
   VAR_5 = 752;
   break;
  }
 }

 FUNC_0("dvb max packet size=%d\n", VAR_5);
 return VAR_5;
}
