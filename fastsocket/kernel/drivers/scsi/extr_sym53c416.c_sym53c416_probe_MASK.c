
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *,int*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(void)
{
 int *VAR_3 = VAR_2;
 int VAR_4[2];

 VAR_4[0] = 1;
 for(; *VAR_3; VAR_3++) {
  if (FUNC_1(*VAR_3, VAR_1, VAR_0)) {
   if (FUNC_3(*VAR_3)) {
    VAR_4[1] = *VAR_3;
    FUNC_2(((void*)0), VAR_4);
   }
   FUNC_0(*VAR_3, VAR_1);
  }
 }
}
