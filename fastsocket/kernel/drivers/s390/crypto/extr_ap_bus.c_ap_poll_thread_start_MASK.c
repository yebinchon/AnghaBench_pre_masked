
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 () ;
 int * FUNC_3 (int ,int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_4;

 if (FUNC_2() || VAR_3)
  return 0;
 FUNC_4(&VAR_2);
 if (!VAR_0) {
  VAR_0 = FUNC_3(VAR_1, ((void*)0), "appoll");
  VAR_4 = FUNC_0(VAR_0) ? FUNC_1(VAR_0) : 0;
  if (VAR_4)
   VAR_0 = ((void*)0);
 }
 else
  VAR_4 = 0;
 FUNC_5(&VAR_2);
 return VAR_4;
}
