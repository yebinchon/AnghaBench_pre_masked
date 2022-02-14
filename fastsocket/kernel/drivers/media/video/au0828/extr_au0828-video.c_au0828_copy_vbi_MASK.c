
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct au0828_dmaqueue {unsigned long pos; } ;
struct au0828_dev {int vbi_width; int vbi_height; } ;
struct TYPE_2__ {unsigned long size; } ;
struct au0828_buffer {scalar_t__ top_field; TYPE_1__ vb; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct au0828_dev *VAR_0,
         struct au0828_dmaqueue *VAR_1,
         struct au0828_buffer *VAR_2,
         unsigned char *VAR_3,
         unsigned char *VAR_4, unsigned long VAR_5)
{
 unsigned char *VAR_6, *VAR_7;
 int VAR_8;
 int VAR_9, VAR_10 = 0;

 if (VAR_0 == ((void*)0)) {
  FUNC_0("dev is null\n");
  return;
 }

 if (VAR_1 == ((void*)0)) {
  FUNC_0("dma_q is null\n");
  return;
 }
 if (VAR_2 == ((void*)0))
  return;
 if (VAR_3 == ((void*)0)) {
  FUNC_0("p is null\n");
  return;
 }
 if (VAR_4 == ((void*)0)) {
  FUNC_0("outp is null\n");
  return;
 }

 VAR_8 = VAR_0->vbi_width;

 if (VAR_1->pos + VAR_5 > VAR_2->vb.size)
  VAR_5 = VAR_2->vb.size - VAR_1->pos;

 VAR_7 = VAR_3;
 VAR_6 = VAR_4 + (VAR_1->pos / 2);


 if (VAR_2->top_field == 0)
  VAR_6 += VAR_8 * VAR_0->vbi_height;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9 += 2)
  VAR_6[VAR_10++] = VAR_7[VAR_9+1];

 VAR_1->pos += VAR_5;
}
