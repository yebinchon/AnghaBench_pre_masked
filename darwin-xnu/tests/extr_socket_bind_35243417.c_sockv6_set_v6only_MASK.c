
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int on ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ,int*,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_3)
{
 int VAR_4 = 1;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_0, VAR_1, &VAR_4, sizeof(VAR_4));
 VAR_2;
 FUNC_0(VAR_5, "setsockopt(%d, IPV6_ONLY)", VAR_3);
}
