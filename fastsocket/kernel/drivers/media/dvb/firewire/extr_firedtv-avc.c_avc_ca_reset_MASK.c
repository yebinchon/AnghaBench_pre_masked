
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int subunit; int avc_data_length; int avc_mutex; scalar_t__ avc_data; } ;
struct avc_command_frame {int subunit; int* operand; int opcode; int ctype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct firedtv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct firedtv *VAR_8)
{
 struct avc_command_frame *VAR_9 = (void *)VAR_8->avc_data;
 int VAR_10;

 FUNC_1(&VAR_8->avc_mutex);

 VAR_9->ctype = VAR_0;
 VAR_9->subunit = VAR_2 | VAR_8->subunit;
 VAR_9->opcode = VAR_1;

 VAR_9->operand[0] = VAR_3;
 VAR_9->operand[1] = VAR_4;
 VAR_9->operand[2] = VAR_5;
 VAR_9->operand[3] = VAR_6;
 VAR_9->operand[4] = 0;
 VAR_9->operand[5] = VAR_7;
 VAR_9->operand[6] = 0;
 VAR_9->operand[7] = 1;
 VAR_9->operand[8] = 0;

 VAR_8->avc_data_length = 12;
 VAR_10 = FUNC_0(VAR_8);



 FUNC_2(&VAR_8->avc_mutex);

 return VAR_10;
}
