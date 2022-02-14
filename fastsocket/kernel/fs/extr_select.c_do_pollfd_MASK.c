
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pollfd {int fd; unsigned int events; unsigned int revents; } ;
struct file {TYPE_1__* f_op; } ;
struct TYPE_6__ {unsigned int key; } ;
typedef TYPE_2__ poll_table ;
struct TYPE_5__ {unsigned int (* poll ) (struct file*,TYPE_2__*) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct file* FUNC_0 (int,int*) ;
 int FUNC_1 (struct file*,int) ;
 unsigned int FUNC_2 (struct file*,TYPE_2__*) ;

__attribute__((used)) static inline unsigned int FUNC_3(struct pollfd *VAR_4, poll_table *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 VAR_6 = 0;
 VAR_7 = VAR_4->fd;
 if (VAR_7 >= 0) {
  int VAR_8;
  struct file * VAR_9;

  VAR_9 = FUNC_0(VAR_7, &VAR_8);
  VAR_6 = VAR_3;
  if (VAR_9 != ((void*)0)) {
   VAR_6 = VAR_0;
   if (VAR_9->f_op && VAR_9->f_op->poll) {
    if (VAR_5)
     VAR_5->key = VAR_4->events |
       VAR_1 | VAR_2;
    VAR_6 = VAR_9->f_op->poll(VAR_9, VAR_5);
   }

   VAR_6 &= VAR_4->events | VAR_1 | VAR_2;
   FUNC_1(VAR_9, VAR_8);
  }
 }
 VAR_4->revents = VAR_6;

 return VAR_6;
}
