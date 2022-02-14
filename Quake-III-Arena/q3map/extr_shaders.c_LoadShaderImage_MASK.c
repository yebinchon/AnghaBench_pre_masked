
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* color; int width; int height; float* pixels; int averageColor; scalar_t__* shader; scalar_t__* editorimage; scalar_t__* lightimage; } ;
typedef TYPE_1__ shaderInfo_t ;
typedef scalar_t__ qboolean ;
typedef int byte ;


 int FUNC_0 (float*,int*) ;
 int FUNC_1 (char*,char*) ;
 int * FUNC_2 (char*,scalar_t__*) ;
 int FUNC_3 (int *,float**,int*,int*) ;
 int FUNC_4 (int *,float**,int*,int*) ;
 int FUNC_5 (float*) ;
 int FUNC_6 (float*,double,int ) ;
 int FUNC_7 (char*,scalar_t__*) ;
 int FUNC_8 (int *) ;
 char* VAR_0 ;
 float* FUNC_9 (int) ;
 int FUNC_10 (float*,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_11 (char*,char*,char*,scalar_t__*) ;

__attribute__((used)) static void FUNC_12( shaderInfo_t *VAR_2 ) {
 char VAR_3[1024];
 int VAR_4, VAR_5;
 float VAR_6[4];
  byte *VAR_7;
  qboolean VAR_8 = VAR_1;


 if ( VAR_2->lightimage[0] ) {
  FUNC_11( VAR_3, "%s%s", VAR_0, VAR_2->lightimage );
  FUNC_1( VAR_3, ".tga" );
    VAR_7 = FUNC_2(VAR_3, &VAR_8);
    if ( VAR_7 != ((void*)0)) {
      goto loadTga;
    }
  }


 if ( VAR_2->editorimage[0] ) {
  FUNC_11( VAR_3, "%s%s", VAR_0, VAR_2->editorimage );
  FUNC_1( VAR_3, ".tga" );
    VAR_7 = FUNC_2(VAR_3, &VAR_8);
    if ( VAR_7 != ((void*)0)) {
      goto loadTga;
    }
  }



  FUNC_11( VAR_3, "%s%s.tga", VAR_0, VAR_2->shader );
  VAR_7 = FUNC_2(VAR_3, &VAR_8);
  if ( VAR_7 != ((void*)0)) {
  goto loadTga;
 }

  FUNC_11( VAR_3, "%s%s.TGA", VAR_0, VAR_2->shader );
  VAR_7 = FUNC_2(VAR_3, &VAR_8);
  if ( VAR_7 != ((void*)0)) {
  goto loadTga;
 }


 FUNC_7("WARNING: Couldn't find image for shader %s\n", VAR_2->shader );

 VAR_2->color[0] = 1;
 VAR_2->color[1] = 1;
 VAR_2->color[2] = 1;
 VAR_2->width = 64;
 VAR_2->height = 64;
 VAR_2->pixels = FUNC_9( VAR_2->width * VAR_2->height * 4 );
 FUNC_10 ( VAR_2->pixels, 255, VAR_2->width * VAR_2->height * 4 );
 return;


loadTga:
  if ( VAR_8) {
   FUNC_4( VAR_7, &VAR_2->pixels, &VAR_2->width, &VAR_2->height );
  }
  else {



  }

  FUNC_8(VAR_7);

 VAR_5 = VAR_2->width * VAR_2->height;

 FUNC_5( VAR_6 );
 VAR_6[ 3 ] = 0;
 for ( VAR_4 = 0 ; VAR_4 < VAR_5 ; VAR_4++ ) {
  VAR_6[0] += VAR_2->pixels[ VAR_4 * 4 + 0 ];
  VAR_6[1] += VAR_2->pixels[ VAR_4 * 4 + 1 ];
  VAR_6[2] += VAR_2->pixels[ VAR_4 * 4 + 2 ];
  VAR_6[3] += VAR_2->pixels[ VAR_4 * 4 + 3 ];
 }
 FUNC_0( VAR_6, VAR_2->color );
 FUNC_6( VAR_6, 1.0/VAR_5, VAR_2->averageColor );
}
