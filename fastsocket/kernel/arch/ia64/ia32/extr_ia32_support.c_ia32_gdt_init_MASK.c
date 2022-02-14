
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 () ;

void
FUNC_5 (void)
{
 int VAR_5 = FUNC_4();

 VAR_4[VAR_5] = FUNC_0(VAR_0);
 if (!VAR_4[VAR_5])
  FUNC_3("failed to allocate ia32_shared_page[%d]\n", VAR_5);

 VAR_2[VAR_5] = FUNC_2(VAR_4[VAR_5]);


 FUNC_1(VAR_2[VAR_5], VAR_3, VAR_1);
}
