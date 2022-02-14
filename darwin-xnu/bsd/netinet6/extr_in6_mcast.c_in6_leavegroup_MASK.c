
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_multi_mship {int * i6mm_maddr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct in6_multi_mship*) ;

int
FUNC_3(struct in6_multi_mship *VAR_0)
{
 if (VAR_0->i6mm_maddr != ((void*)0)) {
  FUNC_1(VAR_0->i6mm_maddr, ((void*)0));
  FUNC_0(VAR_0->i6mm_maddr);
  VAR_0->i6mm_maddr = ((void*)0);
 }
 FUNC_2(VAR_0);
 return 0;
}
