
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int saved_r0; int mode; int port; int device; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int) ;
 int FUNC_6 (char*,int ,int ,int ,int,int,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10( PIA *VAR_0, char * VAR_1, int VAR_2 )

{ int VAR_3, VAR_4, VAR_5;
 int VAR_6[2] = {0,0};

 VAR_0->saved_r0 = FUNC_7();
 FUNC_9(0xff); FUNC_8(20); FUNC_0(0x3d);
 FUNC_8(500);
 FUNC_9(VAR_0->saved_r0);

 FUNC_1(VAR_0);
 for (VAR_3=0;VAR_3<2;VAR_3++) {
                FUNC_5(VAR_0,0,6,0xa0+VAR_3*0x10);
                for (VAR_4=0;VAR_4<256;VAR_4++) {
                        FUNC_5(VAR_0,0,2,VAR_4^0xaa);
                        FUNC_5(VAR_0,0,3,VAR_4^0x55);
                        if (FUNC_4(VAR_0,0,2) != (VAR_4^0xaa)) VAR_6[VAR_3]++;
                        }
                }
 FUNC_2(VAR_0);

 FUNC_1(VAR_0);
        FUNC_3(VAR_0,VAR_1,512,0x10);
        VAR_5 = 0;
        for (VAR_4=0;VAR_4<128;VAR_4++) if (VAR_1[VAR_4] != VAR_4) VAR_5++;
 FUNC_2(VAR_0);

        if (VAR_2) {
            FUNC_6("%s: friq: port 0x%x, mode %d, test=(%d,%d,%d)\n",
                   VAR_0->device,VAR_0->port,VAR_0->mode,VAR_6[0],VAR_6[1],VAR_5);
        }

        return (VAR_5 || (VAR_6[0] && VAR_6[1]));
}
