
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(int VAR_1, int VAR_2, int VAR_3)
{
 if (VAR_0) {
  FUNC_4("Warning: 32 shared memory is not freeable\n");
 } else {
  char *VAR_4;
  do {
   VAR_4 = FUNC_0(VAR_1);
   if (VAR_4) {
    VAR_3--;
    FUNC_2(FUNC_3(FUNC_1(VAR_4)));
   }
  } while (VAR_4);

  if (VAR_3 < 0)
   FUNC_4("Freeing of pool %u had too many "
       "buffers (%d)\n",
          VAR_1, VAR_3);
  else if (VAR_3 > 0)
   FUNC_4("Warning: Freeing of pool %u is "
    "missing %d buffers\n",
        VAR_1, VAR_3);
 }
}
