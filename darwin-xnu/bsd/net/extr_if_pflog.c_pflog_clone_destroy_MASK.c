
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;


 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_0)
{
 int VAR_1 = 0;

 if ((VAR_1 = FUNC_1(VAR_0)) != 0)
  goto done;

 (void)FUNC_0(VAR_0);
done:
 return (VAR_1);
}
