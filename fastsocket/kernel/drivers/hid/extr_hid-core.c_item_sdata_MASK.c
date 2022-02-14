
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s32; int s16; int s8; } ;
struct hid_item {int size; TYPE_1__ data; } ;
typedef int s32 ;



__attribute__((used)) static s32 FUNC_0(struct hid_item *VAR_0)
{
 switch (VAR_0->size) {
 case 1: return VAR_0->data.s8;
 case 2: return VAR_0->data.s16;
 case 4: return VAR_0->data.s32;
 }
 return 0;
}
