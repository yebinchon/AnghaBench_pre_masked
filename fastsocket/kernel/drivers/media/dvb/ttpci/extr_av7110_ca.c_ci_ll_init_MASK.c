
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_ringbuffer {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_ringbuffer*,void*,int) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dvb_ringbuffer *VAR_1, struct dvb_ringbuffer *VAR_2, int VAR_3)
{
 struct dvb_ringbuffer *VAR_4[] = { VAR_1, VAR_2, ((void*)0) }, **VAR_5;
 void *VAR_6;

 for (VAR_5 = VAR_4; *VAR_5; VAR_5++) {
  VAR_6 = FUNC_2(VAR_3);
  if (!VAR_6) {
   while (VAR_5-- != VAR_4) {
    FUNC_1(VAR_5[0]->data);
    VAR_5[0]->data = ((void*)0);
   }
   return -VAR_0;
  }
  FUNC_0(*VAR_5, VAR_6, VAR_3);
 }
 return 0;
}
