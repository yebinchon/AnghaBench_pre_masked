
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_firmware_pieces {struct fw_img_parsing* img; } ;
struct fw_sec_parsing {int data; int offset; } ;
struct fw_sec {int size; int data; int offset; } ;
struct fw_img_parsing {size_t sec_counter; struct fw_sec* sec; } ;
typedef enum iwl_ucode_type { ____Placeholder_iwl_ucode_type } iwl_ucode_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct iwl_firmware_pieces *VAR_1,
          const void *VAR_2, enum iwl_ucode_type VAR_3,
          int VAR_4)
{
 struct fw_img_parsing *VAR_5;
 struct fw_sec *VAR_6;
 struct fw_sec_parsing *VAR_7;

 if (FUNC_0(!VAR_1 || !VAR_2 || VAR_3 >= VAR_0))
  return -1;

 VAR_7 = (struct fw_sec_parsing *)VAR_2;

 VAR_5 = &VAR_1->img[VAR_3];
 VAR_6 = &VAR_5->sec[VAR_5->sec_counter];

 VAR_6->offset = FUNC_1(VAR_7->offset);
 VAR_6->data = VAR_7->data;
 VAR_6->size = VAR_4 - sizeof(VAR_7->offset);

 ++VAR_5->sec_counter;

 return 0;
}
