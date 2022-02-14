
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_4;


 if ((VAR_4 = FUNC_1(VAR_1,
     VAR_0, VAR_3, ((void*)0))) != 0)
  FUNC_0("proto_register_plumber failed for AF_INET "
      "error=%d\n", VAR_4);

 if ((VAR_4 = FUNC_1(VAR_2,
     VAR_0, VAR_3, ((void*)0))) != 0)
  FUNC_0("proto_register_plumber failed for AF_INET6 "
      "error=%d\n", VAR_4);
}
