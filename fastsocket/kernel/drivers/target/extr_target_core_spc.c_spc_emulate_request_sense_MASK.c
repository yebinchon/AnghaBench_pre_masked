
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct se_cmd {unsigned char* t_task_cdb; int data_length; } ;
typedef int sense_reason_t ;
typedef int buf ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 int FUNC_0 (struct se_cmd*,unsigned char*,unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char*,int ) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct se_cmd*,int ) ;
 unsigned char* FUNC_6 (struct se_cmd*) ;
 int FUNC_7 (struct se_cmd*) ;
 int VAR_9 ;

__attribute__((used)) static sense_reason_t FUNC_8(struct se_cmd *VAR_10)
{
 unsigned char *VAR_11 = VAR_10->t_task_cdb;
 unsigned char *VAR_12;
 u8 VAR_13 = 0, VAR_14 = 0;
 unsigned char VAR_15[VAR_2];

 FUNC_2(VAR_15, 0, VAR_2);

 if (VAR_11[1] & 0x01) {
  FUNC_4("REQUEST_SENSE description emulation not"
   " supported\n");
  return VAR_6;
 }

 VAR_12 = FUNC_6(VAR_10);
 if (!VAR_12)
  return VAR_7;

 if (!FUNC_0(VAR_10, &VAR_13, &VAR_14)) {



  VAR_15[0] = 0x70;
  VAR_15[VAR_5] = VAR_8;




  VAR_15[VAR_4] = VAR_13;
  VAR_15[VAR_3] = VAR_14;
  VAR_15[7] = 0x0A;
 } else {



  VAR_15[0] = 0x70;
  VAR_15[VAR_5] = VAR_1;




  VAR_15[VAR_4] = 0x00;
  VAR_15[7] = 0x0A;
 }

 FUNC_1(VAR_12, VAR_15, FUNC_3(VAR_9, sizeof(VAR_15), VAR_10->data_length));
 FUNC_7(VAR_10);

 FUNC_5(VAR_10, VAR_0);
 return 0;
}
