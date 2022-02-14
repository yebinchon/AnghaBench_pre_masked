
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,int *,int *) ;
 int FUNC_2 (char*,int,int *,int *,int ,int ,int ,int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(void)
{
 VAR_3 = FUNC_1("acerhdf-fan", ((void*)0),
       &VAR_1);

 if (FUNC_0(VAR_3))
  return -VAR_0;

 VAR_6 = FUNC_2("acerhdf", 1, ((void*)0),
           &VAR_2, 0, 0, 0,
           (VAR_5) ? VAR_4*1000 : 0);
 if (FUNC_0(VAR_6))
  return -VAR_0;

 return 0;
}
