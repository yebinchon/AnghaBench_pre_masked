
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llinfo_nd6 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct llinfo_nd6*,int) ;
 int VAR_1 ;
 struct llinfo_nd6* FUNC_1 (int ) ;
 struct llinfo_nd6* FUNC_2 (int ) ;

__attribute__((used)) static struct llinfo_nd6 *
FUNC_3(int VAR_2)
{
 struct llinfo_nd6 *VAR_3;

 VAR_3 = (VAR_2 == VAR_0) ? FUNC_1(VAR_1) :
     FUNC_2(VAR_1);
 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_3, sizeof (*VAR_3));

 return (VAR_3);
}
