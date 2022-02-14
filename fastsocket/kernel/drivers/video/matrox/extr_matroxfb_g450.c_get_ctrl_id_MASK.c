
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int __u32 ;
struct TYPE_3__ {int id; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_0(__u32 VAR_4) {
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_4 < VAR_3[VAR_5].desc.id) {
   if (VAR_3[VAR_5].desc.id == 0x08000000) {
    return -VAR_0;
   }
   return -VAR_1;
  }
  if (VAR_4 == VAR_3[VAR_5].desc.id) {
   return VAR_5;
  }
 }
 return -VAR_0;
}
