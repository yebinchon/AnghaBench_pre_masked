
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct firedtv {int subunit; int avc_mutex; int avc_data_length; scalar_t__ avc_data; } ;
struct avc_command_frame {int subunit; int* operand; int opcode; int ctype; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct firedtv*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct avc_command_frame*,int) ;

int FUNC_6(struct firedtv *VAR_4, unsigned char VAR_5, u16 VAR_6[])
{
 struct avc_command_frame *VAR_7 = (void *)VAR_4->avc_data;
 int VAR_8, VAR_9, VAR_10;

 if (VAR_5 > 16 && VAR_5 != 0xff)
  return -VAR_3;

 FUNC_3(&VAR_4->avc_mutex);

 VAR_7->ctype = VAR_0;
 VAR_7->subunit = VAR_2 | VAR_4->subunit;
 VAR_7->opcode = VAR_1;

 VAR_7->operand[0] = 0;
 VAR_7->operand[1] = 0xd2;
 VAR_7->operand[2] = 0x20;
 VAR_7->operand[3] = 0x00;
 VAR_7->operand[4] = 0x00;
 VAR_7->operand[5] = VAR_5;

 VAR_9 = 6;
 if (VAR_5 != 0xff)
  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
   VAR_7->operand[VAR_9++] = 0x13;
   VAR_7->operand[VAR_9++] = 0x80;
   VAR_7->operand[VAR_9++] = (VAR_6[VAR_10] >> 8) & 0x1f;
   VAR_7->operand[VAR_9++] = VAR_6[VAR_10] & 0xff;
   VAR_7->operand[VAR_9++] = 0x00;
   VAR_7->operand[VAR_9++] = 0x00;
  }
 FUNC_5(VAR_7, VAR_9);

 VAR_4->avc_data_length = FUNC_0(3 + VAR_9, 4);
 VAR_8 = FUNC_1(VAR_4);



 FUNC_4(&VAR_4->avc_mutex);

 if (VAR_8 == 0)
  FUNC_2(50);

 return VAR_8;
}
