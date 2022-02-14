
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_host {int h_reclaim; int h_granted; int h_lockowners; int h_count; int h_name; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct nlm_host *VAR_0)
{
 if (VAR_0 != ((void*)0)) {
  FUNC_3("lockd: release host %s\n", VAR_0->h_name);
  FUNC_0(FUNC_2(&VAR_0->h_count) < 0);
  if (FUNC_1(&VAR_0->h_count)) {
   FUNC_0(!FUNC_4(&VAR_0->h_lockowners));
   FUNC_0(!FUNC_4(&VAR_0->h_granted));
   FUNC_0(!FUNC_4(&VAR_0->h_reclaim));
  }
 }
}
