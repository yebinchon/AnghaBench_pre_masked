
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MidiBuffer {int size; int pos_write; int pos_read; int full; scalar_t__ buf; } ;


 int FUNC_0 (scalar_t__,unsigned char*,int) ;
 int FUNC_1 (struct MidiBuffer*) ;
 scalar_t__ FUNC_2 (struct MidiBuffer*) ;

int FUNC_3(struct MidiBuffer *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4, VAR_5;
 int VAR_6 = 0;

 if (FUNC_2(VAR_0) || (VAR_2 <= 0))
  return 0;


 if (VAR_1[VAR_2 - 1] == 0xfe) {
  --VAR_2;
  VAR_6 = 1;
 }

 VAR_3 = FUNC_1(VAR_0);

 if (VAR_2 > VAR_3)
  VAR_2 = VAR_3;

 if (VAR_2 > 0) {
  VAR_4 = VAR_0->size - VAR_0->pos_write;

  if (VAR_2 < VAR_4) {

   FUNC_0(VAR_0->buf + VAR_0->pos_write, VAR_1, VAR_2);
   VAR_0->pos_write += VAR_2;
  } else {

   VAR_5 = VAR_2 - VAR_4;
   FUNC_0(VAR_0->buf + VAR_0->pos_write, VAR_1, VAR_4);
   FUNC_0(VAR_0->buf, VAR_1 + VAR_4, VAR_5);
   VAR_0->pos_write = VAR_5;
  }

  if (VAR_0->pos_write == VAR_0->pos_read)
   VAR_0->full = 1;
 }

 return VAR_2 + VAR_6;
}
