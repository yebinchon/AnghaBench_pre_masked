
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_i2c {int msg_idx; int wait; int use_pio; scalar_t__ msg_num; int * msg; scalar_t__ msg_ptr; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct pxa_i2c *VAR_0, int VAR_1)
{
 VAR_0->msg_ptr = 0;
 VAR_0->msg = ((void*)0);
 VAR_0->msg_idx ++;
 VAR_0->msg_num = 0;
 if (VAR_1)
  VAR_0->msg_idx = VAR_1;
 if (!VAR_0->use_pio)
  FUNC_0(&VAR_0->wait);
}
