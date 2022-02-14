
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct n2rng_unit {int* control; } ;
struct n2rng {int num_units; int accum_cycles; struct n2rng_unit* units; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_0 (int*) ;
 int FUNC_1 (struct n2rng*,unsigned long,int,int ) ;

__attribute__((used)) static int FUNC_2(struct n2rng *VAR_8)
{
 int VAR_9, VAR_10;

 VAR_10 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_8->num_units; VAR_9++) {
  struct n2rng_unit *VAR_11 = &VAR_8->units[VAR_9];
  unsigned long VAR_12 = FUNC_0(&VAR_11->control[0]);
  int VAR_13;
  u64 VAR_14;

  VAR_14 = ((VAR_8->accum_cycles << VAR_7) |
   (2 << VAR_1) |
   VAR_5);






  for (VAR_13 = 0; VAR_13 < 3; VAR_13++)
   VAR_11->control[VAR_13] = VAR_14 |
    (VAR_13 << VAR_6) |
    (VAR_2 << VAR_13);

  VAR_11->control[3] = VAR_14 |
   (VAR_2 | VAR_3 | VAR_4);

  VAR_10 = FUNC_1(VAR_8, VAR_12, VAR_9,
        VAR_0);
  if (VAR_10)
   break;
 }

 return VAR_10;
}
