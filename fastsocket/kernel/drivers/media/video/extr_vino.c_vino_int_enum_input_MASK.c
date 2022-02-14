
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vino_channel_settings {int dummy; } ;
typedef int __u32 ;
struct TYPE_2__ {int input_lock; scalar_t__ camera; scalar_t__ decoder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_2(struct vino_channel_settings *VAR_5, __u32 VAR_6)
{
 int VAR_7 = VAR_2;
 unsigned long VAR_8;

 FUNC_0(&VAR_4->input_lock, VAR_8);
 if (VAR_4->decoder && VAR_4->camera) {
  switch (VAR_6) {
  case 0:
   VAR_7 = VAR_0;
   break;
  case 1:
   VAR_7 = VAR_3;
   break;
  case 2:
   VAR_7 = VAR_1;
   break;
  }
 } else if (VAR_4->decoder) {
  switch (VAR_6) {
  case 0:
   VAR_7 = VAR_0;
   break;
  case 1:
   VAR_7 = VAR_3;
   break;
  }
 } else if (VAR_4->camera) {
  switch (VAR_6) {
  case 0:
   VAR_7 = VAR_1;
   break;
  }
 }
 FUNC_1(&VAR_4->input_lock, VAR_8);

 return VAR_7;
}
