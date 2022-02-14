
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int event_mask; scalar_t__ border_pixel; int colormap; } ;
typedef TYPE_2__ XSetWindowAttributes ;
struct TYPE_15__ {int graphics_exposures; } ;
typedef TYPE_3__ XGCValues ;
struct TYPE_13__ {int count; } ;
struct TYPE_18__ {scalar_t__ type; TYPE_1__ xexpose; } ;
struct TYPE_17__ {int visual; } ;
struct TYPE_16__ {int bytes_per_line; int height; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (char*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int ,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int,TYPE_3__*) ;
 TYPE_4__* FUNC_6 (int ,int ,int,int ,int ,char*,int,int,int,int) ;
 int FUNC_7 (int ,int ,int,int,int,int,int ,int,int ,int ,unsigned long,TYPE_2__*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int,int ,TYPE_5__*) ;
 int FUNC_12 (int ,TYPE_6__*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ,int *) ;
 TYPE_4__* FUNC_15 (int ,int ,int,int ,int ,int *,int,int) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int VAR_24 ;
 int VAR_25 ;
 TYPE_6__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 TYPE_5__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_18 (int ,int ) ;
 int VAR_37 ;
 int FUNC_19 (int ,char*) ;
 scalar_t__ FUNC_20 (char*) ;
 int VAR_38 ;
 int FUNC_21 (int) ;
 TYPE_4__* VAR_39 ;
 scalar_t__ FUNC_22 (int) ;
 int VAR_40 ;
 char** VAR_41 ;
 int FUNC_23 (char*) ;
 unsigned char** VAR_42 ;
 int FUNC_24 (int ,void (*) (int)) ;
 int FUNC_25 (char*,char*,char*,int*,char*,int*) ;
 int VAR_43 ;
 int FUNC_26 (char*,char*) ;

void FUNC_27(void)
{

    char* VAR_44;
    char* VAR_45;
    int VAR_46;
    int VAR_47;
    int VAR_48=0;
    int VAR_49=0;


    char VAR_50=' ';
    char VAR_51=' ';

    int VAR_52;
    unsigned long VAR_53;
    XSetWindowAttributes VAR_54;
    XGCValues VAR_55;
    int VAR_56;
    static int VAR_57=1;

    if (!VAR_57)
 return;
    VAR_57 = 0;

    FUNC_24(VAR_21, (void (*)(int)) VAR_12);

    if (FUNC_2("-2"))
 VAR_40 = 2;

    if (FUNC_2("-3"))
 VAR_40 = 3;

    if (FUNC_2("-4"))
 VAR_40 = 4;

    VAR_35 = VAR_20 * VAR_40;
    VAR_28 = VAR_19 * VAR_40;


    if ( (VAR_47=FUNC_2("-disp")) )
 VAR_44 = VAR_41[VAR_47+1];
    else
 VAR_44 = 0;


    VAR_38 = !!FUNC_2("-grabmouse");


    if ( (VAR_47=FUNC_2("-geom")) )
    {

 VAR_46 = FUNC_25(VAR_41[VAR_47+1], "%c%d%c%d", &VAR_50, &VAR_48, &VAR_51, &VAR_49);

 if (VAR_46==2)
     VAR_48 = VAR_49 = 0;
 else if (VAR_46==6)
 {
     if (VAR_50 == '-')
  VAR_48 = -VAR_48;
     if (VAR_51 == '-')
  VAR_49 = -VAR_49;
 }
 else
     FUNC_1("bad -geom parameter");
    }


    VAR_25 = FUNC_13(VAR_44);
    if (!VAR_25)
    {
 if (VAR_44)
     FUNC_1("Could not open display [%s]", VAR_44);
 else
     FUNC_1("Could not open display (DISPLAY=[%s])", FUNC_20("DISPLAY"));
    }


    VAR_30 = FUNC_0(VAR_25);
    if (!FUNC_11(VAR_25, VAR_30, 8, VAR_18, &VAR_34))
 FUNC_1("xdoom currently only supports 256-color PseudoColor screens");
    VAR_33 = VAR_34.visual;


    VAR_37 = FUNC_17(VAR_25);


    if (VAR_37)
    {
 if (!VAR_44) VAR_44 = (char *) FUNC_20("DISPLAY");
 if (VAR_44)
 {
     VAR_45 = VAR_44;
     while (*VAR_45 && (*VAR_45 != ':')) VAR_45++;
     if (*VAR_45) *VAR_45 = 0;
     if (!(!FUNC_26(VAR_44, "unix") || !*VAR_44)) VAR_37 = 0;
 }
    }

    FUNC_19(VAR_43, "Using MITSHM extension\n");


    VAR_24 = FUNC_4(VAR_25, FUNC_3(VAR_25,
         VAR_30), VAR_33, VAR_0);


    VAR_53 = VAR_5 | VAR_4 | VAR_3;
    VAR_54.event_mask =
 VAR_14
 | VAR_15

 | VAR_8;

    VAR_54.colormap = VAR_24;
    VAR_54.border_pixel = 0;


    VAR_29 = FUNC_7( VAR_25,
     FUNC_3(VAR_25, VAR_30),
     VAR_48, VAR_49,
     VAR_35, VAR_28,
     0,
     8,
     VAR_13,
     VAR_33,
     VAR_53,
     &VAR_54 );

    FUNC_8(VAR_25, VAR_29,
    FUNC_18( VAR_25, VAR_29 ) );


    VAR_56 = VAR_10;
    VAR_55.graphics_exposures = VAR_9;
    VAR_27 = FUNC_5( VAR_25,
     VAR_29,
     VAR_56,
     &VAR_55 );


    FUNC_10(VAR_25, VAR_29);


    VAR_52 = 0;
    while (!VAR_52)
    {
 FUNC_12(VAR_25, &VAR_26);
 if (VAR_26.type == VAR_7
     && !VAR_26.xexpose.count)
 {
     VAR_52 = 1;
 }
    }


    if (VAR_38)
 FUNC_9(VAR_25, VAR_29, VAR_23,
       VAR_1|VAR_2|VAR_17,
       VAR_11, VAR_11,
       VAR_29, VAR_16, VAR_6);

    if (VAR_37)
    {

 VAR_31 = FUNC_16(VAR_25) + VAR_22;


 VAR_39 = FUNC_15( VAR_25,
     VAR_33,
     8,
     VAR_36,
     0,
     &VAR_32,
     VAR_35,
     VAR_28 );

 FUNC_21(VAR_39->bytes_per_line * VAR_39->height);
 if (!VAR_39->data)
 {
     FUNC_23("");
     FUNC_1("shmat() failed in InitGraphics()");
 }


 if (!FUNC_14(VAR_25, &VAR_32))
     FUNC_1("XShmAttach() failed in InitGraphics()");

    }
    else
    {
 VAR_39 = FUNC_6( VAR_25,
        VAR_33,
        8,
        VAR_36,
        0,
        (char*)FUNC_22(VAR_35 * VAR_28),
        VAR_35, VAR_28,
        8,
        VAR_35 );

    }

    if (VAR_40 == 1)
 VAR_42[0] = (unsigned char *) (VAR_39->data);
    else
 VAR_42[0] = (unsigned char *) FUNC_22 (VAR_20 * VAR_19);

}
