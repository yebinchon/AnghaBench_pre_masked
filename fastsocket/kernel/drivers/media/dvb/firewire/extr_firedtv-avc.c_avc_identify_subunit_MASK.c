
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int subunit; int avc_data_length; int avc_mutex; int device; scalar_t__ avc_data; } ;
struct avc_response_frame {scalar_t__ response; int* operand; } ;
struct avc_command_frame {int subunit; int* operand; int opcode; int ctype; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct firedtv*) ;
 int FUNC_1 (struct avc_command_frame*,int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct firedtv *VAR_7)
{
 struct avc_command_frame *VAR_8 = (void *)VAR_7->avc_data;
 struct avc_response_frame *VAR_9 = (void *)VAR_7->avc_data;
 int VAR_10;

 FUNC_3(&VAR_7->avc_mutex);

 VAR_8->ctype = VAR_0;
 VAR_8->subunit = VAR_4 | VAR_7->subunit;
 VAR_8->opcode = VAR_1;

 VAR_8->operand[0] = VAR_5;
 VAR_8->operand[1] = 0xff;
 VAR_8->operand[2] = 0x00;
 VAR_8->operand[3] = 0x00;
 VAR_8->operand[4] = 0x08;
 VAR_8->operand[5] = 0x00;
 VAR_8->operand[6] = 0x0d;
 FUNC_1(VAR_8, 7, 8);

 VAR_7->avc_data_length = 12;
 VAR_10 = FUNC_0(VAR_7);
 if (VAR_10 < 0)
  goto out;

 if ((VAR_9->response != VAR_3 &&
      VAR_9->response != VAR_2) ||
     (VAR_9->operand[3] << 8) + VAR_9->operand[4] != 8) {
  FUNC_2(VAR_7->device, "cannot read subunit identifier\n");
  VAR_10 = -VAR_6;
 }
out:
 FUNC_4(&VAR_7->avc_mutex);

 return VAR_10;
}
