
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int ascq; int asc; int sense_key; } ;
struct request {int q; struct alua_dh_data* end_io_data; int errors; } ;
struct alua_dh_data {scalar_t__ senselen; int * callback_data; int (* callback_fn ) (int *,unsigned int) ;int state; int group_id; int sdev; int sense; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,struct request*) ;
 unsigned int FUNC_1 (int ,struct scsi_sense_hdr*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ,int ,struct scsi_sense_hdr*) ;
 int FUNC_6 (int ,int ,char*,int ,int ,int ,...) ;
 int FUNC_7 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct request *VAR_10, int VAR_11)
{
 struct alua_dh_data *VAR_12 = VAR_10->end_io_data;
 struct scsi_sense_hdr VAR_13;
 unsigned VAR_14 = VAR_6;

 if (VAR_11 || FUNC_2(VAR_10->errors) != VAR_3 ||
   FUNC_3(VAR_10->errors) != VAR_2) {
  VAR_14 = VAR_5;
  goto done;
 }

 if (VAR_12->senselen > 0) {
  VAR_14 = FUNC_5(VAR_12->sense, VAR_8,
        &VAR_13);
  if (!VAR_14) {
   VAR_14 = VAR_5;
   goto done;
  }
  VAR_14 = FUNC_1(VAR_12->sdev, &VAR_13);
  if (VAR_14 == VAR_0) {
   VAR_14 = VAR_7;
   goto done;
  }
  FUNC_6(VAR_4, VAR_12->sdev,
       "%s: stpg sense code: %02x/%02x/%02x\n",
       VAR_1, VAR_13.sense_key,
       VAR_13.asc, VAR_13.ascq);
  VAR_14 = VAR_5;
 }
 if (VAR_14 == VAR_6) {
  VAR_12->state = VAR_9;
  FUNC_6(VAR_4, VAR_12->sdev,
       "%s: port group %02x switched to state %c\n",
       VAR_1, VAR_12->group_id,
       FUNC_4(VAR_12->state));
 }
done:
 VAR_10->end_io_data = ((void*)0);
 FUNC_0(VAR_10->q, VAR_10);
 if (VAR_12->callback_fn) {
  VAR_12->callback_fn(VAR_12->callback_data, VAR_14);
  VAR_12->callback_fn = VAR_12->callback_data = ((void*)0);
 }
 return;
}
