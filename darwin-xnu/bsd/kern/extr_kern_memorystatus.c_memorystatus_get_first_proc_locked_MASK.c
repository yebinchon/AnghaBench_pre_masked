
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
 TYPE_1__* VAR_1 ;

__attribute__((used)) static proc_t FUNC_1(unsigned int *VAR_2, boolean_t VAR_3) {
 memstat_bucket_t *VAR_4;
 proc_t VAR_5;

 if ((*VAR_2) >= VAR_0) {
  return ((void*)0);
 }

 VAR_4 = &VAR_1[*VAR_2];
 VAR_5 = FUNC_0(&VAR_4->list);
 if (!VAR_5 && VAR_3) {
  while (!VAR_5 && (++(*VAR_2) < VAR_0)) {
   VAR_4 = &VAR_1[*VAR_2];
   VAR_5 = FUNC_0(&VAR_4->list);
  }
 }

 return VAR_5;
}
