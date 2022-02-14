
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int subunit; int avc_data_length; int avc_mutex; scalar_t__ avc_data; } ;
struct avc_response_frame {int* operand; } ;
struct avc_command_frame {int subunit; scalar_t__* operand; int opcode; int ctype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct firedtv*) ;
 int FUNC_1 (struct avc_command_frame*,int,int ) ;
 int FUNC_2 (struct avc_response_frame*) ;
 int FUNC_3 (char*,int*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct firedtv *VAR_10, char *VAR_11, unsigned int *VAR_12)
{
 struct avc_command_frame *VAR_13 = (void *)VAR_10->avc_data;
 struct avc_response_frame *VAR_14 = (void *)VAR_10->avc_data;
 int VAR_15, VAR_16;

 FUNC_4(&VAR_10->avc_mutex);

 VAR_13->ctype = VAR_0;
 VAR_13->subunit = VAR_2 | VAR_10->subunit;
 VAR_13->opcode = VAR_1;

 VAR_13->operand[0] = VAR_5;
 VAR_13->operand[1] = VAR_6;
 VAR_13->operand[2] = VAR_7;
 VAR_13->operand[3] = VAR_8;
 VAR_13->operand[4] = 0;
 VAR_13->operand[5] = VAR_9;
 FUNC_1(VAR_13, 6, VAR_4);

 VAR_10->avc_data_length = 12;
 VAR_16 = FUNC_0(VAR_10);
 if (VAR_16 < 0)
  goto out;



 VAR_15 = FUNC_2(VAR_14);
 VAR_11[0] = (VAR_3 >> 16) & 0xff;
 VAR_11[1] = (VAR_3 >> 8) & 0xff;
 VAR_11[2] = (VAR_3 >> 0) & 0xff;
 VAR_11[3] = 6 + VAR_14->operand[VAR_15 + 4];
 VAR_11[4] = 0x01;
 FUNC_3(&VAR_11[5], &VAR_14->operand[VAR_15], 5 + VAR_14->operand[VAR_15 + 4]);
 *VAR_12 = VAR_11[3] + 4;
out:
 FUNC_5(&VAR_10->avc_mutex);

 return VAR_16;
}
