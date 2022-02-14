
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char last_seq; unsigned char* sigqual; unsigned char qualptr; int average_fast; int average_slow; int last_seen; } ;
typedef TYPE_1__ wavepoint_history ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(wavepoint_history *VAR_3, unsigned char VAR_4, unsigned char VAR_5)
{
  int VAR_6=0,VAR_7=0,VAR_8=0;
  int VAR_9=0,VAR_10=0;

  VAR_7=(VAR_5-VAR_3->last_seq)%VAR_1;

  if(VAR_7)
    for(VAR_6=0;VAR_6<VAR_7;VAR_6++)
      {
 VAR_3->sigqual[VAR_3->qualptr++]=0;
 VAR_3->qualptr %=VAR_1;
      }
  VAR_3->last_seen=VAR_2;
  VAR_3->last_seq=VAR_5;
  VAR_3->sigqual[VAR_3->qualptr++]=VAR_4;
  VAR_3->qualptr %=VAR_1;
  VAR_8=(VAR_3->qualptr-VAR_0+VAR_1)%VAR_1;

  for(VAR_6=0;VAR_6<VAR_0;VAR_6++)
    {
      VAR_9+=VAR_3->sigqual[VAR_8++];
      VAR_8 %=VAR_1;
    }

  VAR_10=VAR_9;
  for(VAR_6=VAR_0;VAR_6<VAR_1;VAR_6++)
    {
      VAR_10+=VAR_3->sigqual[VAR_8++];
      VAR_8 %=VAR_1;
    }

  VAR_3->average_fast=VAR_9/VAR_0;
  VAR_3->average_slow=VAR_10/VAR_1;
}
