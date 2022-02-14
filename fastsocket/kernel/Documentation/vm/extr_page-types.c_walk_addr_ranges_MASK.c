
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_8;

 VAR_3 = FUNC_1(VAR_1, VAR_0);

 if (!VAR_4)
  FUNC_0(0, VAR_2);

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  if (!VAR_6)
   FUNC_3(0, VAR_5[VAR_8], VAR_7[VAR_8]);
  else
   FUNC_4(VAR_5[VAR_8], VAR_7[VAR_8]);

 FUNC_2(VAR_3);
}
