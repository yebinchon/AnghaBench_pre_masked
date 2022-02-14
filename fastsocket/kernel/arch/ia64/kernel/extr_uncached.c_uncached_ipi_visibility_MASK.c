
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uncached_pool {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_3)
{
 int VAR_4;
 struct uncached_pool *VAR_5 = (struct uncached_pool *)VAR_3;

 VAR_4 = FUNC_1(VAR_2);
 if ((VAR_4 != VAR_0) &&
     (VAR_4 != VAR_1))
  FUNC_0(&VAR_5->status);
}
