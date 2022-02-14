
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_usage {unsigned int hid; } ;
struct hid_input {int dummy; } ;
struct hid_field {scalar_t__ application; } ;
struct hid_device {scalar_t__ product; } ;


 unsigned int FUNC_0 (int const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,int const) ;
 scalar_t__ FUNC_3 (struct hid_input*,struct hid_usage*,unsigned long**,int*) ;
 scalar_t__ FUNC_4 (struct hid_input*,struct hid_usage*,unsigned long**,int*) ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_9, struct hid_input *VAR_10,
  struct hid_field *VAR_11, struct hid_usage *VAR_12,
  unsigned long **VAR_13, int *VAR_14)
{


 static const u8 VAR_15[] = {
    0,216, 0,213,175,156, 0, 0, 0, 0,
  144, 0, 0, 0, 0, 0, 0, 0, 0,212,
  174,167,152,161,112, 0, 0, 0,154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0,183,184,185,186,187,
  188,189,190,191,192,193,194, 0, 0, 0
 };
 unsigned long VAR_16 = (unsigned long)FUNC_1(VAR_9);
 unsigned int VAR_17 = VAR_12->hid;

 if (VAR_9->product == VAR_8 &&
   FUNC_3(VAR_10, VAR_12, VAR_13, VAR_14))
  return 1;

 if ((VAR_16 & VAR_7) && FUNC_4(VAR_10, VAR_12, VAR_13, VAR_14))
  return 1;

 if ((VAR_17 & VAR_4) != VAR_2)
  return 0;

 VAR_17 &= VAR_3;


 if (VAR_11->application == VAR_1) {
  if ((VAR_16 & VAR_6) &&
    (VAR_17 == 7 || VAR_17 == 8))
   return -1;
 } else {
  if ((VAR_16 & VAR_5) &&
    VAR_17 < FUNC_0(VAR_15) &&
    VAR_15[VAR_17] != 0) {
   FUNC_2(VAR_10, VAR_12, VAR_13, VAR_14, VAR_0,
     VAR_15[VAR_17]);
   return 1;
  }
 }

 return 0;
}
