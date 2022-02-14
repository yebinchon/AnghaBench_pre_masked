
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_ringbuffer {size_t pread; int* data; size_t size; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_ringbuffer*) ;

ssize_t FUNC_1(struct dvb_ringbuffer *VAR_2, size_t VAR_3, size_t* VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;

 if (VAR_3 == -1) {
        VAR_3 = VAR_2->pread;
 } else {
  VAR_6 = VAR_2->data[VAR_3] << 8;
  VAR_6 |= VAR_2->data[(VAR_3 + 1) % VAR_2->size];
  VAR_3 = (VAR_3 + VAR_6 + VAR_0) % VAR_2->size;
 }

 VAR_5 = (VAR_3 - VAR_2->pread) % VAR_2->size;

 while((FUNC_0(VAR_2) - VAR_5) > VAR_0) {

  VAR_6 = VAR_2->data[VAR_3] << 8;
  VAR_6 |= VAR_2->data[(VAR_3 + 1) % VAR_2->size];
  VAR_7 = VAR_2->data[(VAR_3 + 2) % VAR_2->size];

  if (VAR_7 == VAR_1) {
   *VAR_4 = VAR_6;
   return VAR_3;
  }

  VAR_5 += VAR_6 + VAR_0;
  VAR_3 = (VAR_3 + VAR_6 + VAR_0) % VAR_2->size;
 }


 return -1;
}
