
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em28xx_dmaqueue {unsigned long pos; } ;
struct TYPE_2__ {unsigned long size; } ;
struct em28xx_buffer {TYPE_1__ vb; scalar_t__ top_field; } ;
struct em28xx {int width; scalar_t__ progressive; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (void*,void*,int) ;

__attribute__((used)) static void FUNC_2(struct em28xx *VAR_0,
         struct em28xx_dmaqueue *VAR_1,
         struct em28xx_buffer *VAR_2,
         unsigned char *VAR_3,
         unsigned char *VAR_4, unsigned long VAR_5)
{
 void *VAR_6, *VAR_7, *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14 = VAR_0->width << 1;

 if (VAR_1->pos + VAR_5 > VAR_2->vb.size)
  VAR_5 = VAR_2->vb.size - VAR_1->pos;

 VAR_8 = VAR_3;
 VAR_13 = VAR_5;

 if (VAR_0->progressive)
  VAR_6 = VAR_4;
 else {

  if (VAR_2->top_field)
   VAR_6 = VAR_4;
  else
   VAR_6 = VAR_4 + VAR_14;
 }

 VAR_9 = VAR_1->pos / VAR_14;
 VAR_10 = VAR_1->pos % VAR_14;

 if (VAR_0->progressive)
  VAR_11 = VAR_9 * VAR_14 + VAR_10;
 else
  VAR_11 = VAR_9 * VAR_14 * 2 + VAR_10;

 VAR_7 = VAR_6 + VAR_11;
 VAR_12 = VAR_14 - VAR_10;
 VAR_12 = VAR_12 > VAR_13 ? VAR_13 : VAR_12;

 if ((char *)VAR_7 + VAR_12 > (char *)VAR_4 + VAR_2->vb.size) {
  FUNC_0("Overflow of %zi bytes past buffer end (1)\n",
          ((char *)VAR_7 + VAR_12) -
          ((char *)VAR_4 + VAR_2->vb.size));
  VAR_13 = (char *)VAR_4 + VAR_2->vb.size - (char *)VAR_7;
  VAR_12 = VAR_13;
 }
 if (VAR_12 <= 0)
  return;
 FUNC_1(VAR_7, VAR_8, VAR_12);

 VAR_13 -= VAR_12;

 while (VAR_13 > 0) {
  VAR_7 += VAR_12 + VAR_14;
  VAR_8 += VAR_12;
  if (VAR_14 > VAR_13)
   VAR_12 = VAR_13;
  else
   VAR_12 = VAR_14;

  if ((char *)VAR_7 + VAR_12 > (char *)VAR_4 +
      VAR_2->vb.size) {
   FUNC_0("Overflow of %zi bytes past buffer end"
           "(2)\n",
           ((char *)VAR_7 + VAR_12) -
           ((char *)VAR_4 + VAR_2->vb.size));
   VAR_12 = VAR_13 = (char *)VAR_4 + VAR_2->vb.size -
        (char *)VAR_7;
  }
  if (VAR_12 <= 0)
   break;

  FUNC_1(VAR_7, VAR_8, VAR_12);

  VAR_13 -= VAR_12;
 }

 VAR_1->pos += VAR_5;
}
