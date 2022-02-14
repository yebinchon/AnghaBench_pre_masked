
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int status_code; scalar_t__ read_errno; int file; int read_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct file*,int ,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_8)
{
   int VAR_9 = FUNC_3(VAR_8->file);

   if (VAR_9 >= 0 && VAR_9 <= 255)
   {
      ++(VAR_8->read_count);
      return VAR_9;
   }

   else if (VAR_9 != VAR_2)
   {
      VAR_8->status_code |= VAR_4;
      VAR_8->read_errno = VAR_3;


      FUNC_0(VAR_8, VAR_6, "file read");
   }
   else
   {



      if (FUNC_2(VAR_8->file))
         VAR_8->read_errno = VAR_7;

      else if (FUNC_1(VAR_8->file))
         VAR_8->read_errno = 0;

      else
         VAR_8->read_errno = VAR_0;
   }





   VAR_8->status_code |= VAR_5;
   return VAR_2;
}
