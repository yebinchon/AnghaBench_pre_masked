
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int ,int*) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int VAR_9 ;

void
FUNC_3
( int VAR_10,
  int VAR_11 )
{

    int VAR_12;

    VAR_8 = FUNC_2("/dev/dsp", VAR_1);
    if (VAR_8<0)
        FUNC_0(VAR_9, "Could not open /dev/dsp\n");


    VAR_12 = 11 | (2<<16);
    FUNC_1(VAR_8, VAR_5, &VAR_12);

    FUNC_1(VAR_8, VAR_3, 0);
    VAR_12=11025;
    FUNC_1(VAR_8, VAR_6, &VAR_12);
    VAR_12=1;
    FUNC_1(VAR_8, VAR_7, &VAR_12);

    FUNC_1(VAR_8, VAR_2, &VAR_12);
    if (VAR_12&=VAR_0)
        FUNC_1(VAR_8, VAR_4, &VAR_12);
    else
        FUNC_0(VAR_9, "Could not play signed 16 data\n");

}
