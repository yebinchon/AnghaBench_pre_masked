
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {scalar_t__ id_length; scalar_t__ colormap_type; int image_type; int width; int height; int pixel_size; int attributes; void* y_origin; void* x_origin; int colormap_size; void* colormap_length; void* colormap_index; } ;
typedef TYPE_1__ TargaHeader ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (short) ;
 int * FUNC_2 (int) ;

void FUNC_3 ( byte *VAR_0, byte **VAR_1, int *VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 byte *VAR_7;
 int VAR_8, VAR_9;
 byte *VAR_10;
 TargaHeader VAR_11;
 byte *VAR_12;

 *VAR_1 = ((void*)0);

 VAR_10 = VAR_0;

 VAR_11.id_length = *VAR_10++;
 VAR_11.colormap_type = *VAR_10++;
 VAR_11.image_type = *VAR_10++;

 VAR_11.colormap_index = FUNC_1 ( *(short *)VAR_10 );
 VAR_10 += 2;
 VAR_11.colormap_length = FUNC_1 ( *(short *)VAR_10 );
 VAR_10 += 2;
 VAR_11.colormap_size = *VAR_10++;
 VAR_11.x_origin = FUNC_1 ( *(short *)VAR_10 );
 VAR_10 += 2;
 VAR_11.y_origin = FUNC_1 ( *(short *)VAR_10 );
 VAR_10 += 2;
 VAR_11.width = FUNC_1 ( *(short *)VAR_10 );
 VAR_10 += 2;
 VAR_11.height = FUNC_1 ( *(short *)VAR_10 );
 VAR_10 += 2;
 VAR_11.pixel_size = *VAR_10++;
 VAR_11.attributes = *VAR_10++;

 if (VAR_11.image_type!=2
  && VAR_11.image_type!=10
  && VAR_11.image_type != 3 )
 {
  FUNC_0("LoadTGA: Only type 2 (RGB), 3 (gray), and 10 (RGB) TGA images supported\n");
 }

 if ( VAR_11.colormap_type != 0 )
 {
  FUNC_0("LoadTGA: colormaps not supported\n" );
 }

 if ( ( VAR_11.pixel_size != 32 && VAR_11.pixel_size != 24 ) && VAR_11.image_type != 3 )
 {
  FUNC_0("LoadTGA: Only 32 or 24 bit images supported (no colormaps)\n");
 }

 VAR_4 = VAR_11.width;
 VAR_5 = VAR_11.height;
 VAR_6 = VAR_4 * VAR_5;

 if (VAR_2)
  *VAR_2 = VAR_4;
 if (VAR_3)
  *VAR_3 = VAR_5;

 VAR_12 = FUNC_2 (VAR_6*4);
 *VAR_1 = VAR_12;

 if (VAR_11.id_length != 0)
  VAR_10 += VAR_11.id_length;

 if ( VAR_11.image_type==2 || VAR_11.image_type == 3 )
 {

  for(VAR_8=VAR_5-1; VAR_8>=0; VAR_8--)
  {
   VAR_7 = VAR_12 + VAR_8*VAR_4*4;
   for(VAR_9=0; VAR_9<VAR_4; VAR_9++)
   {
    unsigned char VAR_13,VAR_14,VAR_15,VAR_16;
    switch (VAR_11.pixel_size)
    {

    case 8:
     VAR_15 = *VAR_10++;
     VAR_14 = VAR_15;
     VAR_13 = VAR_15;
     *VAR_7++ = VAR_13;
     *VAR_7++ = VAR_14;
     *VAR_7++ = VAR_15;
     *VAR_7++ = 255;
     break;

    case 24:
     VAR_15 = *VAR_10++;
     VAR_14 = *VAR_10++;
     VAR_13 = *VAR_10++;
     *VAR_7++ = VAR_13;
     *VAR_7++ = VAR_14;
     *VAR_7++ = VAR_15;
     *VAR_7++ = 255;
     break;
    case 32:
     VAR_15 = *VAR_10++;
     VAR_14 = *VAR_10++;
     VAR_13 = *VAR_10++;
     VAR_16 = *VAR_10++;
     *VAR_7++ = VAR_13;
     *VAR_7++ = VAR_14;
     *VAR_7++ = VAR_15;
     *VAR_7++ = VAR_16;
     break;
    default:

     break;
    }
   }
  }
 }
 else if (VAR_11.image_type==10) {
  unsigned char VAR_17,VAR_18,VAR_19,VAR_20,VAR_21,VAR_22,VAR_23;

  VAR_17 = 0;
  VAR_18 = 0;
  VAR_19 = 0;
  VAR_20 = 0xff;

  for(VAR_8=VAR_5-1; VAR_8>=0; VAR_8--) {
   VAR_7 = VAR_12 + VAR_8*VAR_4*4;
   for(VAR_9=0; VAR_9<VAR_4; ) {
    VAR_21= *VAR_10++;
    VAR_22 = 1 + (VAR_21 & 0x7f);
    if (VAR_21 & 0x80) {
     switch (VAR_11.pixel_size) {
      case 24:
        VAR_19 = *VAR_10++;
        VAR_18 = *VAR_10++;
        VAR_17 = *VAR_10++;
        VAR_20 = 255;
        break;
      case 32:
        VAR_19 = *VAR_10++;
        VAR_18 = *VAR_10++;
        VAR_17 = *VAR_10++;
        VAR_20 = *VAR_10++;
        break;
      default:

       break;
     }

     for(VAR_23=0;VAR_23<VAR_22;VAR_23++) {
      *VAR_7++=VAR_17;
      *VAR_7++=VAR_18;
      *VAR_7++=VAR_19;
      *VAR_7++=VAR_20;
      VAR_9++;
      if (VAR_9==VAR_4) {
       VAR_9=0;
       if (VAR_8>0)
        VAR_8--;
       else
        goto breakOut;
       VAR_7 = VAR_12 + VAR_8*VAR_4*4;
      }
     }
    }
    else {
     for(VAR_23=0;VAR_23<VAR_22;VAR_23++) {
      switch (VAR_11.pixel_size) {
       case 24:
         VAR_19 = *VAR_10++;
         VAR_18 = *VAR_10++;
         VAR_17 = *VAR_10++;
         *VAR_7++ = VAR_17;
         *VAR_7++ = VAR_18;
         *VAR_7++ = VAR_19;
         *VAR_7++ = 255;
         break;
       case 32:
         VAR_19 = *VAR_10++;
         VAR_18 = *VAR_10++;
         VAR_17 = *VAR_10++;
         VAR_20 = *VAR_10++;
         *VAR_7++ = VAR_17;
         *VAR_7++ = VAR_18;
         *VAR_7++ = VAR_19;
         *VAR_7++ = VAR_20;
         break;
       default:

        break;
      }
      VAR_9++;
      if (VAR_9==VAR_4) {
       VAR_9=0;
       if (VAR_8>0)
        VAR_8--;
       else
        goto breakOut;
       VAR_7 = VAR_12 + VAR_8*VAR_4*4;
      }
     }
    }
   }
   breakOut:;
  }
 }


}
