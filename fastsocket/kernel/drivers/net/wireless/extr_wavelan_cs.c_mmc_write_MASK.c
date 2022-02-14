
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef scalar_t__ u_char ;


 int FUNC_0 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(u_long VAR_0,
   u_char VAR_1,
   u_char * VAR_2,
   int VAR_3)
{
  VAR_1 += VAR_3;
  VAR_2 += VAR_3;

  while(VAR_3-- > 0 )
    FUNC_0(VAR_0, --VAR_1, *(--VAR_2));
}
