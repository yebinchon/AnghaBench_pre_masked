
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 () ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,unsigned long long) ;

void
FUNC_7(void)
{
 unsigned int VAR_11;





 if (!VAR_9) {
  FUNC_3();
  VAR_9 = VAR_3;
  FUNC_5(&VAR_10, 0);
 }

 if (VAR_4) {


  if (VAR_6)
   FUNC_6(VAR_1, VAR_2);

  switch (VAR_8) {
  case 0x06:

   for (VAR_11 = 1; VAR_11 < VAR_7; VAR_11++)
    FUNC_6(FUNC_0(VAR_11),0xFFFFFFFFFFFFFFFFULL);


   for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
    FUNC_6(FUNC_1(VAR_11), 0ULL);
   break;
  case 0x0F:

   for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
    FUNC_6(FUNC_0(VAR_11),0xFFFFFFFFFFFFFFFFULL);


   for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
    FUNC_6(FUNC_1(VAR_11), 0ULL);
   break;
  }
 }


 if (VAR_5) {
  FUNC_4(FUNC_2()|VAR_0);
 }
}
