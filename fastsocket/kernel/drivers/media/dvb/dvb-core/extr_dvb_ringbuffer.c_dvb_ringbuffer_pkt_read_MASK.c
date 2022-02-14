
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_ringbuffer {int* data; size_t size; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,size_t*,size_t) ;

ssize_t FUNC_1(struct dvb_ringbuffer *VAR_2, size_t VAR_3,
    int VAR_4, u8* VAR_5, size_t VAR_6)
{
 size_t VAR_7;
 size_t VAR_8;
 size_t VAR_9;

 VAR_9 = VAR_2->data[VAR_3] << 8;
 VAR_9 |= VAR_2->data[(VAR_3 + 1) % VAR_2->size];
 if (VAR_4 > VAR_9) return -VAR_1;
 if ((VAR_4 + VAR_6) > VAR_9) VAR_6 = VAR_9 - VAR_4;

 VAR_3 = (VAR_3 + VAR_0 + VAR_4) % VAR_2->size;
 VAR_7 = VAR_6;
 VAR_8 = ((VAR_3 + VAR_6) > VAR_2->size) ? VAR_2->size - VAR_3 : 0;
 if (VAR_8 > 0) {
  FUNC_0(VAR_5, VAR_2->data+VAR_3, VAR_8);
  VAR_5 += VAR_8;
  VAR_7 -= VAR_8;
  VAR_3 = 0;
 }
 FUNC_0(VAR_5, VAR_2->data+VAR_3, VAR_7);
 return VAR_6;
}
