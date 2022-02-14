
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gz_statep ;
typedef int * gzFile ;
struct TYPE_4__ {scalar_t__ mode; int err; int fd; struct TYPE_4__* path; struct TYPE_4__* in; struct TYPE_4__* out; int strm; scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(gzFile VAR_5)
{
   int VAR_6, VAR_7;
   gz_statep VAR_8;


   if (VAR_5 == ((void*)0))
      return VAR_4;
   VAR_8 = (gz_statep)VAR_5;


   if (VAR_8->mode != VAR_0)
      return VAR_4;


   if (VAR_8->size) {
      FUNC_3(&(VAR_8->strm));
      FUNC_1(VAR_8->out);
      FUNC_1(VAR_8->in);
   }
   VAR_7 = VAR_8->err == VAR_1 ? VAR_1 : VAR_3;
   FUNC_2(VAR_8, VAR_3, ((void*)0));
   FUNC_1(VAR_8->path);
   VAR_6 = FUNC_0(VAR_8->fd);
   FUNC_1(VAR_8);
   return VAR_6 ? VAR_2 : VAR_7;
}
