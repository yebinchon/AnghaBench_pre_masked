
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_ov511 {int buf_state; TYPE_2__* frame; TYPE_1__* sbuf; int * tempfbuf; int * rawfbuf; int * fbuf; int maxheight; int maxwidth; } ;
struct TYPE_4__ {int * compbuf; int * tempdata; int * rawdata; int * data; } ;
struct TYPE_3__ {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct usb_ov511 *VAR_3)
{
 int VAR_4;
 FUNC_1(4, "entered");

 if (VAR_3->fbuf) {
  FUNC_4(VAR_3->fbuf, VAR_1
         * FUNC_0(VAR_3->maxwidth, VAR_3->maxheight));
  VAR_3->fbuf = ((void*)0);
 }

 FUNC_5(VAR_3->rawfbuf);
 VAR_3->rawfbuf = ((void*)0);

 FUNC_5(VAR_3->tempfbuf);
 VAR_3->tempfbuf = ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  FUNC_3(VAR_3->sbuf[VAR_4].data);
  VAR_3->sbuf[VAR_4].data = ((void*)0);
 }

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3->frame[VAR_4].data = ((void*)0);
  VAR_3->frame[VAR_4].rawdata = ((void*)0);
  VAR_3->frame[VAR_4].tempdata = ((void*)0);
  if (VAR_3->frame[VAR_4].compbuf) {
   FUNC_2((unsigned long) VAR_3->frame[VAR_4].compbuf);
   VAR_3->frame[VAR_4].compbuf = ((void*)0);
  }
 }

 FUNC_1(4, "buffer memory deallocated");
 VAR_3->buf_state = VAR_0;
 FUNC_1(4, "leaving");
}
