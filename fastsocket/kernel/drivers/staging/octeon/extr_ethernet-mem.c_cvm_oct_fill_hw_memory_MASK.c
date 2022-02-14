
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,int,int ) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (char*,int,int) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(int VAR_3, int VAR_4, int VAR_5)
{
 char *VAR_6;
 int VAR_7 = VAR_5;

 if (VAR_2) {
  extern uint64_t VAR_8;

  VAR_6 =
      FUNC_0(VAR_5 * VAR_4, 128,
          VAR_8,
          VAR_8 +
          (VAR_0 << 20) -
          1);
  if (VAR_6 == ((void*)0))
   FUNC_3("Unable to allocate %u bytes for FPA pool %d\n",
         VAR_5 * VAR_4, VAR_3);

  FUNC_4("Memory range %p - %p reserved for "
     "hardware\n", VAR_6,
     VAR_6 + VAR_5 * VAR_4 - 1);

  while (VAR_7) {
   FUNC_1(VAR_6, VAR_3, 0);
   VAR_6 += VAR_4;
   VAR_7--;
  }
 } else {
  while (VAR_7) {

   VAR_6 = FUNC_2(VAR_4 + 127, VAR_1);
   if (FUNC_6(VAR_6 == ((void*)0))) {
    FUNC_5("Unable to allocate %u bytes for "
        "FPA pool %d\n",
         VAR_5 * VAR_4, VAR_3);
    break;
   }
   VAR_6 = (char *)(((unsigned long)VAR_6 + 127) & -128);
   FUNC_1(VAR_6, VAR_3, 0);
   VAR_7--;
  }
 }
 return VAR_5 - VAR_7;
}
