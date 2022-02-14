
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hid_field {int maxusage; TYPE_1__* usage; } ;
struct TYPE_2__ {int const hid; } ;


 int const VAR_0 ;

__attribute__((used)) static int FUNC_0(int *VAR_1, struct hid_field *VAR_2,
       const u8 *VAR_3, int VAR_4)
{

 int VAR_5, VAR_6;
 int VAR_7 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_2->maxusage; VAR_6++) {
   if (VAR_2->usage[VAR_6].hid == (VAR_0 | VAR_3[VAR_5])) {
    VAR_1[VAR_5] = VAR_6 + 1;
    VAR_7++;
    break;
   }
  }
 }
 return VAR_7;
}
