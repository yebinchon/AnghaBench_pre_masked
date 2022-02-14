
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int bitstr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int,int ,int) ;
 int FUNC_4 (int) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ,int ) ;

void
FUNC_9(void)
{
 FUNC_0(VAR_4 == ((void*)0));
 FUNC_0(VAR_5 == ((void*)0));

 FUNC_1(VAR_0 >= 512 && VAR_0 <= 32768);

 VAR_9 = FUNC_7();
 VAR_8 = FUNC_6("ipid", VAR_9);
 VAR_7 = FUNC_5();
 FUNC_8(&VAR_6, VAR_8, VAR_7);

 VAR_4 = (uint16_t *)FUNC_3(VAR_0 * sizeof (uint16_t),
     VAR_1, VAR_2 | VAR_3);
 VAR_5 = (bitstr_t *)FUNC_3(FUNC_4(65536), VAR_1,
     VAR_2 | VAR_3);
 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {

  if (VAR_4 != ((void*)0)) {
   FUNC_2(VAR_4, VAR_1);
   VAR_4 = ((void*)0);
  }
  if (VAR_5 != ((void*)0)) {
   FUNC_2(VAR_5, VAR_1);
   VAR_5 = ((void*)0);
  }
 }
}
