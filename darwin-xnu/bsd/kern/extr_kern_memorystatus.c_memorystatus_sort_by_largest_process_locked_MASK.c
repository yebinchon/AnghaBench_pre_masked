
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_1__* proc_t ;
struct TYPE_12__ {int list; } ;
typedef TYPE_2__ memstat_bucket_t ;
struct TYPE_11__ {int task; } ;


 unsigned int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 int FUNC_5 (int ,scalar_t__*,int *,int *) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_3)
{
 proc_t VAR_4 = ((void*)0), VAR_5 = ((void*)0), VAR_6 = ((void*)0);
 proc_t VAR_7 = ((void*)0), VAR_8 = ((void*)0);
 uint32_t VAR_9 = 0, VAR_10 = 0;
 memstat_bucket_t *VAR_11;

 if (VAR_3 >= VAR_0) {
  return;
 }

 VAR_11 = &VAR_1[VAR_3];

 VAR_4 = FUNC_0(&VAR_11->list);

 while (VAR_4) {
  FUNC_5(VAR_4->task, &VAR_9, ((void*)0), ((void*)0));
  VAR_10 = VAR_9;
  VAR_6 = VAR_4;
  VAR_8 = VAR_4;

  while ((VAR_7 = FUNC_3(VAR_4, VAR_2)) != ((void*)0)) {

   VAR_4=VAR_7;
   FUNC_5(VAR_4->task, &VAR_9, ((void*)0), ((void*)0));
   if (VAR_9 > VAR_10) {
    VAR_10 = VAR_9;
    VAR_6 = VAR_4;
   }
  }

  if (VAR_8 != VAR_6) {

   FUNC_4(&VAR_11->list, VAR_6, VAR_2);
   if (VAR_5 == ((void*)0)) {
    FUNC_2(&VAR_11->list, VAR_6, VAR_2);
   } else {
    FUNC_1(&VAR_11->list, VAR_5, VAR_6, VAR_2);
   }
   VAR_8 = VAR_6;
  }

  VAR_5 = VAR_6;

  VAR_4 = FUNC_3(VAR_6, VAR_2);
 }
}
