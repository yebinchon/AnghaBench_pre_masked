
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_task {int sc; struct iscsi_iser_task* dd_data; } ;
struct iscsi_iser_task {scalar_t__ command_sent; int desc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iscsi_task*,int *) ;
 int FUNC_1 (struct iscsi_iser_task*) ;

__attribute__((used)) static int
FUNC_2(struct iscsi_task *VAR_1)
{
 struct iscsi_iser_task *VAR_2 = VAR_1->dd_data;

 if (FUNC_0(VAR_1, &VAR_2->desc))
   return -VAR_0;


 if (!VAR_1->sc)
  return 0;

 VAR_2->command_sent = 0;
 FUNC_1(VAR_2);
 return 0;
}
