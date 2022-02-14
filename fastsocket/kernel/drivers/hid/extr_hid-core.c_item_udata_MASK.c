
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int u32; int u16; int u8; } ;
struct hid_item {int size; TYPE_1__ data; } ;



__attribute__((used)) static u32 FUNC_0(struct hid_item *VAR_0)
{
 switch (VAR_0->size) {
 case 1: return VAR_0->data.u8;
 case 2: return VAR_0->data.u16;
 case 4: return VAR_0->data.u32;
 }
 return 0;
}
