
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {int n_chips; } ;


 TYPE_1__* FUNC_0 (struct comedi_device*) ;
 int VAR_0 ;

__attribute__((used)) static inline unsigned FUNC_1(struct comedi_device *VAR_1)
{
 return FUNC_0(VAR_1)->n_chips * VAR_0;
}
