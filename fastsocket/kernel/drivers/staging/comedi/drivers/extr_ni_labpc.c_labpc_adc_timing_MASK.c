
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct comedi_cmd {int flags; } ;
struct TYPE_2__ {int divisor_b0; unsigned int divisor_a0; unsigned int divisor_b1; } ;


 int const VAR_0 ;

 int VAR_1 ;


 TYPE_1__* VAR_2 ;
 int FUNC_0 (int const,unsigned int*,int const*,unsigned int*,int) ;
 int FUNC_1 (struct comedi_cmd*) ;
 int FUNC_2 (struct comedi_cmd*) ;
 int FUNC_3 (struct comedi_cmd*,unsigned int) ;
 int FUNC_4 (struct comedi_cmd*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_3, struct comedi_cmd *VAR_4)
{
 const int VAR_5 = 0x10000;
 const int VAR_6 = 2;
 unsigned int VAR_7;


 if (FUNC_1(VAR_4) && FUNC_2(VAR_4)) {

  VAR_2->divisor_b0 = (FUNC_2(VAR_4) - 1) /
      (VAR_0 * VAR_5) + 1;
  if (VAR_2->divisor_b0 < VAR_6)
   VAR_2->divisor_b0 = VAR_6;
  if (VAR_2->divisor_b0 > VAR_5)
   VAR_2->divisor_b0 = VAR_5;

  VAR_7 = VAR_0 * VAR_2->divisor_b0;


  switch (VAR_4->flags & VAR_1) {
  default:
  case 129:
   VAR_2->divisor_a0 =
       (FUNC_1(VAR_4) +
        (VAR_7 / 2)) / VAR_7;
   VAR_2->divisor_b1 =
       (FUNC_2(VAR_4) +
        (VAR_7 / 2)) / VAR_7;
   break;
  case 128:
   VAR_2->divisor_a0 =
       (FUNC_1(VAR_4) + (VAR_7 -
            1)) / VAR_7;
   VAR_2->divisor_b1 =
       (FUNC_2(VAR_4) + (VAR_7 -
         1)) / VAR_7;
   break;
  case 130:
   VAR_2->divisor_a0 =
       FUNC_1(VAR_4) / VAR_7;
   VAR_2->divisor_b1 =
       FUNC_2(VAR_4) / VAR_7;
   break;
  }

  if (VAR_2->divisor_a0 < VAR_6)
   VAR_2->divisor_a0 = VAR_6;
  if (VAR_2->divisor_a0 > VAR_5)
   VAR_2->divisor_a0 = VAR_5;
  if (VAR_2->divisor_b1 < VAR_6)
   VAR_2->divisor_b1 = VAR_6;
  if (VAR_2->divisor_b1 > VAR_5)
   VAR_2->divisor_b1 = VAR_5;

  FUNC_3(VAR_4,
         VAR_7 * VAR_2->divisor_a0);
  FUNC_4(VAR_4,
      VAR_7 * VAR_2->divisor_b1);

 } else if (FUNC_2(VAR_4)) {
  unsigned int VAR_8;

  VAR_8 = FUNC_2(VAR_4);

  FUNC_0(VAR_0,
            &(VAR_2->divisor_b1),
            &(VAR_2->divisor_b0),
            &VAR_8,
            VAR_4->flags & VAR_1);
  FUNC_4(VAR_4, VAR_8);
 } else if (FUNC_1(VAR_4)) {
  unsigned int VAR_9;

  VAR_9 = FUNC_1(VAR_4);

  FUNC_0(VAR_0,
            &(VAR_2->divisor_a0),
            &(VAR_2->divisor_b0),
            &VAR_9,
            VAR_4->flags & VAR_1);
  FUNC_3(VAR_4, VAR_9);
 }
}
