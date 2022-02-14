
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int midi_out_cnt; int mofull; int * midi_out_buf; scalar_t__ moemp; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_0(u8 VAR_1)
{
   VAR_0.moemp = 0;
   if (VAR_0.midi_out_cnt < 4)
      VAR_0.midi_out_buf[VAR_0.midi_out_cnt++] = VAR_1;
   VAR_0.mofull = (VAR_0.midi_out_cnt >= 4);
}
