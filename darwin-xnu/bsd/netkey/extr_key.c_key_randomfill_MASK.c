
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int ;


 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (void*,size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (void*,int ) ;

void
FUNC_5(
      void *VAR_0,
      size_t VAR_1)
{



 size_t VAR_2;
 u_int32_t VAR_3;
 static int VAR_4 = 1;

 VAR_2 = 0;
 VAR_2 = (size_t)FUNC_4(VAR_0, (u_int)VAR_1);

 while (VAR_2 < VAR_1) {
  VAR_3 = FUNC_3();
  FUNC_0(&VAR_3, (u_int8_t *)VAR_0 + VAR_2,
     VAR_1 - VAR_2 < sizeof(VAR_3) ? VAR_1 - VAR_2 : sizeof(VAR_3));
  VAR_2 += sizeof(VAR_3);

  if (VAR_4) {
   FUNC_2("WARNING: pseudo-random number generator "
       "used for IPsec processing\n");
   VAR_4 = 0;
  }
 }

}
