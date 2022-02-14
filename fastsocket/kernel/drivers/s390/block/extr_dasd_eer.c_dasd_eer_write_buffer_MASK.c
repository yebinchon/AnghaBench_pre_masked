
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eerbuffer {unsigned long head; unsigned long buffersize; scalar_t__* buffer; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int FUNC_1 (scalar_t__,char*,unsigned long) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct eerbuffer *VAR_1,
      char *VAR_2, int VAR_3)
{

 unsigned long VAR_4,VAR_5;
 unsigned long VAR_6, VAR_7;
 char *VAR_8;

 VAR_8 = VAR_2;
 VAR_6 = VAR_3;
 while (VAR_6 > 0) {
   VAR_4 = VAR_1->head / VAR_0;
   VAR_5 = VAR_1->head % VAR_0;
  VAR_7 = FUNC_2(VAR_6, VAR_0 - VAR_5);
  FUNC_1(VAR_1->buffer[VAR_4]+VAR_5, VAR_8, VAR_7);
  VAR_8 += VAR_7;
  VAR_6 -= VAR_7;
  VAR_1->head += VAR_7;
  if (VAR_1->head == VAR_1->buffersize)
   VAR_1->head = 0;
  FUNC_0(VAR_1->head > VAR_1->buffersize);
 }
}
