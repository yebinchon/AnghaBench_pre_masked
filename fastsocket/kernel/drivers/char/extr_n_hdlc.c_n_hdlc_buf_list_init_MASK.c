
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n_hdlc_buf_list {int spinlock; } ;


 int FUNC_0 (struct n_hdlc_buf_list*,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct n_hdlc_buf_list *VAR_0)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 FUNC_1(&VAR_0->spinlock);
}
