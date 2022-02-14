
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dummy; } ;
typedef int __u8 ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (struct hid_device*) ;

__attribute__((used)) static void FUNC_1(struct hid_device *VAR_1, __u8 *VAR_2,
  unsigned int VAR_3)
{
 unsigned long VAR_4 = (unsigned long)FUNC_0(VAR_1);
 unsigned int VAR_5;

 if (!(VAR_4 & VAR_0))
  return;

 for (VAR_5 = 0; VAR_5 < VAR_3 - 4; VAR_5++)
  if (VAR_2[VAR_5] == 0x29 && VAR_2[VAR_5 + 2] == 0x19) {
   __u8 VAR_6;

   VAR_2[VAR_5] = 0x19;
   VAR_2[VAR_5 + 2] = 0x29;
   VAR_6 = VAR_2[VAR_5 + 3];
   VAR_2[VAR_5 + 3] = VAR_2[VAR_5 + 1];
   VAR_2[VAR_5 + 1] = VAR_6;
  }
}
