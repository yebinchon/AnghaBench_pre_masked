
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vino_channel_settings {int input; } ;
typedef int __u32 ;
struct TYPE_2__ {scalar_t__ camera; scalar_t__ decoder; } ;





 TYPE_1__* VAR_0 ;

__attribute__((used)) static __u32 FUNC_0(struct vino_channel_settings *VAR_1)
{
 __u32 VAR_2 = 0;


 if (VAR_0->decoder && VAR_0->camera) {
  switch (VAR_1->input) {
  case 130:
   VAR_2 = 0;
   break;
  case 128:
   VAR_2 = 1;
   break;
  case 129:
   VAR_2 = 2;
   break;
  }
 } else if (VAR_0->decoder) {
  switch (VAR_1->input) {
  case 130:
   VAR_2 = 0;
   break;
  case 128:
   VAR_2 = 1;
   break;
  }
 } else if (VAR_0->camera) {
  switch (VAR_1->input) {
  case 129:
   VAR_2 = 0;
   break;
  }
 }

 return VAR_2;
}
