
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_pre_exec_data {int pipe_fd; int sock_fd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct port_pre_exec_data *VAR_2 = VAR_1;

 FUNC_1(VAR_2->sock_fd, 0);
 FUNC_1(VAR_2->sock_fd, 1);
 FUNC_1(VAR_2->sock_fd, 2);
 FUNC_0(VAR_2->sock_fd);
 FUNC_1(VAR_2->pipe_fd, 3);
 FUNC_2(3, VAR_0);
 FUNC_0(VAR_2->pipe_fd);
}
