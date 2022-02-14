
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_usage {int hid; } ;
struct hid_input {TYPE_1__* input; } ;
struct TYPE_2__ {int evbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_input *VAR_7, struct hid_usage *VAR_8,
  unsigned long **VAR_9, int *VAR_10)
{
 FUNC_1(VAR_0, VAR_7->input->evbit);
 switch (VAR_8->hid & VAR_1) {
 case 0xfd08: FUNC_0(VAR_4); break;
 case 0xfd09: FUNC_0(VAR_2); break;
 case 0xfd0b: FUNC_0(VAR_6); break;
 case 0xfd0e: FUNC_0(VAR_3); break;
 case 0xfd0f: FUNC_0(VAR_5); break;
 default:
  return 0;
 }
 return 1;
}
