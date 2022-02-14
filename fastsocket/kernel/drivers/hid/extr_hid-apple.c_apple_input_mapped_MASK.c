
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_usage {scalar_t__ hid; scalar_t__ code; } ;
struct hid_input {int dummy; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;
struct apple_sc {int quirks; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct apple_sc* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_7, struct hid_input *VAR_8,
  struct hid_field *VAR_9, struct hid_usage *VAR_10,
  unsigned long **VAR_11, int *VAR_12)
{
 struct apple_sc *VAR_13 = FUNC_0(VAR_7);

 if (VAR_13->quirks & VAR_0) {
  if (VAR_10->hid == VAR_5)
   FUNC_1(VAR_8, VAR_10, VAR_11, VAR_12, VAR_4, VAR_6);
  else if (VAR_10->code == VAR_1)
   FUNC_1(VAR_8, VAR_10, VAR_11, VAR_12, VAR_3, VAR_2);
  else if (VAR_10->code == VAR_2)
   FUNC_1(VAR_8, VAR_10, VAR_11, VAR_12, VAR_3, VAR_1);
 }

 return 0;
}
