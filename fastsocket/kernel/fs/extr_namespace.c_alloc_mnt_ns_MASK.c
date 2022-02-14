
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mnt_namespace {scalar_t__ event; int poll; int list; int * root; int count; int seq; int proc_inum; } ;


 int VAR_0 ;
 struct mnt_namespace* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mnt_namespace*) ;
 struct mnt_namespace* FUNC_6 (int,int ) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct mnt_namespace *FUNC_8(void)
{
 struct mnt_namespace *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_6(sizeof(struct mnt_namespace), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);
 VAR_4 = FUNC_7(&VAR_3->proc_inum);
 if (VAR_4) {
  FUNC_5(VAR_3);
  return FUNC_0(VAR_4);
 }
 VAR_3->seq = FUNC_2(1, &VAR_2);
 FUNC_3(&VAR_3->count, 1);
 VAR_3->root = ((void*)0);
 FUNC_1(&VAR_3->list);
 FUNC_4(&VAR_3->poll);
 VAR_3->event = 0;
 return VAR_3;
}
