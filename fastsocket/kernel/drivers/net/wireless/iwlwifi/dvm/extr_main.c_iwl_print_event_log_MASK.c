
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iwl_trans {int dev; } ;
struct TYPE_3__ {scalar_t__ log_event_table; } ;
struct iwl_priv {scalar_t__ cur_ucode; TYPE_2__* fw; TYPE_1__ device_pointers; struct iwl_trans* trans; } ;
struct TYPE_4__ {scalar_t__ init_evtlog_ptr; scalar_t__ inst_evtlog_ptr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_priv*,char*,scalar_t__,scalar_t__,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct iwl_trans*,int ) ;
 int FUNC_2 (struct iwl_trans*,int,unsigned long*) ;
 int FUNC_3 (struct iwl_trans*,unsigned long*) ;
 int FUNC_4 (struct iwl_trans*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (char*,size_t,char*,scalar_t__,scalar_t__,...) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct iwl_priv *VAR_4, u32 VAR_5,
          u32 VAR_6, u32 VAR_7,
          int VAR_8, char **VAR_9, size_t VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15, VAR_16, VAR_17;
 unsigned long VAR_18;

 struct iwl_trans *VAR_19 = VAR_4->trans;

 if (VAR_6 == 0)
  return VAR_8;

 VAR_12 = VAR_4->device_pointers.log_event_table;
 if (VAR_4->cur_ucode == VAR_3) {
  if (!VAR_12)
   VAR_12 = VAR_4->fw->init_evtlog_ptr;
 } else {
  if (!VAR_12)
   VAR_12 = VAR_4->fw->inst_evtlog_ptr;
 }

 if (VAR_7 == 0)
  VAR_13 = 2 * sizeof(u32);
 else
  VAR_13 = 3 * sizeof(u32);

 VAR_14 = VAR_12 + VAR_0 + (VAR_5 * VAR_13);


 if (!FUNC_2(VAR_19, 0, &VAR_18))
  return VAR_8;


 FUNC_4(VAR_19, VAR_1, VAR_14);



 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  VAR_15 = FUNC_1(VAR_19, VAR_2);
  VAR_16 = FUNC_1(VAR_19, VAR_2);
  if (VAR_7 == 0) {

   if (VAR_10) {
    VAR_8 += FUNC_5(*VAR_9 + VAR_8, VAR_10 - VAR_8,
      "EVT_LOG:0x%08x:%04u\n",
      VAR_16, VAR_15);
   } else {
    FUNC_6(VAR_19->dev, 0,
     VAR_16, VAR_15);
    FUNC_0(VAR_4, "EVT_LOG:0x%08x:%04u\n",
     VAR_16, VAR_15);
   }
  } else {
   VAR_17 = FUNC_1(VAR_19, VAR_2);
   if (VAR_10) {
    VAR_8 += FUNC_5(*VAR_9 + VAR_8, VAR_10 - VAR_8,
      "EVT_LOGT:%010u:0x%08x:%04u\n",
       VAR_16, VAR_17, VAR_15);
   } else {
    FUNC_0(VAR_4, "EVT_LOGT:%010u:0x%08x:%04u\n",
     VAR_16, VAR_17, VAR_15);
    FUNC_6(VAR_19->dev, VAR_16,
     VAR_17, VAR_15);
   }
  }
 }


 FUNC_3(VAR_19, &VAR_18);
 return VAR_8;
}
