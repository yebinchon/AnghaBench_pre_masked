
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static struct kmem_cache *FUNC_3(size_t VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2) - 10;

 FUNC_0(VAR_3 >= VAR_0);
 if (FUNC_2(VAR_3 < 0))
  VAR_3 = 0;
 FUNC_0(VAR_1[VAR_3] == 0);
 return VAR_1[VAR_3];
}
