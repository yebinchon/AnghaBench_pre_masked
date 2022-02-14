
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dev_data {int wait; int epfiles; int lock; int count; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 struct dev_data* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct dev_data *FUNC_5 (void)
{
 struct dev_data *VAR_2;

 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);
 VAR_2->state = VAR_1;
 FUNC_1 (&VAR_2->count, 1);
 FUNC_4 (&VAR_2->lock);
 FUNC_0 (&VAR_2->epfiles);
 FUNC_2 (&VAR_2->wait);
 return VAR_2;
}
