
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_pageout_queue {scalar_t__ pgo_laundry; scalar_t__ pgo_throttled; scalar_t__ pgo_draining; } ;
typedef int event_t ;


 void* VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(
 struct vm_pageout_queue *VAR_5,
 int VAR_6)
{
       FUNC_0(&VAR_3, VAR_1);

       FUNC_1(VAR_4, VAR_6);

       VAR_5->pgo_laundry -= VAR_6;

       if (VAR_5->pgo_throttled == VAR_2) {
        VAR_5->pgo_throttled = VAR_0;
        FUNC_2((event_t) &VAR_5->pgo_laundry);
       }
       if (VAR_5->pgo_draining == VAR_2 && VAR_5->pgo_laundry == 0) {
        VAR_5->pgo_draining = VAR_0;
        FUNC_2((event_t) (&VAR_5->pgo_laundry+1));
       }
}
