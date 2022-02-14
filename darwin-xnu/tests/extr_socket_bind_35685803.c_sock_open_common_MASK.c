
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int,int ) ;

__attribute__((used)) static int
FUNC_2(int VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2, 0);
 VAR_0;
 FUNC_0(VAR_3, "socket(%d, %d, 0)", VAR_1, VAR_2);
 return (VAR_3);
}
