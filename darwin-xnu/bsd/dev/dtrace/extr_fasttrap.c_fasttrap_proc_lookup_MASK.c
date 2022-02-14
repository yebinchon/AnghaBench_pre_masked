
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_7__ {scalar_t__ ftpc_pid; scalar_t__ ftpc_acount; scalar_t__ ftpc_rcount; struct TYPE_7__* ftpc_next; int ftpc_mtx; } ;
typedef TYPE_1__ fasttrap_proc_t ;
struct TYPE_8__ {int ftb_mtx; TYPE_1__* ftb_data; } ;
typedef TYPE_2__ fasttrap_bucket_t ;
struct TYPE_9__ {TYPE_2__* fth_table; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 int FUNC_3 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static fasttrap_proc_t *
FUNC_8(pid_t VAR_4)
{
 fasttrap_bucket_t *VAR_5;
 fasttrap_proc_t *VAR_6, *VAR_7;

 VAR_5 = &VAR_3.fth_table[FUNC_1(VAR_4)];
 FUNC_6(&VAR_5->ftb_mtx);

 for (VAR_6 = VAR_5->ftb_data; VAR_6 != ((void*)0); VAR_6 = VAR_6->ftpc_next) {
  if (VAR_6->ftpc_pid == VAR_4 && VAR_6->ftpc_acount != 0) {
   FUNC_6(&VAR_6->ftpc_mtx);
   FUNC_7(&VAR_5->ftb_mtx);
   VAR_6->ftpc_rcount++;
   FUNC_2(&VAR_6->ftpc_acount, 1);
   FUNC_0(VAR_6->ftpc_acount <= VAR_6->ftpc_rcount);
   FUNC_7(&VAR_6->ftpc_mtx);

   return (VAR_6);
  }
 }





 FUNC_7(&VAR_5->ftb_mtx);

 VAR_7 = FUNC_4(sizeof (fasttrap_proc_t), VAR_0);
 FUNC_0(VAR_7 != ((void*)0));
 VAR_7->ftpc_pid = VAR_4;
 VAR_7->ftpc_rcount = 1;
 VAR_7->ftpc_acount = 1;

 FUNC_6(&VAR_5->ftb_mtx);





 for (VAR_6 = VAR_5->ftb_data; VAR_6 != ((void*)0); VAR_6 = VAR_6->ftpc_next) {
  if (VAR_6->ftpc_pid == VAR_4 && VAR_6->ftpc_acount != 0) {
   FUNC_6(&VAR_6->ftpc_mtx);
   FUNC_7(&VAR_5->ftb_mtx);
   VAR_6->ftpc_rcount++;
   FUNC_2(&VAR_6->ftpc_acount, 1);
   FUNC_0(VAR_6->ftpc_acount <= VAR_6->ftpc_rcount);
   FUNC_7(&VAR_6->ftpc_mtx);

   FUNC_3(VAR_7, sizeof (fasttrap_proc_t));

   return (VAR_6);
  }
 }




 FUNC_5(&VAR_7->ftpc_mtx, VAR_2, VAR_1);

 VAR_7->ftpc_next = VAR_5->ftb_data;
 VAR_5->ftb_data = VAR_7;

 FUNC_7(&VAR_5->ftb_mtx);

 return (VAR_7);
}
