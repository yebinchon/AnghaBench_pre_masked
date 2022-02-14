
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_table {void (* event_fn ) (void*) ;void* event_context; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct dm_table *VAR_1,
        void (*VAR_2)(void *), void *VAR_3)
{
 FUNC_0(&VAR_0);
 VAR_1->event_fn = VAR_2;
 VAR_1->event_context = VAR_3;
 FUNC_1(&VAR_0);
}
