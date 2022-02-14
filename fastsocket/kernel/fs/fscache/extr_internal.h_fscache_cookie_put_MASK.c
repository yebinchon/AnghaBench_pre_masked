
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_cookie {int usage; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct fscache_cookie*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct fscache_cookie *VAR_0)
{
 FUNC_0(FUNC_3(&VAR_0->usage) <= 0);
 if (FUNC_2(&VAR_0->usage))
  FUNC_1(VAR_0);
}
