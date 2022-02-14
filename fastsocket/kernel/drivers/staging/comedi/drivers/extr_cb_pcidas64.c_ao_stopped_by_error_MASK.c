
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct comedi_cmd {scalar_t__ stop_src; } ;
struct TYPE_2__ {scalar_t__ ao_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct comedi_device*) ;
 TYPE_1__* FUNC_1 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
          const struct comedi_cmd *VAR_3)
{
 if (VAR_3->stop_src == VAR_1)
  return 1;
 if (VAR_3->stop_src == VAR_0) {
  if (FUNC_1(VAR_2)->ao_count)
   return 1;
  if (FUNC_0(VAR_2) == 0)
   return 1;
 }
 return 0;
}
