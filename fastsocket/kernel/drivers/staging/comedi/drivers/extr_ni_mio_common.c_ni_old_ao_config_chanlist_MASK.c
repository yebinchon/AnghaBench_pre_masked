
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int aobits; scalar_t__ ao_unipolar; } ;
struct TYPE_3__ {unsigned int* ao_conf; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int VAR_6 ;
 unsigned int FUNC_3 (unsigned int) ;
 TYPE_2__ VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_9,
         struct comedi_subdevice *VAR_10,
         unsigned int VAR_11[],
         unsigned int VAR_12)
{
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 int VAR_16;
 int VAR_17 = 0;

 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++) {
  VAR_14 = FUNC_2(VAR_11[VAR_16]);
  VAR_13 = FUNC_3(VAR_11[VAR_16]);
  VAR_15 = FUNC_0(VAR_14);

  if (VAR_7.ao_unipolar) {
   if ((VAR_13 & 1) == 0) {
    VAR_15 |= VAR_0;
    VAR_17 = (1 << (VAR_7.aobits - 1));
   } else {
    VAR_17 = 0;
   }
   if (VAR_13 & 2)
    VAR_15 |= VAR_3;
  } else {
   VAR_15 |= VAR_0;
   VAR_17 = (1 << (VAR_7.aobits - 1));
  }


  if (VAR_11[VAR_16] & VAR_6)
   VAR_15 |= VAR_2;



  VAR_15 |= (FUNC_1(VAR_11[VAR_16]) ==
    VAR_5) ? VAR_4 : 0;

  FUNC_4(VAR_15, VAR_1);
  VAR_8->ao_conf[VAR_14] = VAR_15;
 }
 return VAR_17;
}
