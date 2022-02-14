
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cpu_hw_events {unsigned long** amasks; unsigned long** avalues; int ** alternatives; } ;
struct TYPE_2__ {unsigned long add_fields; unsigned long test_adder; int n_counter; int (* get_alternatives ) (int ,unsigned int,int *) ;scalar_t__ (* get_constraint ) (int ,unsigned long*,unsigned long*) ;int (* limited_pmc_event ) (int ) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int,int *) ;
 scalar_t__ FUNC_2 (int ,unsigned long*,unsigned long*) ;
 int FUNC_3 (int ,unsigned int,int *) ;
 scalar_t__ FUNC_4 (int ,unsigned long*,unsigned long*) ;

__attribute__((used)) static int FUNC_5(struct cpu_hw_events *VAR_3,
       u64 VAR_4[], unsigned int VAR_5[],
       int VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9;
 unsigned long VAR_10[VAR_0], VAR_11[VAR_0];
 int VAR_12[VAR_0], VAR_13[VAR_0];
 int VAR_14, VAR_15;
 unsigned long VAR_16 = VAR_2->add_fields;
 unsigned long VAR_17 = VAR_2->test_adder;

 if (VAR_6 > VAR_2->n_counter)
  return -1;


 for (VAR_14 = 0; VAR_14 < VAR_6; ++VAR_14) {
  if ((VAR_5[VAR_14] & VAR_1)
      && !VAR_2->limited_pmc_event(VAR_4[VAR_14])) {
   VAR_2->get_alternatives(VAR_4[VAR_14], VAR_5[VAR_14],
            VAR_3->alternatives[VAR_14]);
   VAR_4[VAR_14] = VAR_3->alternatives[VAR_14][0];
  }
  if (VAR_2->get_constraint(VAR_4[VAR_14], &VAR_3->amasks[VAR_14][0],
      &VAR_3->avalues[VAR_14][0]))
   return -1;
 }
 VAR_8 = VAR_7 = 0;
 for (VAR_14 = 0; VAR_14 < VAR_6; ++VAR_14) {
  VAR_9 = (VAR_8 | VAR_3->avalues[VAR_14][0]) +
   (VAR_8 & VAR_3->avalues[VAR_14][0] & VAR_16);
  if ((((VAR_9 + VAR_17) ^ VAR_8) & VAR_7) != 0 ||
      (((VAR_9 + VAR_17) ^ VAR_3->avalues[VAR_14][0]) &
       VAR_3->amasks[VAR_14][0]) != 0)
   break;
  VAR_8 = VAR_9;
  VAR_7 |= VAR_3->amasks[VAR_14][0];
 }
 if (VAR_14 == VAR_6)
  return 0;


 if (!VAR_2->get_alternatives)
  return -1;
 for (VAR_14 = 0; VAR_14 < VAR_6; ++VAR_14) {
  VAR_13[VAR_14] = 0;
  VAR_12[VAR_14] = VAR_2->get_alternatives(VAR_4[VAR_14], VAR_5[VAR_14],
        VAR_3->alternatives[VAR_14]);
  for (VAR_15 = 1; VAR_15 < VAR_12[VAR_14]; ++VAR_15)
   VAR_2->get_constraint(VAR_3->alternatives[VAR_14][VAR_15],
          &VAR_3->amasks[VAR_14][VAR_15],
          &VAR_3->avalues[VAR_14][VAR_15]);
 }


 VAR_14 = 0;
 VAR_15 = -1;
 VAR_8 = VAR_7 = VAR_9 = 0;
 while (VAR_14 < VAR_6) {
  if (VAR_15 >= 0) {

   VAR_8 = VAR_11[VAR_14];
   VAR_7 = VAR_10[VAR_14];
   VAR_15 = VAR_13[VAR_14];
  }




  while (++VAR_15 < VAR_12[VAR_14]) {
   VAR_9 = (VAR_8 | VAR_3->avalues[VAR_14][VAR_15]) +
    (VAR_8 & VAR_3->avalues[VAR_14][VAR_15] & VAR_16);
   if ((((VAR_9 + VAR_17) ^ VAR_8) & VAR_7) == 0 &&
       (((VAR_9 + VAR_17) ^ VAR_3->avalues[VAR_14][VAR_15])
        & VAR_3->amasks[VAR_14][VAR_15]) == 0)
    break;
  }
  if (VAR_15 >= VAR_12[VAR_14]) {





   if (--VAR_14 < 0)
    return -1;
  } else {






   VAR_13[VAR_14] = VAR_15;
   VAR_11[VAR_14] = VAR_8;
   VAR_10[VAR_14] = VAR_7;
   VAR_8 = VAR_9;
   VAR_7 |= VAR_3->amasks[VAR_14][VAR_15];
   ++VAR_14;
   VAR_15 = -1;
  }
 }


 for (VAR_14 = 0; VAR_14 < VAR_6; ++VAR_14)
  VAR_4[VAR_14] = VAR_3->alternatives[VAR_14][VAR_13[VAR_14]];
 return 0;
}
