
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floppy_raw_cmd {struct floppy_raw_cmd* next; scalar_t__ buffer_length; scalar_t__ kernel_data; } ;


 int FUNC_0 (unsigned long,scalar_t__) ;
 int FUNC_1 (struct floppy_raw_cmd*) ;

__attribute__((used)) static void FUNC_2(struct floppy_raw_cmd **VAR_0)
{
 struct floppy_raw_cmd *VAR_1;
 struct floppy_raw_cmd *VAR_2;

 VAR_2 = *VAR_0;
 *VAR_0 = ((void*)0);
 while (VAR_2) {
  if (VAR_2->buffer_length) {
   FUNC_0((unsigned long)VAR_2->kernel_data,
     VAR_2->buffer_length);
   VAR_2->buffer_length = 0;
  }
  VAR_1 = VAR_2->next;
  FUNC_1(VAR_2);
  VAR_2 = VAR_1;
 }
}
