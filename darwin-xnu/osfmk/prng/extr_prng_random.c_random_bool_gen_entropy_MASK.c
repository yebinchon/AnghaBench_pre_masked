
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bool_gen {int* seed; int state; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct bool_gen * VAR_0, unsigned int * VAR_1, int VAR_2)
{
 FUNC_0(&VAR_0->lock);
 int VAR_3, VAR_4;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_0->seed[1] ^= (VAR_0->seed[1] << 5);
  VAR_0->seed[1] ^= (VAR_0->seed[1] >> 7);
  VAR_0->seed[1] ^= (VAR_0->seed[1] << 22);
  VAR_4 = VAR_0->seed[2] + VAR_0->seed[3] + VAR_0->state;
  VAR_0->seed[2] = VAR_0->seed[3];
  VAR_0->state = VAR_4 < 0;
  VAR_0->seed[3] = VAR_4 & 2147483647;
  VAR_0->seed[0] += 1411392427;
  VAR_1[VAR_3] = (VAR_0->seed[0] + VAR_0->seed[1] + VAR_0->seed[3]);
 }
 FUNC_1(&VAR_0->lock);
}
