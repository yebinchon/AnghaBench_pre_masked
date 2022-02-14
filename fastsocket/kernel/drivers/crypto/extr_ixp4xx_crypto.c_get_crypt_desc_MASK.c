
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypt_ctl {scalar_t__ ctl_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct crypt_ctl* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct crypt_ctl *FUNC_4(void)
{
 int VAR_5;
 static int VAR_6 = 0;
 unsigned long VAR_7;

 FUNC_1(&VAR_4, VAR_7);

 if (FUNC_3(!VAR_3))
  FUNC_0();
 if (FUNC_3(!VAR_3)) {
  FUNC_2(&VAR_4, VAR_7);
  return ((void*)0);
 }
 VAR_5 = VAR_6;
 if (VAR_3[VAR_5].ctl_flags == VAR_0) {
  if (++VAR_6 >= VAR_2)
   VAR_6 = 0;
  VAR_3[VAR_5].ctl_flags = VAR_1;
  FUNC_2(&VAR_4, VAR_7);
  return VAR_3 +VAR_5;
 } else {
  FUNC_2(&VAR_4, VAR_7);
  return ((void*)0);
 }
}
