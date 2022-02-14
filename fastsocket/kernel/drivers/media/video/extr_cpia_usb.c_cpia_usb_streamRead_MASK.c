
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_cpia {struct framebuf* curbuff; int wq_stream; int present; } ;
struct framebuf {scalar_t__ status; int length; int data; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, u8 *VAR_3, int VAR_4)
{
 struct usb_cpia *VAR_5 = (struct usb_cpia *) VAR_2;
 struct framebuf *VAR_6;

 if (!VAR_5 || !VAR_5->present)
  return -1;

 if (VAR_5->curbuff->status != VAR_1)
  FUNC_1(&VAR_5->wq_stream);
 else
  FUNC_0("Frame already waiting!\n");

 VAR_6 = VAR_5->curbuff;

 if (!VAR_6)
  return -1;

 if (VAR_6->status != VAR_1 || VAR_6->length < 4) {
  FUNC_0("Something went wrong!\n");
  return -1;
 }

 FUNC_2(VAR_3, VAR_6->data, VAR_6->length);
 VAR_6->status = VAR_0;






 return VAR_6->length;
}
