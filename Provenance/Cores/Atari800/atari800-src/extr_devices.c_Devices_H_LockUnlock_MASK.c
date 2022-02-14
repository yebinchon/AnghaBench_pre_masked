
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_4 ;
 int FUNC_4 (char*,int,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(int VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = 0;

 VAR_0;

 if (FUNC_0(VAR_4) == 0)
  return;
 {
  if (FUNC_3(VAR_6, VAR_7))
   VAR_8++;
  else
   VAR_9++;
 }

 if (VAR_5)
  FUNC_4("%d changed, %d failed",
         VAR_8, VAR_9);

 if (VAR_9 != 0 || VAR_8 == 0) {
  VAR_3 = 170;
  VAR_2;
 }
 else {
  VAR_3 = 1;
  VAR_1;
 }
}
