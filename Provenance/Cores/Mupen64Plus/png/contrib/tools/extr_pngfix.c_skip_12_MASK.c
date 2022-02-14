
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {scalar_t__ read_errno; int file; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct file*,int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct file *VAR_3)



{

   if (FUNC_0(VAR_3->file, 12, VAR_0) != 0)
   {
      if (VAR_2 != 0)
         VAR_3->read_errno = VAR_2;

      FUNC_1(VAR_3, VAR_1, "reskip");
   }
}
