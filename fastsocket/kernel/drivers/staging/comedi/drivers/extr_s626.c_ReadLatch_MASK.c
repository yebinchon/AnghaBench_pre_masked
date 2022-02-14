
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct enc_private {scalar_t__ MyLatchLsw; } ;
struct comedi_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct comedi_device*,scalar_t__) ;

__attribute__((used)) static uint32_t FUNC_1(struct comedi_device *VAR_0, struct enc_private *VAR_1)
{
 register uint32_t VAR_2;



 VAR_2 = (uint32_t) FUNC_0(VAR_0, VAR_1->MyLatchLsw);


 VAR_2 |= ((uint32_t) FUNC_0(VAR_0, VAR_1->MyLatchLsw + 2) << 16);




 return VAR_2;
}
