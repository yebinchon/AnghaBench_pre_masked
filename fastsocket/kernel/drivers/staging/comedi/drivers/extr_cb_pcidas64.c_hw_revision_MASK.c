
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ layout; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct comedi_device const*) ;

__attribute__((used)) static unsigned int FUNC_1(const struct comedi_device *VAR_1,
    uint16_t VAR_2)
{
 if (FUNC_0(VAR_1)->layout == VAR_0)
  return (VAR_2 >> 13) & 0x7;

 return (VAR_2 >> 12) & 0xf;
}
