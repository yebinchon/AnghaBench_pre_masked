
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dvb_ringbuffer {int queue; scalar_t__ pwrite; scalar_t__ pread; } ;


 int FUNC_0 (struct dvb_ringbuffer*,int) ;
 int FUNC_1 (struct dvb_ringbuffer*,int) ;
 int FUNC_2 (int,char*,unsigned long,unsigned long) ;
 int FUNC_3 (struct dvb_ringbuffer*) ;
 int FUNC_4 (struct dvb_ringbuffer*,void*,size_t) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;

int FUNC_7(void *VAR_0, struct dvb_ringbuffer *VAR_1, int VAR_2)
{
 int VAR_3;
 u32 VAR_4;
 u16 VAR_5;

 if (!VAR_2) {
  FUNC_6(&VAR_1->queue);
  return -1;
 }
 while (1) {
  VAR_3 = FUNC_3(VAR_1);
  if (VAR_3 < 6) {
   FUNC_6(&VAR_1->queue);
   return -1;
  }
  VAR_4 = FUNC_0(VAR_1, 0) << 24;
  VAR_4 |= FUNC_0(VAR_1, 1) << 16;
  VAR_4 |= FUNC_0(VAR_1, 2) << 8;
  VAR_4 |= FUNC_0(VAR_1, 3);

  if (((VAR_4 &~ 0x0f) == 0x000001e0) ||
      ((VAR_4 &~ 0x1f) == 0x000001c0) ||
      (VAR_4 == 0x000001bd))
   break;
  FUNC_5("resync\n");
  FUNC_1(VAR_1, 1);
 }
 VAR_5 = FUNC_0(VAR_1, 4) << 8;
 VAR_5 |= FUNC_0(VAR_1, 5);
 VAR_5 += 6;
 if (VAR_3 < VAR_5 || VAR_5 > VAR_2) {

  FUNC_6(&VAR_1->queue);
  return -1;
 }

 FUNC_4(VAR_1, VAR_0, (size_t) VAR_5);

 FUNC_2(2, "pread=0x%08lx, pwrite=0x%08lx\n",
        (unsigned long) VAR_1->pread, (unsigned long) VAR_1->pwrite);
 FUNC_6(&VAR_1->queue);
 return VAR_5;
}
