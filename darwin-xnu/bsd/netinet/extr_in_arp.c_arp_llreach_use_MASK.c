
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llinfo_arp {int la_lastused; int * la_llreach; } ;


 int FUNC_0 () ;

__attribute__((used)) static __inline void
FUNC_1(struct llinfo_arp *VAR_0)
{
 if (VAR_0->la_llreach != ((void*)0))
  VAR_0->la_lastused = FUNC_0();
}
