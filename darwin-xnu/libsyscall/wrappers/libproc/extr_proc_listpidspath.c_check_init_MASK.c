
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* fdOpenInfoRef ;
struct TYPE_5__ {int flags; int match_stat; scalar_t__ fds_size; scalar_t__ fds_count; int * fds; scalar_t__ thr_size; scalar_t__ thr_count; int * threads; scalar_t__ pids_size; scalar_t__ pids_count; int * pids; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char const*,int *) ;

__attribute__((used)) static fdOpenInfoRef
FUNC_3(const char *VAR_0, uint32_t VAR_1)
{
 fdOpenInfoRef VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(sizeof(*VAR_2));
 if (!VAR_2)
  return ((void*)0);

 VAR_2->pids = ((void*)0);
 VAR_2->pids_count = 0;
 VAR_2->pids_size = 0;

 VAR_2->threads = ((void*)0);
 VAR_2->thr_count = 0;
 VAR_2->thr_size = 0;

 VAR_2->fds = ((void*)0);
 VAR_2->fds_count = 0;
 VAR_2->fds_size = 0;

 VAR_3 = FUNC_2(VAR_0, &VAR_2->match_stat);
 if (VAR_3 == -1) {
  goto fail;
 }

 VAR_2->flags = VAR_1;

 return VAR_2;

    fail :

 FUNC_0(VAR_2);
 return ((void*)0);
}
