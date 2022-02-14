
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mtrr_type ;
struct TYPE_2__ {int (* get ) (int,unsigned long*,unsigned long*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int FUNC_3 (char*,unsigned long,unsigned long) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int ,int ,int ,int) ;
 int FUNC_7 (int,unsigned long*,unsigned long*,int *) ;
 int FUNC_8 (int,unsigned long*,unsigned long*,int *) ;

int FUNC_9(int VAR_6, unsigned long VAR_7, unsigned long VAR_8)
{
 int VAR_9, VAR_10;
 mtrr_type VAR_11;
 unsigned long VAR_12, VAR_13;
 int VAR_14 = -VAR_0;

 if (!VAR_2)
  return -VAR_1;

 VAR_10 = VAR_5;

 FUNC_0();
 FUNC_1(&VAR_3);
 if (VAR_6 < 0) {

  for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9) {
   VAR_2->get(VAR_9, &VAR_12, &VAR_13, &VAR_11);
   if (VAR_12 == VAR_7 && VAR_13 == VAR_8) {
    VAR_6 = VAR_9;
    break;
   }
  }
  if (VAR_6 < 0) {
   FUNC_3("mtrr: no MTRR for %lx000,%lx000 found\n",
     VAR_7, VAR_8);
   goto out;
  }
 }
 if (VAR_6 >= VAR_10) {
  FUNC_4("mtrr: register: %d too big\n", VAR_6);
  goto out;
 }
 VAR_2->get(VAR_6, &VAR_12, &VAR_13, &VAR_11);
 if (VAR_13 < 1) {
  FUNC_4("mtrr: MTRR %d not used\n", VAR_6);
  goto out;
 }
 if (VAR_4[VAR_6] < 1) {
  FUNC_4("mtrr: reg: %d has count=0\n", VAR_6);
  goto out;
 }
 if (--VAR_4[VAR_6] < 1)
  FUNC_6(VAR_6, 0, 0, 0, 0);
 VAR_14 = VAR_6;
 out:
 FUNC_2(&VAR_3);
 FUNC_5();
 return VAR_14;
}
