
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_lazy_init {int li_state; int li_list_mtx; int li_request_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct ext4_lazy_init* VAR_3 ;
 struct ext4_lazy_init* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void)
{
 struct ext4_lazy_init *VAR_4 = ((void*)0);

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_4->li_request_list);
 FUNC_2(&VAR_4->li_list_mtx);

 VAR_4->li_state |= VAR_1;

 VAR_3 = VAR_4;

 return 0;
}
