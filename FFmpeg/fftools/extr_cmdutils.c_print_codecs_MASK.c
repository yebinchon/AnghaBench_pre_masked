
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int capabilities; char* name; char* long_name; } ;
struct TYPE_7__ {char* name; int type; int id; } ;
typedef TYPE_1__ AVCodecDescriptor ;
typedef TYPE_2__ AVCodec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__ const**) ;
 unsigned int FUNC_1 (TYPE_1__ const***) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ,TYPE_2__ const*,int) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static void FUNC_6(int VAR_5)
{
    const AVCodecDescriptor **VAR_6;
    unsigned VAR_7, VAR_8 = FUNC_1(&VAR_6);

    FUNC_4("%s:\n"
           " V..... = Video\n"
           " A..... = Audio\n"
           " S..... = Subtitle\n"
           " .F.... = Frame-level multithreading\n"
           " ..S... = Slice-level multithreading\n"
           " ...X.. = Codec is experimental\n"
           " ....B. = Supports draw_horiz_band\n"
           " .....D = Supports direct rendering method 1\n"
           " ------\n",
           VAR_5 ? "Encoders" : "Decoders");
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
        const AVCodecDescriptor *VAR_9 = VAR_6[VAR_7];
        const AVCodec *VAR_10 = ((void*)0);

        while ((VAR_10 = FUNC_3(VAR_9->id, VAR_10, VAR_5))) {
            FUNC_4(" %c", FUNC_2(VAR_9->type));
            FUNC_4((VAR_10->capabilities & VAR_3) ? "F" : ".");
            FUNC_4((VAR_10->capabilities & VAR_4) ? "S" : ".");
            FUNC_4((VAR_10->capabilities & VAR_2) ? "X" : ".");
            FUNC_4((VAR_10->capabilities & VAR_1)?"B" : ".");
            FUNC_4((VAR_10->capabilities & VAR_0) ? "D" : ".");

            FUNC_4(" %-20s %s", VAR_10->name, VAR_10->long_name ? VAR_10->long_name : "");
            if (FUNC_5(VAR_10->name, VAR_9->name))
                FUNC_4(" (codec %s)", VAR_9->name);

            FUNC_4("\n");
        }
    }
    FUNC_0(VAR_6);
}
