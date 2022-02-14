
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sfxinfo_t ;
struct TYPE_2__ {struct TYPE_2__* link; int data; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int ,scalar_t__*) ;
 scalar_t__* VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_5 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (char*,char*,char*) ;
 int VAR_7 ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*) ;

void
FUNC_10
( int VAR_8,
  char** VAR_9 )
{
    int VAR_10;
    char* VAR_11;
    char* VAR_12;
    char* VAR_13;
    char* VAR_14;
    char* VAR_15;
    char* VAR_16;



    char* VAR_17;

    VAR_17 = FUNC_3("DOOMWADDIR");

    if (!VAR_17)
 VAR_17 = ".";

    VAR_12 = FUNC_5(FUNC_9(VAR_17)+1+9+1);
    FUNC_7(VAR_12, "%s/doom1.wad", VAR_17);

    VAR_15 = FUNC_5(FUNC_9(VAR_17)+1+9+1);
    FUNC_7(VAR_15, "%s/doom2.wad", VAR_17);

    VAR_16 = FUNC_5(FUNC_9(VAR_17)+1+10+1);
    FUNC_7(VAR_16, "%s/doom2f.wad", VAR_17);

    VAR_14 = FUNC_5(FUNC_9(VAR_17)+1+8+1);
    FUNC_7(VAR_14, "%s/doomu.wad", VAR_17);

    VAR_13 = FUNC_5(FUNC_9(VAR_17)+1+8+1);
    FUNC_7(VAR_13, "%s/doom.wad", VAR_17);







    for (VAR_10=1 ; VAR_10<VAR_8 ; VAR_10++)
    {
 if (!FUNC_8(VAR_9[VAR_10], "-quiet"))
 {
     VAR_6 = 0;
 }
    }

    VAR_5 = VAR_0;
    VAR_4 = 0;

    if (! FUNC_0(VAR_16, VAR_1) )
 VAR_11 = VAR_16;
    else if (! FUNC_0(VAR_15, VAR_1) )
 VAR_11 = VAR_15;
    else if (! FUNC_0(VAR_14, VAR_1) )
 VAR_11 = VAR_14;
    else if (! FUNC_0(VAR_13, VAR_1) )
 VAR_11 = VAR_13;
    else if (! FUNC_0(VAR_12, VAR_1) )
 VAR_11 = VAR_12;




    else
    {
 FUNC_2(VAR_7, "Could not find wadfile anywhere\n");
 FUNC_1(-1);
    }


    FUNC_6(VAR_11);
    if (VAR_6)
 FUNC_2(VAR_7, "loading from [%s]\n", VAR_11);

    for (VAR_10=1 ; VAR_10<VAR_0 ; VAR_10++)
    {
 if (!VAR_2[VAR_10].link)
 {
     VAR_2[VAR_10].data = FUNC_4(VAR_2[VAR_10].name, &VAR_3[VAR_10]);
     if (VAR_4 < VAR_3[VAR_10]) VAR_4 = VAR_3[VAR_10];
 } else {
     VAR_2[VAR_10].data = VAR_2[VAR_10].link->data;
     VAR_3[VAR_10] = VAR_3[(VAR_2[VAR_10].link - VAR_2)/sizeof(sfxinfo_t)];
 }
    }

}
