
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_ov511 {int maxwidth; int maxheight; scalar_t__ buf_state; int buf_lock; TYPE_2__* frame; void* tempfbuf; void* rawfbuf; scalar_t__ fbuf; TYPE_1__* sbuf; } ;
struct TYPE_4__ {unsigned char* compbuf; scalar_t__ data; void* tempdata; void* rawdata; } ;
struct TYPE_3__ {int data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const,int const) ;
 int VAR_4 ;
 int FUNC_1 (int const,int const) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (void*,int ,int const) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct usb_ov511*) ;
 scalar_t__ FUNC_9 (int const) ;
 void* FUNC_10 (int const) ;

__attribute__((used)) static int
FUNC_11(struct usb_ov511 *VAR_7)
{
 int VAR_8;
 const int VAR_9 = VAR_7->maxwidth;
 const int VAR_10 = VAR_7->maxheight;
 const int VAR_11 = VAR_5 * FUNC_0(VAR_9, VAR_10);
 const int VAR_12 = VAR_5 * FUNC_1(VAR_9, VAR_10);

 FUNC_2(4, "entered");
 FUNC_6(&VAR_7->buf_lock);

 if (VAR_7->buf_state == VAR_0)
  goto out;

 VAR_7->fbuf = FUNC_9(VAR_11);
 if (!VAR_7->fbuf)
  goto error;

 VAR_7->rawfbuf = FUNC_10(VAR_12);
 if (!VAR_7->rawfbuf)
  goto error;

 FUNC_5(VAR_7->rawfbuf, 0, VAR_12);

 VAR_7->tempfbuf = FUNC_10(VAR_12);
 if (!VAR_7->tempfbuf)
  goto error;

 FUNC_5(VAR_7->tempfbuf, 0, VAR_12);

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_7->sbuf[VAR_8].data = FUNC_4(VAR_2 *
   VAR_4, VAR_3);
  if (!VAR_7->sbuf[VAR_8].data)
   goto error;

  FUNC_2(4, "sbuf[%d] @ %p", VAR_8, VAR_7->sbuf[VAR_8].data);
 }

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_7->frame[VAR_8].data = VAR_7->fbuf + VAR_8 * FUNC_0(VAR_9, VAR_10);
  VAR_7->frame[VAR_8].rawdata = VAR_7->rawfbuf
   + VAR_8 * FUNC_1(VAR_9, VAR_10);
  VAR_7->frame[VAR_8].tempdata = VAR_7->tempfbuf
   + VAR_8 * FUNC_1(VAR_9, VAR_10);

  VAR_7->frame[VAR_8].compbuf =
   (unsigned char *) FUNC_3(VAR_3);
  if (!VAR_7->frame[VAR_8].compbuf)
   goto error;

  FUNC_2(4, "frame[%d] @ %p", VAR_8, VAR_7->frame[VAR_8].data);
 }

 VAR_7->buf_state = VAR_0;
out:
 FUNC_7(&VAR_7->buf_lock);
 FUNC_2(4, "leaving");
 return 0;
error:
 FUNC_8(VAR_7);
 FUNC_7(&VAR_7->buf_lock);
 FUNC_2(4, "errored");
 return -VAR_1;
}
