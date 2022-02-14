
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int counter ;
struct TYPE_6__ {TYPE_2__* cluster; scalar_t__ jobid_seed; } ;
struct TYPE_5__ {TYPE_1__* myself; } ;
struct TYPE_4__ {int * name; } ;
typedef int SHA1_CTX ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 TYPE_3__ VAR_1 ;

void FUNC_3(char *VAR_2, int VAR_3, int VAR_4) {
    char *VAR_5 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                    "abcdefghijklmnopqrstuvwxyz"
                    "0123456789+/";
    char *VAR_6 = "0123456789abcdef";
    SHA1_CTX VAR_7;
    unsigned char VAR_8[2], VAR_9[20];
    int VAR_10;
    static uint64_t VAR_11;


    VAR_11++;
    FUNC_1(&VAR_7);
    FUNC_2(&VAR_7,(unsigned char*)VAR_1.jobid_seed,VAR_0);
    FUNC_2(&VAR_7,(unsigned char*)&VAR_11,sizeof(VAR_11));
    FUNC_0(VAR_9,&VAR_7);

    VAR_3 /= 60;
    if (VAR_3 > 65535) VAR_3 = 65535;
    if (VAR_3 < 0) VAR_3 = 1;


    VAR_3 = (VAR_4 > 0) ? (VAR_3|1) : (VAR_3 & ~1);

    VAR_8[0] = (VAR_3&0xff00)>>8;
    VAR_8[1] = VAR_3&0xff;

    *VAR_2++ = 'D';
    *VAR_2++ = '-';


    for (VAR_10 = 0; VAR_10 < 8; VAR_10++) *VAR_2++ = VAR_1.cluster->myself->name[VAR_10];
    *VAR_2++ = '-';




    unsigned char *VAR_12 = VAR_9;
    for (VAR_10 = 0; VAR_10 < 6; VAR_10++) {
        VAR_2[0] = VAR_5[VAR_12[0]>>2];
        VAR_2[1] = VAR_5[(VAR_12[0]<<4|VAR_12[1]>>4)&63];
        VAR_2[2] = VAR_5[(VAR_12[1]<<2|VAR_12[2]>>6)&63];
        VAR_2[3] = VAR_5[VAR_12[3]&63];
        VAR_2 += 4;
        VAR_12 += 3;
    }
    *VAR_2++ = '-';


    VAR_2[0] = VAR_6[(VAR_8[0]&0xf0)>>4];
    VAR_2[1] = VAR_6[VAR_8[0]&0xf];
    VAR_2[2] = VAR_6[(VAR_8[1]&0xf0)>>4];
    VAR_2[3] = VAR_6[VAR_8[1]&0xf];
    VAR_2 += 4;
}
