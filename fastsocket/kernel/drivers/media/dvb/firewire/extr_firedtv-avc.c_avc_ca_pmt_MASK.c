
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int subunit; int avc_mutex; int device; int avc_data_length; scalar_t__ avc_data; } ;
struct avc_response_frame {int response; } ;
struct avc_command_frame {int subunit; int* operand; int opcode; int ctype; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct firedtv*) ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int*,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct avc_command_frame*,int) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct firedtv *VAR_13, char *VAR_14, int VAR_15)
{
 struct avc_command_frame *VAR_16 = (void *)VAR_13->avc_data;
 struct avc_response_frame *VAR_17 = (void *)VAR_13->avc_data;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;

 if (FUNC_10(VAR_12 & VAR_1))
  FUNC_3(VAR_14, VAR_15);

 FUNC_7(&VAR_13->avc_mutex);

 VAR_16->ctype = VAR_0;
 VAR_16->subunit = VAR_4 | VAR_13->subunit;
 VAR_16->opcode = VAR_2;

 if (VAR_14[0] != VAR_6) {
  FUNC_5(VAR_13->device, "forcing list_management to ONLY\n");
  VAR_14[0] = VAR_6;
 }

 VAR_18 = VAR_14[0];
 VAR_19 = ((VAR_14[4] & 0x0f) << 8) + VAR_14[5];
 if (VAR_19 > 0)
  VAR_19--;
 VAR_20 = VAR_14[6];

 VAR_16->operand[0] = VAR_7;
 VAR_16->operand[1] = VAR_8;
 VAR_16->operand[2] = VAR_9;
 VAR_16->operand[3] = VAR_10;
 VAR_16->operand[4] = 0;
 VAR_16->operand[5] = VAR_11;
 VAR_16->operand[6] = 0;

 VAR_16->operand[10] = VAR_18;
 VAR_16->operand[11] = 0x01;



 VAR_16->operand[12] = 0x02;
 VAR_16->operand[13] = 0x80;

 VAR_16->operand[15] = VAR_14[1];
 VAR_16->operand[16] = VAR_14[2];
 VAR_16->operand[17] = VAR_14[3];
 VAR_16->operand[18] = 0x00;
 VAR_16->operand[19] = 0x00;
 VAR_16->operand[20] = 0x1f;
 VAR_16->operand[21] = 0xff;
 VAR_16->operand[22] = (VAR_19 >> 8);
 VAR_16->operand[23] = (VAR_19 & 0xff);


 VAR_21 = 6;
 VAR_22 = 24;
 if (VAR_19 > 0) {
  VAR_20 = VAR_14[VAR_21++];
  if (VAR_20 != 1 && VAR_20 != 4)
   FUNC_4(VAR_13->device,
    "invalid pmt_cmd_id %d\n", VAR_20);

  FUNC_6(&VAR_16->operand[VAR_22], &VAR_14[VAR_21],
         VAR_19);
  VAR_21 += VAR_19;
  VAR_22 += VAR_19;
 }
 while (VAR_21 < VAR_15) {
  VAR_16->operand[VAR_22++] = VAR_14[VAR_21++];
  VAR_16->operand[VAR_22++] = VAR_14[VAR_21++];
  VAR_16->operand[VAR_22++] = VAR_14[VAR_21++];
  VAR_23 =
   ((VAR_14[VAR_21] & 0x0f) << 8) + VAR_14[VAR_21 + 1];
  VAR_21 += 2;
  if (VAR_23 > 0)
   VAR_23--;
  VAR_16->operand[VAR_22++] = VAR_23 >> 8;
  VAR_16->operand[VAR_22++] = VAR_23 & 0xff;
  if (VAR_23 > 0) {
   VAR_20 = VAR_14[VAR_21++];
   if (VAR_20 != 1 && VAR_20 != 4)
    FUNC_4(VAR_13->device, "invalid pmt_cmd_id %d "
     "at stream level\n", VAR_20);

   FUNC_6(&VAR_16->operand[VAR_22], &VAR_14[VAR_21],
          VAR_23);
   VAR_21 += VAR_23;
   VAR_22 += VAR_23;
  }
 }
 VAR_22 += 4;

 VAR_16->operand[7] = 0x82;
 VAR_16->operand[8] = (VAR_22 - 10) >> 8;
 VAR_16->operand[9] = (VAR_22 - 10) & 0xff;
 VAR_16->operand[14] = VAR_22 - 15;

 VAR_24 = FUNC_2(0, &VAR_16->operand[10], VAR_16->operand[12] - 1);
 VAR_16->operand[VAR_22 - 4] = (VAR_24 >> 24) & 0xff;
 VAR_16->operand[VAR_22 - 3] = (VAR_24 >> 16) & 0xff;
 VAR_16->operand[VAR_22 - 2] = (VAR_24 >> 8) & 0xff;
 VAR_16->operand[VAR_22 - 1] = (VAR_24 >> 0) & 0xff;
 FUNC_9(VAR_16, VAR_22);

 VAR_13->avc_data_length = FUNC_0(3 + VAR_22, 4);
 VAR_25 = FUNC_1(VAR_13);
 if (VAR_25 < 0)
  goto out;

 if (VAR_17->response != VAR_3) {
  FUNC_4(VAR_13->device,
   "CA PMT failed with response 0x%x\n", VAR_17->response);
  VAR_25 = -VAR_5;
 }
out:
 FUNC_8(&VAR_13->avc_mutex);

 return VAR_25;
}
