
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {scalar_t__ read_errno; int file; } ;
typedef int png_byte ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct file*,int ,char*) ;

__attribute__((used)) static png_byte
FUNC_2(struct file *VAR_2)



{
   int VAR_3 = FUNC_0(VAR_2->file);

   if (VAR_1 != 0)
      VAR_2->read_errno = VAR_1;

   if (VAR_3 < 0 || VAR_3 > 255)
      FUNC_1(VAR_2, VAR_0, "reread");

   return (png_byte)VAR_3;
}
