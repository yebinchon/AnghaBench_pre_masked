
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int,scalar_t__*) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_3;

 VAR_1 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2[VAR_3] = 0;
  if (FUNC_0(VAR_3, &VAR_2[VAR_3]))
   VAR_1 |= 1 << VAR_3;
 }
}
