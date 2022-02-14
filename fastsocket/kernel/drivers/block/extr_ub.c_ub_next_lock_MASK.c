
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spinlock_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static spinlock_t *FUNC_2(void)
{
 unsigned long VAR_4;
 spinlock_t *VAR_5;

 FUNC_0(&VAR_1, VAR_4);
 VAR_5 = &VAR_3[VAR_2];
 VAR_2 = (VAR_2 + 1) % VAR_0;
 FUNC_1(&VAR_1, VAR_4);
 return VAR_5;
}
