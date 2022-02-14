
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int file_name; int file; } ;
typedef int fpos_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct file*,int ,char*) ;

__attribute__((used)) static void
FUNC_3(struct file *VAR_1, fpos_t *VAR_2)
{
   if (FUNC_0(VAR_1->file, VAR_2))
   {

      FUNC_1(VAR_1->file_name);
      FUNC_2(VAR_1, VAR_0, "fgetpos");
   }
}
