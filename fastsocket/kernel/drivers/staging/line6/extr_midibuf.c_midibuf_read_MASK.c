
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MidiBuffer {int size; size_t pos_read; int* buf; int command_prev; scalar_t__ full; int split; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int*,int) ;
 int FUNC_1 (struct MidiBuffer*) ;
 scalar_t__ FUNC_2 (struct MidiBuffer*) ;
 int FUNC_3 (int) ;

int FUNC_4(struct MidiBuffer *VAR_1, unsigned char *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5, VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 int VAR_10;


 if (VAR_3 < 3)
  return -VAR_0;

 if (FUNC_2(VAR_1))
  return 0;

 VAR_4 = FUNC_1(VAR_1);

 if (VAR_3 > VAR_4)
  VAR_3 = VAR_4;

 VAR_5 = VAR_1->size - VAR_1->pos_read;


 VAR_7 = VAR_1->buf[VAR_1->pos_read];

 if (VAR_7 & 0x80) {
  VAR_8 = FUNC_3(VAR_7);
  VAR_1->command_prev = VAR_7;
 } else {
  if (VAR_1->command_prev > 0) {
   int VAR_11 = FUNC_3(VAR_1->command_prev);

   if (VAR_11 > 0) {
    VAR_8 = VAR_11 - 1;
    VAR_9 = 1;
   } else
    VAR_8 = -1;
  } else
   VAR_8 = -1;
 }

 if (VAR_8 < 0) {

  if (VAR_3 < VAR_5) {

   for (VAR_10 = 1; VAR_10 < VAR_3; ++VAR_10)
    if (VAR_1->buf[VAR_1->pos_read + VAR_10] & 0x80)
     break;

   VAR_8 = VAR_10;
  } else {

   VAR_6 = VAR_3 - VAR_5;

   for (VAR_10 = 1; VAR_10 < VAR_5; ++VAR_10)
    if (VAR_1->buf[VAR_1->pos_read + VAR_10] & 0x80)
     break;

   if (VAR_10 < VAR_5)
    VAR_8 = VAR_10;
   else {
    for (VAR_10 = 0; VAR_10 < VAR_6; ++VAR_10)
     if (VAR_1->buf[VAR_10] & 0x80)
      break;

    VAR_8 = VAR_5 + VAR_10;
   }
  }

  if (VAR_8 == VAR_3)
   VAR_8 = -1;
 }

 if (VAR_8 < 0) {
  if (!VAR_1->split)
   return 0;
 } else {
  if (VAR_3 < VAR_8)
   return 0;

  VAR_3 = VAR_8;
 }

 if (VAR_3 < VAR_5) {

  FUNC_0(VAR_2 + VAR_9, VAR_1->buf + VAR_1->pos_read, VAR_3);
  VAR_1->pos_read += VAR_3;
 } else {

  VAR_6 = VAR_3 - VAR_5;
  FUNC_0(VAR_2 + VAR_9, VAR_1->buf + VAR_1->pos_read, VAR_5);
  FUNC_0(VAR_2 + VAR_9 + VAR_5, VAR_1->buf, VAR_6);
  VAR_1->pos_read = VAR_6;
 }

 if (VAR_9)
  VAR_2[0] = VAR_1->command_prev;

 VAR_1->full = 0;
 return VAR_3 + VAR_9;
}
