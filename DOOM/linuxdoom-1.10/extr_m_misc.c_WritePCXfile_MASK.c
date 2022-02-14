
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int manufacturer; int version; int encoding; int bits_per_pixel; int color_planes; int data; int filler; void* palette_type; void* bytes_per_line; int palette; void* vres; void* hres; void* ymax; void* xmax; scalar_t__ ymin; scalar_t__ xmin; } ;
typedef TYPE_1__ pcx_t ;
typedef int byte ;


 int FUNC_0 (char*,TYPE_1__*,int) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int,int ,int *) ;
 int FUNC_4 (int ,int ,int) ;

void
FUNC_5
( char* VAR_1,
  byte* VAR_2,
  int VAR_3,
  int VAR_4,
  byte* VAR_5 )
{
    int VAR_6;
    int VAR_7;
    pcx_t* VAR_8;
    byte* VAR_9;

    VAR_8 = FUNC_3 (VAR_3*VAR_4*2+1000, VAR_0, ((void*)0));

    VAR_8->manufacturer = 0x0a;
    VAR_8->version = 5;
    VAR_8->encoding = 1;
    VAR_8->bits_per_pixel = 8;
    VAR_8->xmin = 0;
    VAR_8->ymin = 0;
    VAR_8->xmax = FUNC_1(VAR_3-1);
    VAR_8->ymax = FUNC_1(VAR_4-1);
    VAR_8->hres = FUNC_1(VAR_3);
    VAR_8->vres = FUNC_1(VAR_4);
    FUNC_4 (VAR_8->palette,0,sizeof(VAR_8->palette));
    VAR_8->color_planes = 1;
    VAR_8->bytes_per_line = FUNC_1(VAR_3);
    VAR_8->palette_type = FUNC_1(2);
    FUNC_4 (VAR_8->filler,0,sizeof(VAR_8->filler));



    VAR_9 = &VAR_8->data;

    for (VAR_6=0 ; VAR_6<VAR_3*VAR_4 ; VAR_6++)
    {
 if ( (*VAR_2 & 0xc0) != 0xc0)
     *VAR_9++ = *VAR_2++;
 else
 {
     *VAR_9++ = 0xc1;
     *VAR_9++ = *VAR_2++;
 }
    }


    *VAR_9++ = 0x0c;
    for (VAR_6=0 ; VAR_6<768 ; VAR_6++)
 *VAR_9++ = *VAR_5++;


    VAR_7 = VAR_9 - (byte *)VAR_8;
    FUNC_0 (VAR_1, VAR_8, VAR_7);

    FUNC_2 (VAR_8);
}
