
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct se_session {struct se_portal_group* se_tpg; } ;
struct se_portal_group {int se_tpg_tfo; } ;
struct se_cmd {int unknown_data_length; int se_cmd_flags; scalar_t__ data_direction; scalar_t__ se_sess; scalar_t__ se_tfo; } ;
struct scatterlist {int offset; int length; } ;
typedef scalar_t__ sense_reason_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct se_cmd*) ;
 int FUNC_2 () ;
 unsigned char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned char*,int ,int ) ;
 int FUNC_6 (struct scatterlist*) ;
 int FUNC_7 (struct se_session*,struct se_cmd*,int) ;
 int FUNC_8 (struct se_session*,struct se_cmd*) ;
 scalar_t__ FUNC_9 (struct se_cmd*,unsigned char*) ;
 scalar_t__ FUNC_10 (struct se_cmd*,struct scatterlist*,int ,struct scatterlist*,int ) ;
 int FUNC_11 (struct se_cmd*,scalar_t__) ;
 int FUNC_12 (struct se_cmd*) ;
 int FUNC_13 (struct se_cmd*,int ,struct se_session*,int ,int,int,unsigned char*) ;
 scalar_t__ FUNC_14 (struct se_cmd*,int ) ;
 int FUNC_15 (struct se_cmd*,scalar_t__,int ) ;

int FUNC_16(struct se_cmd *VAR_6, struct se_session *VAR_7,
  unsigned char *VAR_8, unsigned char *VAR_9, u32 VAR_10,
  u32 VAR_11, int VAR_12, int VAR_13, int VAR_14,
  struct scatterlist *VAR_15, u32 VAR_16,
  struct scatterlist *VAR_17, u32 VAR_18)
{
 struct se_portal_group *VAR_19;
 sense_reason_t VAR_20;
 int VAR_21;

 VAR_19 = VAR_7->se_tpg;
 FUNC_0(!VAR_19);
 FUNC_0(VAR_6->se_tfo || VAR_6->se_sess);
 FUNC_0(FUNC_2());





 FUNC_13(VAR_6, VAR_19->se_tpg_tfo, VAR_7,
    VAR_11, VAR_13, VAR_12, VAR_9);
 if (VAR_14 & VAR_5)
  VAR_6->unknown_data_length = 1;






 VAR_21 = FUNC_7(VAR_7, VAR_6, (VAR_14 & VAR_3));
 if (VAR_21)
  return VAR_21;



 if (VAR_14 & VAR_4)
  VAR_6->se_cmd_flags |= VAR_1;



 VAR_20 = FUNC_14(VAR_6, VAR_10);
 if (VAR_20) {
  FUNC_15(VAR_6, VAR_20, 0);
  FUNC_8(VAR_7, VAR_6);
  return 0;
 }

 VAR_20 = FUNC_9(VAR_6, VAR_8);
 if (VAR_20 != 0) {
  FUNC_11(VAR_6, VAR_20);
  return 0;
 }





 if (VAR_16 != 0) {
  FUNC_0(!VAR_15);
  if (!(VAR_6->se_cmd_flags & VAR_2) &&
       VAR_6->data_direction == VAR_0) {
   unsigned char *VAR_22 = ((void*)0);

   if (VAR_15)
    VAR_22 = FUNC_3(FUNC_6(VAR_15)) + VAR_15->offset;

   if (VAR_22) {
    FUNC_5(VAR_22, 0, VAR_15->length);
    FUNC_4(FUNC_6(VAR_15));
   }
  }

  VAR_20 = FUNC_10(VAR_6, VAR_15, VAR_16,
    VAR_17, VAR_18);
  if (VAR_20 != 0) {
   FUNC_11(VAR_6, VAR_20);
   return 0;
  }
 }




 FUNC_1(VAR_6);

 FUNC_12(VAR_6);
 return 0;
}
