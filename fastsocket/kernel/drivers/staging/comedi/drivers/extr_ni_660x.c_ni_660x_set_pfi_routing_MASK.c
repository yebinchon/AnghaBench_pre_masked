
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint64_t ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int* pfi_output_selects; unsigned int pfi_direction_bits; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct comedi_device*,unsigned int,unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 TYPE_1__* FUNC_2 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_8, unsigned VAR_9,
       unsigned VAR_10)
{
 if (VAR_10 > VAR_4)
  return -VAR_0;
 if (VAR_10 == VAR_7)
  return -VAR_0;
 if (VAR_9 < VAR_3) {
  if (VAR_10 == VAR_5)
   return -VAR_0;
 } else if (VAR_9 > VAR_2) {
  if (VAR_10 == VAR_6)
   return -VAR_0;
 }
 FUNC_0(VAR_9 >= VAR_1);

 FUNC_2(VAR_8)->pfi_output_selects[VAR_9] = VAR_10;
 if (FUNC_2(VAR_8)->pfi_direction_bits & (((uint64_t) 1) << VAR_9))
  FUNC_1(VAR_8, VAR_9,
       FUNC_2(VAR_8)->
       pfi_output_selects[VAR_9]);
 return 0;
}
