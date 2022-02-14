
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {int hid; } ;
struct hid_input {int input; } ;
struct hid_field {int logical_maximum; int logical_minimum; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_10, struct hid_input *VAR_11,
  struct hid_field *VAR_12, struct hid_usage *VAR_13,
  unsigned long **VAR_14, int *VAR_15)
{
 switch (VAR_13->hid & VAR_9) {

 case 128:
  switch (VAR_13->hid) {
  case 131:
   FUNC_0(VAR_11, VAR_13, VAR_14, VAR_15,
     VAR_8, VAR_1);
   FUNC_1(VAR_11->input, VAR_5,
     VAR_12->logical_minimum,
     VAR_12->logical_maximum, 0, 0);
   return 1;
  case 130:
   FUNC_0(VAR_11, VAR_13, VAR_14, VAR_15,
     VAR_8, VAR_2);
   FUNC_1(VAR_11->input, VAR_6,
     VAR_12->logical_minimum,
     VAR_12->logical_maximum, 0, 0);
   return 1;
  }
  return 0;

 case 129:
  switch (VAR_13->hid) {

  case 137:
  case 133:
  case 135:
  case 138:
  case 136:
   return -1;


  case 139:
   FUNC_2(VAR_7);
   return 1;


  case 132:
   FUNC_0(VAR_11, VAR_13, VAR_14, VAR_15,
     VAR_8, VAR_3);
   return 1;
  case 134:
   FUNC_0(VAR_11, VAR_13, VAR_14, VAR_15,
     VAR_8, VAR_4);
   FUNC_1(VAR_11->input, VAR_0,
     0, 1, 0, 0);
   return 1;
  }
  return 0;

 case 0xff000000:

  return -1;
 }

 return 0;
}
