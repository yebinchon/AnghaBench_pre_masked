
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int subunit; int avc_data_length; int avc_mutex; scalar_t__ avc_data; } ;
struct avc_response_frame {int * operand; } ;
struct avc_command_frame {int subunit; scalar_t__* operand; int opcode; int ctype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct firedtv*) ;
 int FUNC_1 (struct avc_command_frame*,int,int ) ;
 unsigned int FUNC_2 (struct avc_response_frame*) ;
 size_t FUNC_3 (struct avc_response_frame*) ;
 int FUNC_4 (char*,int *,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct firedtv *VAR_9, char *VAR_10, unsigned int *VAR_11)
{
 struct avc_command_frame *VAR_12 = (void *)VAR_9->avc_data;
 struct avc_response_frame *VAR_13 = (void *)VAR_9->avc_data;
 int VAR_14;

 FUNC_5(&VAR_9->avc_mutex);

 VAR_12->ctype = VAR_0;
 VAR_12->subunit = VAR_2 | VAR_9->subunit;
 VAR_12->opcode = VAR_1;

 VAR_12->operand[0] = VAR_4;
 VAR_12->operand[1] = VAR_5;
 VAR_12->operand[2] = VAR_6;
 VAR_12->operand[3] = VAR_7;
 VAR_12->operand[4] = 0;
 VAR_12->operand[5] = VAR_8;
 FUNC_1(VAR_12, 6, VAR_3);

 VAR_9->avc_data_length = 12;
 VAR_14 = FUNC_0(VAR_9);
 if (VAR_14 < 0)
  goto out;



 *VAR_11 = FUNC_2(VAR_13);
 FUNC_4(VAR_10, &VAR_13->operand[FUNC_3(VAR_13)], *VAR_11);
out:
 FUNC_6(&VAR_9->avc_mutex);

 return VAR_14;
}
