
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct request {int* cmd; int cmd_len; int errors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_0(struct request *VAR_8)
{
 u8 *VAR_9 = VAR_8->cmd;


 if (VAR_9[0] == VAR_6 || VAR_9[0] == VAR_7) {
  VAR_9[8] = VAR_9[4];
  VAR_9[5] = VAR_9[3];
  VAR_9[4] = VAR_9[2];
  VAR_9[3] = VAR_9[1] & 0x1f;
  VAR_9[2] = 0;
  VAR_9[1] &= 0xe0;
  VAR_9[0] += (VAR_5 - VAR_6);
  VAR_8->cmd_len = 10;
  return VAR_1;
 }






 if (VAR_9[0] == VAR_4 || VAR_9[0] == VAR_3) {
  VAR_8->errors = VAR_2;
  return VAR_0;
 }

 return VAR_1;
}
