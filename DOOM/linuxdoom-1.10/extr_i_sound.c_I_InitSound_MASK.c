
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sfxinfo_t ;
struct TYPE_2__ {struct TYPE_2__* link; int data; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (int ,char*,...) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int ,int *) ;
 int * VAR_15 ;
 scalar_t__* VAR_16 ;
 int FUNC_5 (scalar_t__,int ,int*) ;
 scalar_t__ FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,char*) ;
 int VAR_17 ;
 char* VAR_18 ;
 int FUNC_8 (char*,char*,char*,...) ;
 int VAR_19 ;
 int FUNC_9 (char*,char*) ;

void
FUNC_10()
{
  int VAR_20;







  FUNC_2( VAR_19, "I_InitSound: ");

  VAR_14 = FUNC_6("/dev/dsp", VAR_3);
  if (VAR_14<0)
    FUNC_2(VAR_19, "Could not open /dev/dsp\n");


  VAR_20 = 11 | (2<<16);
  FUNC_5(VAR_14, VAR_8, &VAR_20);
  FUNC_5(VAR_14, VAR_6, 0);

  VAR_20=VAR_4;

  FUNC_5(VAR_14, VAR_9, &VAR_20);

  VAR_20=1;
  FUNC_5(VAR_14, VAR_10, &VAR_20);

  FUNC_5(VAR_14, VAR_5, &VAR_20);

  if (VAR_20&=VAR_0)
    FUNC_5(VAR_14, VAR_7, &VAR_20);
  else
    FUNC_2(VAR_19, "Could not play signed 16 data\n");

  FUNC_2(VAR_19, " configured audio device\n" );



  FUNC_2( VAR_19, "I_InitSound: ");

  for (VAR_20=1 ; VAR_20<VAR_2 ; VAR_20++)
  {

    if (!VAR_12[VAR_20].link)
    {

      VAR_12[VAR_20].data = FUNC_4( VAR_12[VAR_20].name, &VAR_15[VAR_20] );
    }
    else
    {

      VAR_12[VAR_20].data = VAR_12[VAR_20].link->data;
      VAR_15[VAR_20] = VAR_15[(VAR_12[VAR_20].link - VAR_12)/sizeof(sfxinfo_t)];
    }
  }

  FUNC_2( VAR_19, " pre-cached all sound data\n");


  for ( VAR_20 = 0; VAR_20< VAR_1; VAR_20++ )
    VAR_16[VAR_20] = 0;


  FUNC_2(VAR_19, "I_InitSound: sound module ready\n");


}
