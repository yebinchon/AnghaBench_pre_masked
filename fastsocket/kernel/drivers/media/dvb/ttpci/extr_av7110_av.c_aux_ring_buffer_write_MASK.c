
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_ringbuffer {int queue; } ;


 int FUNC_0 (struct dvb_ringbuffer*) ;
 int FUNC_1 (struct dvb_ringbuffer*,int const*,int) ;
 scalar_t__ FUNC_2 (int ,int) ;

__attribute__((used)) static inline long FUNC_3(struct dvb_ringbuffer *VAR_0,
      const u8 *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3 = VAR_2;
 int VAR_4;

 while (VAR_3 > 0) {
  if (FUNC_0(VAR_0) < 2048) {
   if (FUNC_2(VAR_0->queue,
           (FUNC_0(VAR_0) >= 2048)))
    return VAR_2 - VAR_3;
  }
  VAR_4 = FUNC_0(VAR_0);
  if (VAR_4 > VAR_3)
   VAR_4 = VAR_3;
  FUNC_1(VAR_0, VAR_1, VAR_4);
  VAR_3 -= VAR_4;
  VAR_1 += VAR_4;
 }

 return VAR_2 - VAR_3;
}
