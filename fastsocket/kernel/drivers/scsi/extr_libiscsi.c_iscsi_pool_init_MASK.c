
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_pool {int max; void** pool; int * queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,void*,int) ;
 int FUNC_2 (struct iscsi_pool*) ;
 int * FUNC_3 (void*,int,int ,int *) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (void**,void**,int) ;
 int FUNC_6 (struct iscsi_pool*,int ,int) ;

int
FUNC_7(struct iscsi_pool *VAR_2, int VAR_3, void ***VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = 1;

 FUNC_6(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->max = VAR_3;



 if (VAR_4)
  VAR_7++;
 VAR_2->pool = FUNC_4(VAR_7 * VAR_3 * sizeof(void*), VAR_1);
 if (VAR_2->pool == ((void*)0))
  return -VAR_0;

 VAR_2->queue = FUNC_3((void*)VAR_2->pool, VAR_3 * sizeof(void*),
         VAR_1, ((void*)0));
 if (FUNC_0(VAR_2->queue)) {
  VAR_2->queue = ((void*)0);
  goto enomem;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_2->pool[VAR_6] = FUNC_4(VAR_5, VAR_1);
  if (VAR_2->pool[VAR_6] == ((void*)0)) {
   VAR_2->max = VAR_6;
   goto enomem;
  }
  FUNC_1(VAR_2->queue, (void*)&VAR_2->pool[VAR_6], sizeof(void*));
 }

 if (VAR_4) {
  *VAR_4 = VAR_2->pool + VAR_3;
  FUNC_5(*VAR_4, VAR_2->pool, VAR_3 * sizeof(void *));
 }

 return 0;

enomem:
 FUNC_2(VAR_2);
 return -VAR_0;
}
