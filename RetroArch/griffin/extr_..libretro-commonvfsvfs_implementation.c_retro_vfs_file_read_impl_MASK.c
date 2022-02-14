
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int hints; scalar_t__ scheme; size_t mappos; size_t mapsize; int fd; int * mapped; int fp; } ;
typedef TYPE_1__ libretro_vfs_implementation_file ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void*,int,size_t,int ) ;
 int FUNC_1 (void*,int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,void*,size_t) ;
 int FUNC_3 (int ,void*,size_t) ;
 int FUNC_4 (TYPE_1__*,void*,scalar_t__) ;

int64_t FUNC_5(libretro_vfs_implementation_file *VAR_3,
      void *VAR_4, uint64_t VAR_5)
{
   if (!VAR_3 || !VAR_4)
      return -1;

   if ((VAR_3->hints & VAR_1) == 0)
   {
      return FUNC_0(VAR_4, 1, (size_t)VAR_5, VAR_3->fp);

   }
   return FUNC_3(VAR_3->fd, VAR_4, (size_t)VAR_5);
}
