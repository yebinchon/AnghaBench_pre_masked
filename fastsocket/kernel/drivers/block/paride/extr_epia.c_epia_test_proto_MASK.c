
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mode; int port; int device; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (char*,int ,int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_6( PIA *VAR_0, char * VAR_1, int VAR_2 )

{ int VAR_3, VAR_4, VAR_5;
 int VAR_6[2] = {0,0};

        FUNC_2(VAR_0);
        for (VAR_3=0;VAR_3<2;VAR_3++) {
            FUNC_1(6,0xa0+VAR_3*0x10);
            for (VAR_4=0;VAR_4<256;VAR_4++) {
                FUNC_1(2,VAR_4^0xaa);
                FUNC_1(3,VAR_4^0x55);
                if (FUNC_0(2) != (VAR_4^0xaa)) VAR_6[VAR_3]++;
                }
     FUNC_1(2,1); FUNC_1(3,1);
            }
        FUNC_3(VAR_0);

        VAR_5 = 0;
        FUNC_2(VAR_0);
        FUNC_1(0x84,8);
        FUNC_4(VAR_0,VAR_1,512);
        for (VAR_4=0;VAR_4<256;VAR_4++) {
            if ((VAR_1[2*VAR_4] & 0xff) != ((VAR_4+1) & 0xff)) VAR_5++;
            if ((VAR_1[2*VAR_4+1] & 0xff) != ((-2-VAR_4) & 0xff)) VAR_5++;
        }
        FUNC_1(0x84,0);
        FUNC_3(VAR_0);

        if (VAR_2) {
            FUNC_5("%s: epia: port 0x%x, mode %d, test=(%d,%d,%d)\n",
                   VAR_0->device,VAR_0->port,VAR_0->mode,VAR_6[0],VAR_6[1],VAR_5);
        }

        return (VAR_6[0] && VAR_6[1]) || VAR_5;

}
