
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ layout; } ;


 unsigned short VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (struct comedi_device*) ;

__attribute__((used)) static inline unsigned short FUNC_1(struct comedi_device *VAR_3,
           int VAR_4)
{
 if ((FUNC_0(VAR_3)->layout == VAR_2 && !VAR_4) ||
     (FUNC_0(VAR_3)->layout == VAR_1 && VAR_4))
  return VAR_0;
 else
  return 0;
}
