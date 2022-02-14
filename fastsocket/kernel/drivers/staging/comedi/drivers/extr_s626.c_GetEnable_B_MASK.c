
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct enc_private {int MyCRB; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,int ) ;

__attribute__((used)) static uint16_t FUNC_1(struct comedi_device *VAR_1, struct enc_private *VAR_2)
{
 return (FUNC_0(VAR_1, VAR_2->MyCRB) >> VAR_0) & 1;
}
