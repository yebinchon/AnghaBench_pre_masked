
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char u8 ;
struct se_device {int dummy; } ;
struct se_cmd {char* t_task_cdb; int data_length; struct se_device* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_3__ {unsigned char page; unsigned char subpage; int (* emulate ) (struct se_device*,int ,unsigned char*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 TYPE_1__* VAR_8 ;
 int FUNC_3 (struct se_device*,int ,unsigned char*) ;
 int FUNC_4 (struct se_cmd*,int ) ;
 unsigned char* FUNC_5 (struct se_cmd*) ;
 int FUNC_6 (struct se_cmd*) ;

__attribute__((used)) static sense_reason_t FUNC_7(struct se_cmd *VAR_9)
{
 struct se_device *VAR_10 = VAR_9->se_dev;
 char *VAR_11 = VAR_9->t_task_cdb;
 bool VAR_12 = VAR_11[0] == VAR_1;
 int VAR_13 = VAR_12 ? 8 : 4;
 bool VAR_14 = !!(VAR_11[1] & 0x10);
 u8 VAR_15, VAR_16;
 unsigned char *VAR_17;
 unsigned char VAR_18[VAR_2];
 int VAR_19;
 int VAR_20 = 0;
 int VAR_21;

 if (!VAR_9->data_length) {
  FUNC_4(VAR_9, VAR_0);
  return 0;
 }

 if (VAR_9->data_length < VAR_13 + 2)
  return VAR_6;

 VAR_17 = FUNC_5(VAR_9);
 if (!VAR_17)
  return VAR_5;

 if (!VAR_14) {
  VAR_20 = VAR_3;
  goto out;
 }

 VAR_15 = VAR_17[VAR_13] & 0x3f;
 VAR_16 = VAR_17[VAR_13] & 0x40 ? VAR_17[VAR_13 + 1] : 0;

 for (VAR_21 = 0; VAR_21 < FUNC_0(VAR_8); ++VAR_21)
  if (VAR_8[VAR_21].page == VAR_15 &&
      VAR_8[VAR_21].subpage == VAR_16) {
   FUNC_2(VAR_18, 0, VAR_2);
   VAR_19 = VAR_8[VAR_21].emulate(VAR_10, 0, VAR_18);
   goto check_contents;
  }

 VAR_20 = VAR_7;
 goto out;

check_contents:
 if (VAR_9->data_length < VAR_13 + VAR_19) {
  VAR_20 = VAR_6;
  goto out;
 }

 if (FUNC_1(VAR_17 + VAR_13, VAR_18, VAR_19))
  VAR_20 = VAR_4;

out:
 FUNC_6(VAR_9);

 if (!VAR_20)
  FUNC_4(VAR_9, VAR_0);
 return VAR_20;
}
