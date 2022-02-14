
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct fdtable {int max_fds; scalar_t__ close_on_exec; scalar_t__ open_fds; scalar_t__ fd; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_2 (char*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct fdtable *VAR_1, struct fdtable *VAR_2)
{
 unsigned int VAR_3, VAR_4;

 FUNC_0(VAR_1->max_fds < VAR_2->max_fds);

 VAR_3 = VAR_2->max_fds * sizeof(struct file *);
 VAR_4 = (VAR_1->max_fds - VAR_2->max_fds) * sizeof(struct file *);
 FUNC_1(VAR_1->fd, VAR_2->fd, VAR_3);
 FUNC_2((char *)(VAR_1->fd) + VAR_3, 0, VAR_4);

 VAR_3 = VAR_2->max_fds / VAR_0;
 VAR_4 = (VAR_1->max_fds - VAR_2->max_fds) / VAR_0;
 FUNC_1(VAR_1->open_fds, VAR_2->open_fds, VAR_3);
 FUNC_2((char *)(VAR_1->open_fds) + VAR_3, 0, VAR_4);
 FUNC_1(VAR_1->close_on_exec, VAR_2->close_on_exec, VAR_3);
 FUNC_2((char *)(VAR_1->close_on_exec) + VAR_3, 0, VAR_4);
}
