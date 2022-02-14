
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int miovf; int mifull; scalar_t__ midi_in_cnt; int mibuf; int* midi_in_buf; int miemp; int mofull; int moemp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static u16 FUNC_1(void)
{
   VAR_2.miovf = 0;
   VAR_2.mifull = 0;
   if (VAR_2.midi_in_cnt > 0)
   {
      VAR_2.mibuf = VAR_2.midi_in_buf[0];
      VAR_2.midi_in_buf[0] = VAR_2.midi_in_buf[1];
      VAR_2.midi_in_buf[1] = VAR_2.midi_in_buf[2];
      VAR_2.midi_in_buf[2] = VAR_2.midi_in_buf[3];
      VAR_2.midi_in_cnt--;
      VAR_2.miemp = (VAR_2.midi_in_cnt == 0);
      if (!VAR_2.miemp)
         FUNC_0(VAR_0, VAR_1);
   }
   else
      VAR_2.mibuf = 0xFF;

   return VAR_2.mofull << 12
        | VAR_2.moemp << 11
        | VAR_2.miovf << 10
        | VAR_2.mifull << 9
        | VAR_2.miemp << 8
        | VAR_2.mibuf << 0;
}
