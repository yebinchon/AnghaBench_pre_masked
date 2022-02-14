
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct daemon_data {int fd; int control; int * local_addr; int * ctl_addr; int * data_addr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct daemon_data *VAR_1 = VAR_0;

 FUNC_0(VAR_1->fd);
 VAR_1->fd = -1;
 FUNC_0(VAR_1->control);
 VAR_1->control = -1;

 FUNC_1(VAR_1->data_addr);
 VAR_1->data_addr = ((void*)0);
 FUNC_1(VAR_1->ctl_addr);
 VAR_1->ctl_addr = ((void*)0);
 FUNC_1(VAR_1->local_addr);
 VAR_1->local_addr = ((void*)0);
}
