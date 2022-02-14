
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ only_munmap; int fd; scalar_t__ ptr; scalar_t__ only_mmap; } ;
typedef TYPE_1__ RegOp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int ,int,int ,int,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void FUNC_7(RegOp *VAR_5)
{
   if (VAR_5->only_munmap == 0)
   {
      VAR_5->fd = FUNC_6("/dev/uio0", VAR_2);

      if (VAR_5->fd < 1)
         return;

      VAR_5->ptr = FUNC_4(((void*)0), FUNC_3(), VAR_3|VAR_4, VAR_1, VAR_5->fd, 0);

      if (VAR_5->ptr == VAR_0)
      {
         FUNC_0("could not mmap() memory\n");
         FUNC_2(1);
      }
   }

   if (VAR_5->only_mmap == 0)
   {
      if (FUNC_5(VAR_5->ptr, FUNC_3()) == -1)
      {
         FUNC_0("could not munmap() memory\n");
         FUNC_2(1);
      }

      FUNC_1(VAR_5->fd);
   }

   return;
}
