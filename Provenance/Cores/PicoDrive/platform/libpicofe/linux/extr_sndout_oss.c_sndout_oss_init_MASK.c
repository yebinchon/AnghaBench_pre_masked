
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;

int FUNC_3(void)
{
 if (VAR_1 >= 0) FUNC_0(VAR_1);
   VAR_1 = FUNC_1("/dev/mixer", VAR_0);
 if (VAR_1 == -1)
 {
  FUNC_2("open(\"/dev/mixer\")");
 }

 return 0;
}
