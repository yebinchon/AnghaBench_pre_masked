
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecc_event {scalar_t__ count; } ;
typedef int spl_t ;
typedef int kern_return_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ecc_event const*,int *,int) ;
 int VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

kern_return_t
FUNC_6(const struct ecc_event *VAR_11)
{
 spl_t VAR_12;

 if (VAR_11->count > VAR_1) {
  FUNC_3("Count of %u on ecc event is too large.", (unsigned)VAR_11->count);
 }

 VAR_12 = FUNC_4();
 FUNC_1(&VAR_8);

 VAR_5++;

 if (VAR_9 == VAR_10 && !VAR_7) {
  FUNC_2(&VAR_8);
  FUNC_5(VAR_12);
  return VAR_3;
 }

 FUNC_0(VAR_11, &VAR_6[VAR_10], sizeof(*VAR_11));
 VAR_10++;
 VAR_10 %= VAR_0;
 VAR_7 = VAR_2;

 FUNC_2(&VAR_8);
 FUNC_5(VAR_12);

 return VAR_4;
}
