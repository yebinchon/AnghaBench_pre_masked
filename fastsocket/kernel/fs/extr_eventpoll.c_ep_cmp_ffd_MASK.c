
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct epoll_filefd {scalar_t__ file; int fd; } ;



__attribute__((used)) static inline int FUNC_0(struct epoll_filefd *VAR_0,
        struct epoll_filefd *VAR_1)
{
 return (VAR_0->file > VAR_1->file ? +1:
         (VAR_0->file < VAR_1->file ? -1 : VAR_0->fd - VAR_1->fd));
}
