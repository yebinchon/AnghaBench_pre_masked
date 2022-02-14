
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {int config_bits; } ;
struct TYPE_3__ {int* clock; int num_clocks; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

 int VAR_1 ;


 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4, unsigned int *VAR_5,
       int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;


 VAR_10 = 3;
 VAR_11 = 0;
 VAR_7 = VAR_3->clock[VAR_11] * (1 << VAR_10);
 VAR_12 = 0;
 VAR_13 = VAR_3->num_clocks - 1;
 VAR_8 = VAR_3->clock[VAR_13] * (1 << VAR_12);


 if (*VAR_5 < VAR_8)
  *VAR_5 = VAR_8;
 if (*VAR_5 > VAR_7)
  *VAR_5 = VAR_7;


 for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {

  for (VAR_15 = 0; VAR_15 < VAR_3->num_clocks; VAR_15++) {

   VAR_9 = VAR_3->clock[VAR_15] * (1 << VAR_14);

   if (VAR_9 < VAR_7 && VAR_9 >= *VAR_5) {
    VAR_10 = VAR_14;
    VAR_11 = VAR_15;
    VAR_7 = VAR_9;
   }
   if (VAR_9 > VAR_8 && VAR_9 <= *VAR_5) {
    VAR_12 = VAR_14;
    VAR_13 = VAR_15;
    VAR_8 = VAR_9;
   }
  }
 }
 VAR_6 &= VAR_1;
 switch (VAR_6) {
 case 129:
 default:

  if (VAR_7 - *VAR_5 < *VAR_5 - VAR_8) {
   *VAR_5 = VAR_7;
  } else {
   *VAR_5 = VAR_8;
  }
  break;
 case 128:
  *VAR_5 = VAR_7;
  break;
 case 130:
  *VAR_5 = VAR_8;
  break;
 }


 VAR_2->config_bits &= ~VAR_0;
 if (*VAR_5 == VAR_7) {
  VAR_2->config_bits |=
      FUNC_1(VAR_11) |
      FUNC_0(VAR_10);
 } else {
  VAR_2->config_bits |=
      FUNC_1(VAR_13) |
      FUNC_0(VAR_12);
 }

 return 0;
}
