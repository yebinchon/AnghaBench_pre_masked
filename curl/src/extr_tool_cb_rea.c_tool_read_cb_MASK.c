
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct InStruct {TYPE_1__* config; int fd; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {int readbusy; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,void*,size_t) ;

size_t FUNC_1(void *VAR_5, size_t VAR_6, size_t VAR_7, void *VAR_8)
{
  ssize_t VAR_9;
  struct InStruct *VAR_10 = VAR_8;

  VAR_9 = FUNC_0(VAR_10->fd, VAR_5, VAR_6*VAR_7);
  if(VAR_9 < 0) {
    if(VAR_4 == VAR_1) {
      VAR_4 = 0;
      VAR_10->config->readbusy = VAR_3;
      return VAR_0;
    }

    VAR_9 = 0;
  }
  VAR_10->config->readbusy = VAR_2;
  return (size_t)VAR_9;
}
