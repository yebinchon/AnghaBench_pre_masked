
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int low; } ;
struct TYPE_7__ {int tone_state; char tone_index; int tone_start_jif; TYPE_1__ dsp; int board; } ;
typedef TYPE_2__ IXJ ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,char,int ) ;

__attribute__((used)) static int FUNC_3(IXJ *VAR_2, char VAR_3)
{
 if (!VAR_2->tone_state) {
  if(VAR_0 & 0x0002) {
   FUNC_2("IXJ %d starting tone %d at %ld\n", VAR_2->board, VAR_3, VAR_1);
  }
  if (VAR_2->dsp.low == 0x20) {
   FUNC_0(VAR_2);
  }
  VAR_2->tone_start_jif = VAR_1;

  VAR_2->tone_state = 1;
 }

 VAR_2->tone_index = VAR_3;
 if (FUNC_1(0x6000 + VAR_2->tone_index, VAR_2))
  return -1;

 return 0;
}
