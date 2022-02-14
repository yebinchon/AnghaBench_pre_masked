
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mptopt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mptopt*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct mptopt* FUNC_1 (int ) ;
 struct mptopt* FUNC_2 (int ) ;

struct mptopt *
FUNC_3(int VAR_3)
{
 struct mptopt *VAR_4;

 VAR_4 = (VAR_3 == VAR_0) ? FUNC_1(VAR_1) :
     FUNC_2(VAR_1);
 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_4, VAR_2);
 }

 return (VAR_4);
}
