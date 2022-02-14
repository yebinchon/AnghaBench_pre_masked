
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int manufacturer; int version; int encoding; int bits_per_pixel; int color_planes; int data; void* palette_type; void* bytes_per_line; void* vres; void* hres; void* ymax; void* xmax; scalar_t__ ymin; scalar_t__ xmin; } ;
typedef TYPE_1__ pcx_t ;
typedef int byte ;


 void* FUNC_0 (int) ;
 int FUNC_1 (char const*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

void FUNC_5 (const char *VAR_0, byte *VAR_1,
       int VAR_2, int VAR_3, byte *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 pcx_t *VAR_8;
 byte *VAR_9;

 VAR_8 = FUNC_3 (VAR_2*VAR_3*2+1000);
 FUNC_4 (VAR_8, 0, sizeof(*VAR_8));

 VAR_8->manufacturer = 0x0a;
 VAR_8->version = 5;
  VAR_8->encoding = 1;
 VAR_8->bits_per_pixel = 8;
 VAR_8->xmin = 0;
 VAR_8->ymin = 0;
 VAR_8->xmax = FUNC_0((short)(VAR_2-1));
 VAR_8->ymax = FUNC_0((short)(VAR_3-1));
 VAR_8->hres = FUNC_0((short)VAR_2);
 VAR_8->vres = FUNC_0((short)VAR_3);
 VAR_8->color_planes = 1;
 VAR_8->bytes_per_line = FUNC_0((short)VAR_2);
 VAR_8->palette_type = FUNC_0(1);


 VAR_9 = &VAR_8->data;

 for (VAR_5=0 ; VAR_5<VAR_3 ; VAR_5++)
 {
  for (VAR_6=0 ; VAR_6<VAR_2 ; VAR_6++)
  {
   if ( (*VAR_1 & 0xc0) != 0xc0)
    *VAR_9++ = *VAR_1++;
   else
   {
    *VAR_9++ = 0xc1;
    *VAR_9++ = *VAR_1++;
   }
  }
 }


 *VAR_9++ = 0x0c;
 for (VAR_5=0 ; VAR_5<768 ; VAR_5++)
  *VAR_9++ = *VAR_4++;


 VAR_7 = VAR_9 - (byte *)VAR_8;
 FUNC_1 (VAR_0, VAR_8, VAR_7);

 FUNC_2 (VAR_8);
}
