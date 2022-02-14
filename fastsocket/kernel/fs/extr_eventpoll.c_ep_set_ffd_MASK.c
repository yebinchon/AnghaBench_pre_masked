
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct epoll_filefd {int fd; scalar_t__ added; struct file* file; } ;



__attribute__((used)) static inline void FUNC_0(struct epoll_filefd *VAR_0,
         struct file *VAR_1, int VAR_2)
{
 VAR_0->file = VAR_1;
 VAR_0->fd = VAR_2;
 VAR_0->added = 0;
}
