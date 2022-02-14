
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int avc_data_length; int avc_mutex; scalar_t__ avc_data; } ;
struct avc_command_frame {int subunit; scalar_t__* operand; int opcode; int ctype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct firedtv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct firedtv *VAR_7)
{
 struct avc_command_frame *VAR_8 = (void *)VAR_7->avc_data;
 int VAR_9;

 FUNC_1(&VAR_7->avc_mutex);

 VAR_8->ctype = VAR_0;
 VAR_8->subunit = VAR_2 | 7;
 VAR_8->opcode = VAR_1;

 VAR_8->operand[0] = VAR_3;
 VAR_8->operand[1] = VAR_4;
 VAR_8->operand[2] = VAR_5;
 VAR_8->operand[3] = VAR_6;
 VAR_8->operand[4] = 0;

 VAR_7->avc_data_length = 8;
 VAR_9 = FUNC_0(VAR_7);



 FUNC_2(&VAR_7->avc_mutex);

 return VAR_9;
}
