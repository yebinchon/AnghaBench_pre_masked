
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * proc_t ;
struct TYPE_3__ {int list; } ;
typedef TYPE_1__ memstat_bucket_t ;
typedef scalar_t__ boolean_t ;


 unsigned int VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static proc_t FUNC_2(unsigned int *VAR_3, proc_t VAR_4, boolean_t VAR_5) {
 memstat_bucket_t *VAR_6;
 proc_t VAR_7;

 if (!VAR_4 || ((*VAR_3) >= VAR_0)) {
  return ((void*)0);
 }

 VAR_7 = FUNC_1(VAR_4, VAR_2);
 while (!VAR_7 && VAR_5 && (++(*VAR_3) < VAR_0)) {
  VAR_6 = &VAR_1[*VAR_3];
  VAR_7 = FUNC_0(&VAR_6->list);
 }

 return VAR_7;
}
