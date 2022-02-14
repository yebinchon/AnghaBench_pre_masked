
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct mt_cpu {scalar_t__* mtc_snaps; } ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,int ,unsigned int,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;

uint64_t
FUNC_6(struct mt_cpu *VAR_3, unsigned int VAR_4)
{
 uint64_t VAR_5 = FUNC_4(VAR_4);
 if (VAR_5 < VAR_3->mtc_snaps[VAR_4]) {
  if (VAR_1) {
   FUNC_3("monotonic: cpu %d: thread %#llx: "
     "retrograde counter %u value: %llu, last read = %llu\n",
     FUNC_1(), FUNC_5(FUNC_2()), VAR_4, VAR_5,
     VAR_3->mtc_snaps[VAR_4]);
  }
  (void)FUNC_0(&VAR_2, 1,
    VAR_0);
  VAR_3->mtc_snaps[VAR_4] = VAR_5;
  return 0;
 }

 uint64_t VAR_6 = VAR_5 - VAR_3->mtc_snaps[VAR_4];
 VAR_3->mtc_snaps[VAR_4] = VAR_5;

 return VAR_6;
}
