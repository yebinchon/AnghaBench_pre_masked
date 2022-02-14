
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dot_command_header {int command_size; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline unsigned int FUNC_0(void *VAR_2)
{
 struct dot_command_header *VAR_3 = (struct dot_command_header *)VAR_2;
 unsigned char *VAR_4 = VAR_2 + sizeof(struct dot_command_header);



 if (VAR_3->command_size == 3) {
  if ((VAR_4[0] == 6) && (VAR_4[1] == 3) && (VAR_4[2] == 1))
   return VAR_0;
 } else if (VAR_3->command_size == 2) {
  if ((VAR_4[0] == 7) && (VAR_4[1] == 1))
   return VAR_0;
  if (VAR_4[0] == 8)
   return VAR_0;
 }
 return VAR_1;
}
