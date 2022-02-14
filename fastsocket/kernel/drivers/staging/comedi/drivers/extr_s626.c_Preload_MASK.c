
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct enc_private {scalar_t__ MyLatchLsw; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (struct comedi_device*,int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0, struct enc_private *VAR_1,
      uint32_t VAR_2)
{
 FUNC_1("Preload: preload enter\n");
 FUNC_0(VAR_0, (uint16_t) (VAR_1->MyLatchLsw), (uint16_t) VAR_2);
 FUNC_1("Preload: preload step 1\n");
 FUNC_0(VAR_0, (uint16_t) (VAR_1->MyLatchLsw + 2),
    (uint16_t) (VAR_2 >> 16));
}
