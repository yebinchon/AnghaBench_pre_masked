
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mode; int port; int device; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*,int) ;
 int FUNC_7 (char*,int ,int ,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_8( PIA *VAR_0, char * VAR_1, int VAR_2 )

{ int VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7[2] = {0,0};

        FUNC_4(VAR_0);
 VAR_6 = FUNC_0(0xd);
 FUNC_5(VAR_0);

 FUNC_4(VAR_0);
 for (VAR_4=0;VAR_4<2;VAR_4++) {
       FUNC_3(6,0xa0+VAR_4*0x10);
            for (VAR_3=0;VAR_3<256;VAR_3++) {
                FUNC_3(2,VAR_3^0xaa);
                FUNC_3(3,VAR_3^0x55);
                if (FUNC_1(2) != (VAR_3^0xaa)) VAR_7[VAR_4]++;
                }
     }
        FUNC_5(VAR_0);

        VAR_5 = 0;
        FUNC_4(VAR_0);
        FUNC_2(0x13,1); FUNC_2(0x13,0); FUNC_2(0xa,0x11);
        FUNC_6(VAR_0,VAR_1,512);

        for (VAR_3=0;VAR_3<256;VAR_3++) {
            if ((VAR_1[2*VAR_3] & 0xff) != VAR_3) VAR_5++;
            if ((VAR_1[2*VAR_3+1] & 0xff) != (0xff-VAR_3)) VAR_5++;
        }
        FUNC_5(VAR_0);

        if (VAR_2) {
            FUNC_7("%s: epat: port 0x%x, mode %d, ccr %x, test=(%d,%d,%d)\n",
     VAR_0->device,VAR_0->port,VAR_0->mode,VAR_6,VAR_7[0],VAR_7[1],VAR_5);
 }

        return (VAR_7[0] && VAR_7[1]) || VAR_5;
}
