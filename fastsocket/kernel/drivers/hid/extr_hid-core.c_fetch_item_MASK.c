
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* longdata; int u32; int u16; int u8; } ;
struct hid_item {int type; int tag; int size; TYPE_1__ data; int format; } ;
typedef int __u8 ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static u8 *FUNC_2(__u8 *VAR_3, __u8 *VAR_4, struct hid_item *VAR_5)
{
 u8 VAR_6;

 if ((VAR_4 - VAR_3) <= 0)
  return ((void*)0);

 VAR_6 = *VAR_3++;

 VAR_5->type = (VAR_6 >> 2) & 3;
 VAR_5->tag = (VAR_6 >> 4) & 15;

 if (VAR_5->tag == VAR_2) {

  VAR_5->format = VAR_0;

  if ((VAR_4 - VAR_3) < 2)
   return ((void*)0);

  VAR_5->size = *VAR_3++;
  VAR_5->tag = *VAR_3++;

  if ((VAR_4 - VAR_3) < VAR_5->size)
   return ((void*)0);

  VAR_5->data.longdata = VAR_3;
  VAR_3 += VAR_5->size;
  return VAR_3;
 }

 VAR_5->format = VAR_1;
 VAR_5->size = VAR_6 & 3;

 switch (VAR_5->size) {
 case 0:
  return VAR_3;

 case 1:
  if ((VAR_4 - VAR_3) < 1)
   return ((void*)0);
  VAR_5->data.u8 = *VAR_3++;
  return VAR_3;

 case 2:
  if ((VAR_4 - VAR_3) < 2)
   return ((void*)0);
  VAR_5->data.u16 = FUNC_0(VAR_3);
  VAR_3 = (__u8 *)((__le16 *)VAR_3 + 1);
  return VAR_3;

 case 3:
  VAR_5->size++;
  if ((VAR_4 - VAR_3) < 4)
   return ((void*)0);
  VAR_5->data.u32 = FUNC_1(VAR_3);
  VAR_3 = (__u8 *)((__le32 *)VAR_3 + 1);
  return VAR_3;
 }

 return ((void*)0);
}
