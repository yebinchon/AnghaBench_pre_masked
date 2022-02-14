
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; char* data; } ;
struct qdio_buffer {TYPE_1__* element; } ;
struct TYPE_2__ {char* addr; int length; scalar_t__ eflags; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline void FUNC_0(struct sk_buff *VAR_4,
 struct qdio_buffer *VAR_5, int VAR_6, int *VAR_7,
 int VAR_8)
{
 int VAR_9 = VAR_4->len;
 int VAR_10;
 int VAR_11;
 char *VAR_12;
 int VAR_13 ;

 VAR_11 = *VAR_7;
 VAR_12 = VAR_4->data;
 VAR_13 = (VAR_6 == 0 ? 1 : 0);

 if (VAR_8 >= 0) {
  VAR_12 = VAR_4->data + VAR_8;
  VAR_9 -= VAR_8;
  VAR_13 = 0;
 }

 while (VAR_9 > 0) {

  VAR_10 = VAR_0 - ((unsigned long) VAR_12 % VAR_0);
  if (VAR_9 < VAR_10)
   VAR_10 = VAR_9;

  VAR_5->element[VAR_11].addr = VAR_12;
  VAR_5->element[VAR_11].length = VAR_10;
  VAR_9 -= VAR_10;
  if (!VAR_9) {
   if (VAR_13)
    VAR_5->element[VAR_11].eflags = 0;
   else
    VAR_5->element[VAR_11].eflags =
        VAR_2;
  } else {
   if (VAR_13)
    VAR_5->element[VAR_11].eflags =
        VAR_1;
   else
    VAR_5->element[VAR_11].eflags =
        VAR_3;
  }
  VAR_12 += VAR_10;
  VAR_11++;
  VAR_13 = 0;
 }
 *VAR_7 = VAR_11;
}
