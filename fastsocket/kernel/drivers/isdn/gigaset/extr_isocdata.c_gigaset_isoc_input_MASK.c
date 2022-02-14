
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inbuf_t {unsigned int head; unsigned int tail; unsigned char* data; struct cardstate* cs; } ;
struct cardstate {scalar_t__ mstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (unsigned char*,unsigned int,struct inbuf_t*) ;
 int FUNC_1 (int ,char*,unsigned int,...) ;
 int FUNC_2 (int ,char*,unsigned int,unsigned char*) ;
 int FUNC_3 (struct cardstate*,unsigned char*,unsigned int) ;

void FUNC_4(struct inbuf_t *VAR_5)
{
 struct cardstate *VAR_6 = VAR_5->cs;
 unsigned VAR_7, VAR_8, VAR_9;
 unsigned char *VAR_10;

 VAR_8 = VAR_5->head;
 while (VAR_8 != (VAR_7 = VAR_5->tail)) {
  FUNC_1(VAR_1, "buffer state: %u -> %u", VAR_8, VAR_7);
  if (VAR_8 > VAR_7)
   VAR_7 = VAR_4;
  VAR_10 = VAR_5->data + VAR_8;
  VAR_9 = VAR_7 - VAR_8;
  FUNC_1(VAR_1, "processing %u bytes", VAR_9);

  if (VAR_6->mstate == VAR_3) {
   FUNC_2(VAR_2, "received response",
        VAR_9, VAR_10);
   FUNC_3(VAR_5->cs, VAR_10, VAR_9);
  } else {
   FUNC_2(VAR_0, "received response",
        VAR_9, VAR_10);
   FUNC_0(VAR_10, VAR_9, VAR_5);
  }

  VAR_8 += VAR_9;
  if (VAR_8 == VAR_4)
   VAR_8 = 0;
  FUNC_1(VAR_1, "setting head to %u", VAR_8);
  VAR_5->head = VAR_8;
 }
}
