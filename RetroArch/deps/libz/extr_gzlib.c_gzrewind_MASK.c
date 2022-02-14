
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gz_statep ;
typedef int * gzFile ;
struct TYPE_3__ {scalar_t__ mode; scalar_t__ err; int start; int fd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(gzFile VAR_4)
{
   gz_statep VAR_5;


   if (VAR_4 == ((void*)0))
      return -1;
   VAR_5 = (gz_statep)VAR_4;


   if (VAR_5->mode != VAR_0 ||
         (VAR_5->err != VAR_3 && VAR_5->err != VAR_2))
      return -1;


   if (FUNC_0(VAR_5->fd, VAR_5->start, VAR_1) == -1)
      return -1;
   FUNC_1(VAR_5);
   return 0;
}
