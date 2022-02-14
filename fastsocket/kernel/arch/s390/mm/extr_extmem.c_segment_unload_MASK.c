
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcss_segment {int dcss_name; int list; scalar_t__ start_addr; scalar_t__ end; struct dcss_segment* res; int ref_count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,unsigned long*,unsigned long*) ;
 int VAR_1 ;
 int FUNC_2 (struct dcss_segment*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*) ;
 int VAR_2 ;
 int FUNC_7 (struct dcss_segment*) ;
 struct dcss_segment* FUNC_8 (char*) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;

void
FUNC_10(char *VAR_3)
{
 unsigned long VAR_4;
 struct dcss_segment *VAR_5;

 if (!VAR_0)
  return;

 FUNC_4(&VAR_1);
 VAR_5 = FUNC_8 (VAR_3);
 if (VAR_5 == ((void*)0)) {
  FUNC_6("Unloading unknown DCSS %s failed\n", VAR_3);
  goto out_unlock;
 }
 if (FUNC_0(&VAR_5->ref_count) != 0)
  goto out_unlock;
 FUNC_7(VAR_5->res);
 FUNC_2(VAR_5->res);
 FUNC_9(VAR_5->start_addr, VAR_5->end - VAR_5->start_addr + 1);
 FUNC_3(&VAR_5->list);
 FUNC_1(&VAR_2, VAR_5->dcss_name, &VAR_4, &VAR_4);
 FUNC_2(VAR_5);
out_unlock:
 FUNC_5(&VAR_1);
}
