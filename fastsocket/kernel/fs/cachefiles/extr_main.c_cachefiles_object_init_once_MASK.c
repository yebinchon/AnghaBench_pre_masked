
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cachefiles_object {int work_lock; } ;


 int FUNC_0 (struct cachefiles_object*,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct cachefiles_object *VAR_1 = VAR_0;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 FUNC_1(&VAR_1->work_lock);
}
