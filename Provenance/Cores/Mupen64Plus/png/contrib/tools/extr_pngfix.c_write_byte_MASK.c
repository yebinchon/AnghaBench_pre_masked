
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int write_count; int status_code; int write_errno; int * out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct file*,int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct file *VAR_3, int VAR_4)




{
   if (VAR_3->out != ((void*)0))
   {
      if (FUNC_0(VAR_4, VAR_3->out) != VAR_4)
      {
         VAR_3->write_errno = VAR_2;
         VAR_3->status_code |= VAR_0;
         FUNC_1(VAR_3, VAR_1, "write byte");
      }
   }

   ++(VAR_3->write_count);
}
