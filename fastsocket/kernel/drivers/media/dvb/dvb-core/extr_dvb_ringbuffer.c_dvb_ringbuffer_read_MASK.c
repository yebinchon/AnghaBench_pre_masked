
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_ringbuffer {size_t pread; size_t size; scalar_t__ data; } ;


 int FUNC_0 (int *,scalar_t__,size_t) ;

void FUNC_1(struct dvb_ringbuffer *VAR_0, u8 *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_2;
 size_t VAR_4;

 VAR_4 = (VAR_0->pread + VAR_2 > VAR_0->size) ? VAR_0->size - VAR_0->pread : 0;
 if (VAR_4 > 0) {
  FUNC_0(VAR_1, VAR_0->data+VAR_0->pread, VAR_4);
  VAR_1 += VAR_4;
  VAR_3 -= VAR_4;
  VAR_0->pread = 0;
 }
 FUNC_0(VAR_1, VAR_0->data+VAR_0->pread, VAR_3);

 VAR_0->pread = (VAR_0->pread + VAR_3) % VAR_0->size;
}
