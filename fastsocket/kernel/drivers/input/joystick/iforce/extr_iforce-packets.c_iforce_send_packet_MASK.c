
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int head; int tail; void** buf; } ;
struct iforce {int bus; int xmit_flags; int usbdev; int xmit_lock; TYPE_2__ xmit; TYPE_1__* dev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,int,int ) ;
 void* FUNC_2 (int ) ;


 int VAR_0 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int VAR_1 ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct iforce*) ;
 int FUNC_7 (struct iforce*) ;
 int FUNC_8 (void**,unsigned char*,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int ,int ) ;

int FUNC_12(struct iforce *VAR_2, u16 VAR_3, unsigned char* VAR_4)
{

 int VAR_5 = FUNC_3(VAR_3);
 int VAR_6;
 int VAR_7;
 int VAR_8, VAR_9;
 unsigned long VAR_10;




 FUNC_9(&VAR_2->xmit_lock, VAR_10);

 VAR_8 = VAR_2->xmit.head;
 VAR_9 = VAR_2->xmit.tail;


 if (FUNC_0(VAR_8, VAR_9, VAR_1) < VAR_5+2) {
  FUNC_5(&VAR_2->dev->dev,
    "not enough space in xmit buffer to send new packet\n");
  FUNC_10(&VAR_2->xmit_lock, VAR_10);
  return -1;
 }

 VAR_7 = VAR_8 == VAR_9;
 FUNC_4(VAR_2->xmit.head, VAR_5+2);




 VAR_2->xmit.buf[VAR_8] = FUNC_2(VAR_3);
 FUNC_4(VAR_8, 1);
 VAR_2->xmit.buf[VAR_8] = FUNC_3(VAR_3);
 FUNC_4(VAR_8, 1);

 VAR_6 = FUNC_1(VAR_8, VAR_9, VAR_1);
 if (VAR_5 < VAR_6) VAR_6=VAR_5;

 FUNC_8(&VAR_2->xmit.buf[VAR_8],
        VAR_4,
        VAR_6);
 if (VAR_5 != VAR_6) {
  FUNC_8(&VAR_2->xmit.buf[0],
         VAR_4 + VAR_6,
         VAR_5 - VAR_6);
 }
 FUNC_4(VAR_8, VAR_5);

 FUNC_10(&VAR_2->xmit_lock, VAR_10);



 switch (VAR_2->bus) {
 }
 return 0;
}
