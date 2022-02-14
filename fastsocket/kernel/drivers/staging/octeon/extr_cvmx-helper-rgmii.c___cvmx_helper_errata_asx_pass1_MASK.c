
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(int VAR_0, int VAR_1,
       int VAR_2)
{

 if (VAR_2 >= 325000000 && VAR_2 < 375000000)
  FUNC_2(FUNC_0(VAR_1, VAR_0), 12);
 else if (VAR_2 >= 375000000 && VAR_2 < 437000000)
  FUNC_2(FUNC_0(VAR_1, VAR_0), 11);
 else if (VAR_2 >= 437000000 && VAR_2 < 550000000)
  FUNC_2(FUNC_0(VAR_1, VAR_0), 10);
 else if (VAR_2 >= 550000000 && VAR_2 < 687000000)
  FUNC_2(FUNC_0(VAR_1, VAR_0), 9);
 else
  FUNC_1("Illegal clock frequency (%d). "
   "CVMX_ASXX_TX_HI_WATERX not set\n", VAR_2);
 return 0;
}
