
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eerbuffer {unsigned long tail; unsigned long buffersize; scalar_t__* buffer; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_1 (struct eerbuffer*) ;
 int FUNC_2 (char*,scalar_t__,unsigned long) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct eerbuffer *VAR_1, char *VAR_2, int VAR_3)
{

 unsigned long VAR_4,VAR_5;
 unsigned long VAR_6, VAR_7, VAR_8;
 char *VAR_9;

 VAR_8 = FUNC_3(VAR_3, FUNC_1(VAR_1));
 VAR_9 = VAR_2;
 VAR_6 = VAR_8;
 while (VAR_6 > 0) {
   VAR_4 = VAR_1->tail / VAR_0;
   VAR_5 = VAR_1->tail % VAR_0;
  VAR_7 = FUNC_3(VAR_6, VAR_0 - VAR_5);
  FUNC_2(VAR_9, VAR_1->buffer[VAR_4] + VAR_5, VAR_7);
  VAR_9 += VAR_7;
  VAR_6 -= VAR_7;
  VAR_1->tail += VAR_7;
  if (VAR_1->tail == VAR_1->buffersize)
   VAR_1->tail = 0;
  FUNC_0(VAR_1->tail > VAR_1->buffersize);
 }
 return VAR_8;
}
