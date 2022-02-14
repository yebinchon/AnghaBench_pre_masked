
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int loopSound_t ;
typedef int channel_t ;
struct TYPE_2__ {int samplebits; int samples; scalar_t__ buffer; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,int,int) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

void FUNC_5( void ) {
 int VAR_8;

 if (!VAR_7)
  return;


 FUNC_0(VAR_3, 0, VAR_1*sizeof(loopSound_t));
 FUNC_0(VAR_4, 0, VAR_0*sizeof(channel_t));
 VAR_5 = 0;

 FUNC_3();

 VAR_6 = 0;

 if (VAR_2.samplebits == 8)
  VAR_8 = 0x80;
 else
  VAR_8 = 0;

 FUNC_1 ();
 if (VAR_2.buffer)




  FUNC_4(VAR_2.buffer, VAR_8, VAR_2.samples * VAR_2.samplebits/8);
 FUNC_2 ();
}
