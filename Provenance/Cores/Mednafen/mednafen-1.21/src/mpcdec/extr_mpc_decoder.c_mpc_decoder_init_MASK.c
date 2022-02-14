
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mpc_streaminfo ;
typedef int mpc_decoder ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

mpc_decoder * FUNC_4(mpc_streaminfo *VAR_1)
{
 mpc_decoder* VAR_2 = FUNC_1(sizeof(mpc_decoder));

 if (VAR_2 != 0) {
  FUNC_3(VAR_2);
  FUNC_2(VAR_2, VAR_1);
  FUNC_0(VAR_0);
 }

 return VAR_2;
}
