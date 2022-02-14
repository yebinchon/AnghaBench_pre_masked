
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
struct TYPE_4__ {scalar_t__ status; int* buf; float xpos; float ypos; float width; float height; int CIN_WIDTH; int drawX; int CIN_HEIGHT; int drawY; void* dirty; } ;
struct TYPE_3__ {int (* DrawStretchRaw ) (float,float,float,float,int,int,int*,int,void*) ;} ;


 scalar_t__ VAR_0 ;
 int* FUNC_0 (int) ;
 int FUNC_1 (int*) ;
 int VAR_1 ;
 int FUNC_2 (float*,float*,float*,float*) ;
 TYPE_2__* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (float,float,float,float,int,int,int*,int,void*) ;
 int FUNC_4 (float,float,float,float,int,int,int*,int,void*) ;

void FUNC_5 (int VAR_6) {
 float VAR_7, VAR_8, VAR_9, VAR_10;
 byte *VAR_11;

 if (VAR_6 < 0 || VAR_6>= VAR_1 || VAR_2[VAR_6].status == VAR_0) return;

 if (!VAR_2[VAR_6].buf) {
  return;
 }

 VAR_7 = VAR_2[VAR_6].xpos;
 VAR_8 = VAR_2[VAR_6].ypos;
 VAR_9 = VAR_2[VAR_6].width;
 VAR_10 = VAR_2[VAR_6].height;
 VAR_11 = VAR_2[VAR_6].buf;
 FUNC_2( &VAR_7, &VAR_8, &VAR_9, &VAR_10 );

 if (VAR_2[VAR_6].dirty && (VAR_2[VAR_6].CIN_WIDTH != VAR_2[VAR_6].drawX || VAR_2[VAR_6].CIN_HEIGHT != VAR_2[VAR_6].drawY)) {
  int VAR_12, VAR_13, *VAR_14, *VAR_15, VAR_16, VAR_17, VAR_18;

  VAR_16 = VAR_2[VAR_6].CIN_WIDTH/256;
  VAR_17 = VAR_2[VAR_6].CIN_HEIGHT/256;
                VAR_18 = 8;
                if (VAR_2[VAR_6].CIN_WIDTH==512) {
                    VAR_18 = 9;
                }

  VAR_15 = (int*)VAR_11;
  VAR_14 = FUNC_0( 256*256*4 );
                if (VAR_16==2 && VAR_17==2) {
                    byte *VAR_19, *VAR_20;
                    int VAR_21, VAR_22;

                    VAR_19 = (byte *)VAR_14;
                    VAR_20 = (byte *)VAR_15;
                    for (VAR_13 = 0; VAR_13<256; VAR_13++) {
                            VAR_22 = VAR_13<<12;
                            for (VAR_12 = 0; VAR_12<2048; VAR_12+=8) {
                                for(VAR_21 = VAR_12;VAR_21<(VAR_12+4);VAR_21++) {
                                    *VAR_19=(VAR_20[VAR_22+VAR_21]+VAR_20[VAR_22+4+VAR_21]+VAR_20[VAR_22+2048+VAR_21]+VAR_20[VAR_22+2048+4+VAR_21])>>2;
                                    VAR_19++;
                                }
                            }
                    }
                } else if (VAR_16==2 && VAR_17==1) {
                    byte *VAR_23, *VAR_24;
                    int VAR_25, VAR_26;

                    VAR_23 = (byte *)VAR_14;
                    VAR_24 = (byte *)VAR_15;
                    for (VAR_13 = 0; VAR_13<256; VAR_13++) {
                            VAR_26 = VAR_13<<11;
                            for (VAR_12 = 0; VAR_12<2048; VAR_12+=8) {
                                for(VAR_25 = VAR_12;VAR_25<(VAR_12+4);VAR_25++) {
                                    *VAR_23=(VAR_24[VAR_26+VAR_25]+VAR_24[VAR_26+4+VAR_25])>>1;
                                    VAR_23++;
                                }
                            }
                    }
                } else {
                    for (VAR_13 = 0; VAR_13<256; VAR_13++) {
                            for (VAR_12 = 0; VAR_12<256; VAR_12++) {
                                    VAR_14[(VAR_13<<8)+VAR_12] = VAR_15[((VAR_13*VAR_17)<<VAR_18) + (VAR_12*VAR_16)];
                            }
                    }
                }
  VAR_5.DrawStretchRaw( VAR_7, VAR_8, VAR_9, VAR_10, 256, 256, (byte *)VAR_14, VAR_6, VAR_4);
  VAR_2[VAR_6].dirty = VAR_3;
  FUNC_1(VAR_14);
  return;
 }

 VAR_5.DrawStretchRaw( VAR_7, VAR_8, VAR_9, VAR_10, VAR_2[VAR_6].drawX, VAR_2[VAR_6].drawY, VAR_11, VAR_6, VAR_2[VAR_6].dirty);
 VAR_2[VAR_6].dirty = VAR_3;
}
