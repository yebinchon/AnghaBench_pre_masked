
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {int resolution; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline uint16_t FUNC_0(const struct comedi_device *VAR_1,
         uint16_t VAR_2)
{
 VAR_2 += 1 << (VAR_0->resolution - 1);
 return VAR_2;
}
