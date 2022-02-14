
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct iwl_set_calib_default_cmd {int data; void* length; void* calib_index; } ;
struct iwl_mvm {int dummy; } ;
typedef int cmd_raw ;
typedef int cmd ;
struct TYPE_3__ {int size; int data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,char*,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct iwl_mvm*,int ,int ,int,struct iwl_set_calib_default_cmd*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *,int ,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_6(struct iwl_mvm *VAR_2)
{
 u8 VAR_3[16];
 struct iwl_set_calib_default_cmd *VAR_4 =
  (struct iwl_set_calib_default_cmd *)VAR_3;
 int VAR_5, VAR_6;


 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  u16 VAR_7;

  if (VAR_1[VAR_6].size == 0)
   continue;

  FUNC_5(VAR_3, 0, sizeof(VAR_3));
  VAR_7 = VAR_1[VAR_6].size + sizeof(VAR_4);
  VAR_4->calib_index = FUNC_2(VAR_6);
  VAR_4->length = FUNC_2(VAR_1[VAR_6].size);
  if (FUNC_1(VAR_7 > sizeof(VAR_3),
         "Need to enlarge cmd_raw to %d\n", VAR_7))
   break;
  FUNC_4(VAR_4->data, VAR_1[VAR_6].data,
         VAR_1[VAR_6].size);
  VAR_5 = FUNC_3(VAR_2, VAR_0, 0,
        sizeof(*VAR_4) +
        VAR_1[VAR_6].size,
        VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
