
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sfxinfo; } ;
typedef TYPE_1__ channel_t ;
struct TYPE_5__ {int lumpnum; int usefulness; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_3__* VAR_2 ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_5
( int VAR_7,
  int VAR_8 )
{
  int VAR_9;

  FUNC_4( VAR_6, "S_Init: default sfx volume %d\n", VAR_7);


  FUNC_0();

  FUNC_2(VAR_7);

  FUNC_1(VAR_8);




  VAR_3 =
    (channel_t *) FUNC_3(VAR_5*sizeof(channel_t), VAR_1, 0);


  for (VAR_9=0 ; VAR_9<VAR_5 ; VAR_9++)
    VAR_3[VAR_9].sfxinfo = 0;


  VAR_4 = 0;


  for (VAR_9=1 ; VAR_9<VAR_0 ; VAR_9++)
    VAR_2[VAR_9].lumpnum = VAR_2[VAR_9].usefulness = -1;
}
