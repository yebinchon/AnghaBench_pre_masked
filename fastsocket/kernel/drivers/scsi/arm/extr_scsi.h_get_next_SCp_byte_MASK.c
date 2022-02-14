
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_pointer {char* ptr; int this_residual; } ;



__attribute__((used)) static inline unsigned char FUNC_0(struct scsi_pointer *VAR_0)
{
 char VAR_1 = *VAR_0->ptr;

 VAR_0->ptr += 1;
 VAR_0->this_residual -= 1;

 return VAR_1;
}
