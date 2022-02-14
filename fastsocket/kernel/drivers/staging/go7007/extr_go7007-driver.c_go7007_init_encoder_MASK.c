
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct go7007 {scalar_t__ board_id; TYPE_1__* board_info; } ;
struct TYPE_2__ {int audio_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct go7007*,int,int) ;

__attribute__((used)) static int FUNC_1(struct go7007 *VAR_2)
{
 if (VAR_2->board_info->audio_flags & VAR_0) {
  FUNC_0(VAR_2, 0x1000, 0x0811);
  FUNC_0(VAR_2, 0x1000, 0x0c11);
 }
 if (VAR_2->board_id == VAR_1) {

  FUNC_0(VAR_2, 0x3c82, 0x0001);
  FUNC_0(VAR_2, 0x3c80, 0x00fe);
 }
 return 0;
}
