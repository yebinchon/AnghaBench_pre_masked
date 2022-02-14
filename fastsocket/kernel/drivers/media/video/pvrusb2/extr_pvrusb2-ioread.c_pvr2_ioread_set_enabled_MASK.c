
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_ioread {int mutex; int enabled; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pvr2_ioread*) ;
 int FUNC_3 (struct pvr2_ioread*) ;

int FUNC_4(struct pvr2_ioread *VAR_0,int VAR_1)
{
 int VAR_2 = 0;
 if ((!VAR_1) == (!(VAR_0->enabled))) return VAR_2;

 FUNC_0(&VAR_0->mutex); do {
  if (VAR_1) {
   VAR_2 = FUNC_2(VAR_0);
  } else {
   FUNC_3(VAR_0);
  }
 } while (0); FUNC_1(&VAR_0->mutex);
 return VAR_2;
}
