
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct acx_tx_queue_qos_config {int qid; int high_threshold; int low_threshold; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(u8 VAR_9,
       struct acx_tx_queue_qos_config *VAR_10,
       u32 VAR_11)
{
 VAR_10->qid = VAR_9;

 switch (VAR_9) {
 case 131:
  VAR_10->high_threshold =
   (VAR_1 * VAR_11) / 100;
  VAR_10->low_threshold =
   (VAR_5 * VAR_11) / 100;
  break;
 case 130:
  VAR_10->high_threshold =
   (VAR_2 * VAR_11) / 100;
  VAR_10->low_threshold =
   (VAR_6 * VAR_11) / 100;
  break;
 case 129:
  VAR_10->high_threshold =
   (VAR_3 * VAR_11) / 100;
  VAR_10->low_threshold =
   (VAR_7 * VAR_11) / 100;
  break;
 case 128:
  VAR_10->high_threshold =
   (VAR_4 * VAR_11) / 100;
  VAR_10->low_threshold =
   (VAR_8 * VAR_11) / 100;
  break;
 default:
  FUNC_0("Invalid TX queue id: %d", VAR_9);
  return -VAR_0;
 }

 return 0;
}
