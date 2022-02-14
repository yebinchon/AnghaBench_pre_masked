
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int,int ) ;
 int * VAR_2 ;

int
FUNC_2(void)
{
 VAR_2 = FUNC_1(sizeof(*VAR_2),
                                  VAR_1);
 if (VAR_2 == ((void*)0)) {
  return VAR_0;
 }
 FUNC_0(VAR_2, sizeof(*VAR_2));

 return 0;
}
