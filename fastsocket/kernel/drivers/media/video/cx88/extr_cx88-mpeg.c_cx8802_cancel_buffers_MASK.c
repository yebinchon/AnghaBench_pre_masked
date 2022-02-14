
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx88_dmaqueue {int timeout; } ;
struct cx8802_dev {struct cx88_dmaqueue mpegq; } ;


 int FUNC_0 (struct cx8802_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cx8802_dev*,char*,int ) ;
 int FUNC_3 (int,char*) ;

void FUNC_4(struct cx8802_dev *VAR_0)
{
 struct cx88_dmaqueue *VAR_1 = &VAR_0->mpegq;

 FUNC_3( 1, "cx8802_cancel_buffers" );
 FUNC_1(&VAR_1->timeout);
 FUNC_0(VAR_0);
 FUNC_2(VAR_0,"cancel",0);
}
