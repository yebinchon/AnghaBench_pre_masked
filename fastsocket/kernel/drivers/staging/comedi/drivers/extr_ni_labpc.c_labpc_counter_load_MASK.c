
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ memory_mapped_io; } ;


 int FUNC_0 (unsigned long,int ,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (void*,int ,unsigned int,unsigned int,unsigned int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline int FUNC_2(struct comedi_device *VAR_1,
         unsigned long VAR_2,
         unsigned int VAR_3,
         unsigned int VAR_4, unsigned int VAR_5)
{
 if (VAR_0->memory_mapped_io)
  return FUNC_1((void *)VAR_2, 0, VAR_3,
         VAR_4, VAR_5);
 else
  return FUNC_0(VAR_2, 0, VAR_3, VAR_4, VAR_5);
}
