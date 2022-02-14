
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pending_ints; scalar_t__ pending; } ;
struct TYPE_4__ {TYPE_1__ video; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ,char*,unsigned char) ;

__attribute__((used)) static unsigned char FUNC_1(void)
{
  unsigned char VAR_2 = VAR_1.video.pending_ints << 7;
  VAR_1.video.pending = 0;
  VAR_1.video.pending_ints = 0;

  FUNC_0(VAR_0, "VDP sr: %02x", VAR_2);
  return VAR_2;
}
