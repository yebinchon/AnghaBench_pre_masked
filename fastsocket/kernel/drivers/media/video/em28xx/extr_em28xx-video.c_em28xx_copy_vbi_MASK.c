
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em28xx_dmaqueue {unsigned long pos; } ;
struct TYPE_2__ {unsigned long size; } ;
struct em28xx_buffer {scalar_t__ top_field; TYPE_1__ vb; } ;
struct em28xx {int vbi_width; int vbi_height; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*,void*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct em28xx *VAR_0,
         struct em28xx_dmaqueue *VAR_1,
         struct em28xx_buffer *VAR_2,
         unsigned char *VAR_3,
         unsigned char *VAR_4, unsigned long VAR_5)
{
 void *VAR_6, *VAR_7;
 int VAR_8;
 int VAR_9;

 if (VAR_0 == ((void*)0)) {
  FUNC_0("dev is null\n");
  return;
 }
 VAR_9 = VAR_0->vbi_width;

 if (VAR_1 == ((void*)0)) {
  FUNC_0("dma_q is null\n");
  return;
 }
 if (VAR_2 == ((void*)0)) {
  return;
 }
 if (VAR_3 == ((void*)0)) {
  FUNC_0("p is null\n");
  return;
 }
 if (VAR_4 == ((void*)0)) {
  FUNC_0("outp is null\n");
  return;
 }

 if (VAR_1->pos + VAR_5 > VAR_2->vb.size)
  VAR_5 = VAR_2->vb.size - VAR_1->pos;

 VAR_7 = VAR_3;

 VAR_6 = VAR_4 + VAR_1->pos;
 VAR_8 = VAR_1->pos;


 if (VAR_2->top_field == 0) {
  VAR_6 += VAR_9 * VAR_0->vbi_height;
  VAR_8 += VAR_9 * VAR_0->vbi_height;
 }

 FUNC_1(VAR_6, VAR_7, VAR_5);
 VAR_1->pos += VAR_5;
}
