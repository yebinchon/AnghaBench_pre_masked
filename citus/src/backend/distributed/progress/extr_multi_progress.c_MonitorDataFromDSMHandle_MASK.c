
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dsm_segment ;
typedef int dsm_handle ;
struct TYPE_3__ {void* steps; } ;
typedef TYPE_1__ ProgressMonitorData ;


 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

ProgressMonitorData *
FUNC_3(dsm_handle VAR_0, dsm_segment **VAR_1)
{
 dsm_segment *VAR_2 = FUNC_1(VAR_0);
 ProgressMonitorData *VAR_3 = ((void*)0);

 if (VAR_2 == ((void*)0))
 {
  VAR_2 = FUNC_0(VAR_0);
 }

 if (VAR_2 != ((void*)0))
 {
  VAR_3 = (ProgressMonitorData *) FUNC_2(VAR_2);
  VAR_3->steps = (void *) (VAR_3 + 1);
  *VAR_1 = VAR_2;
 }

 return VAR_3;
}
