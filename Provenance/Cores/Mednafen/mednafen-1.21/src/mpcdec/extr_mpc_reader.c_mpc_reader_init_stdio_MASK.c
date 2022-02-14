
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_status ;
typedef int mpc_reader ;
typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (char const*,char*) ;
 int FUNC_1 (int *,int *) ;

mpc_status
FUNC_2(mpc_reader *VAR_1, const char *VAR_2)
{
 FILE * VAR_3 = FUNC_0(VAR_2, "rb");
 if (VAR_3 == ((void*)0)) return VAR_0;
 return FUNC_1(VAR_1,VAR_3);
}
