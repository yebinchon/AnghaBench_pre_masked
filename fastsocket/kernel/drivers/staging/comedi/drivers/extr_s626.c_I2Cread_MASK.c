
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct comedi_device*,int) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static uint8_t FUNC_6(struct comedi_device *VAR_6, uint8_t VAR_7)
{
 uint8_t VAR_8;


 if (FUNC_4(VAR_6, FUNC_3(VAR_3, VAR_1)

    | FUNC_2(VAR_4, VAR_7)

    | FUNC_1(VAR_2, 0))) {

  FUNC_0("I2Cread: error handshake I2Cread  a\n");
  return 0;
 }

 if (FUNC_4(VAR_6, FUNC_3(VAR_3, VAR_0)





    |FUNC_2(VAR_4, 0)




    |FUNC_1(VAR_2, 0))) {


  FUNC_0("I2Cread: error handshake I2Cread b\n");
  return 0;
 }

 VAR_8 = (uint8_t) (FUNC_5(VAR_5) >> 16);
 return VAR_8;
}
