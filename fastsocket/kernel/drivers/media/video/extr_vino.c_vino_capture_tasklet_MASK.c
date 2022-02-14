
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ skip_count; scalar_t__ skip; } ;
struct vino_channel_settings {TYPE_1__ int_data; } ;
struct TYPE_4__ {struct vino_channel_settings b; struct vino_channel_settings a; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (struct vino_channel_settings*) ;
 int FUNC_1 (struct vino_channel_settings*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_3) {
 struct vino_channel_settings *VAR_4;

 VAR_4 = (VAR_3 == VAR_0)
  ? &VAR_2->a : &VAR_2->b;

 if (VAR_4->int_data.skip)
  VAR_4->int_data.skip_count++;

 if (VAR_4->int_data.skip && (VAR_4->int_data.skip_count
       <= VAR_1)) {
  FUNC_1(VAR_4);
 } else {
  VAR_4->int_data.skip_count = 0;
  FUNC_0(VAR_4);
 }
}
