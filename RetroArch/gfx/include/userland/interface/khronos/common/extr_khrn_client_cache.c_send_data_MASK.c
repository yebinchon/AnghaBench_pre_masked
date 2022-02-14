
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CLIENT_THREAD_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ,int ,int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(CLIENT_THREAD_STATE_T *VAR_4, int VAR_5, const void *VAR_6, int VAR_7)
{
   int VAR_8 = 0;

   while (VAR_7 > 0) {
      int VAR_9 = FUNC_3(VAR_7, VAR_2-VAR_0-12-8);

      FUNC_0(VAR_3,
                        VAR_4,
                        VAR_1,
                        FUNC_2(VAR_5 + VAR_8),
                        FUNC_1(VAR_9),
                        (char *)VAR_6 + VAR_8,
                        VAR_9);

      VAR_8 += VAR_9;
      VAR_7 -= VAR_9;
   }
}
