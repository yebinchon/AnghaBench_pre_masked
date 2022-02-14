
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecc_event {int dummy; } ;
typedef int spl_t ;
typedef int kern_return_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct ecc_event*,int) ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

kern_return_t
FUNC_6(struct ecc_event *VAR_9)
{
 spl_t VAR_10;

 VAR_10 = FUNC_4();
 FUNC_2(&VAR_6);

 if (VAR_5) {
  FUNC_0(VAR_8 == VAR_7);

  FUNC_3(&VAR_6);
  FUNC_5(VAR_10);
  return VAR_1;
 }

 FUNC_1(&VAR_4[VAR_7], VAR_9, sizeof(*VAR_9));
 VAR_7++;
 VAR_7 %= VAR_0;

 if (VAR_7 == VAR_8) {
  VAR_5 = VAR_3;
 }

 FUNC_3(&VAR_6);
 FUNC_5(VAR_10);

 return VAR_2;
}
