
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct usbtest_param {scalar_t__ iterations; int test_num; scalar_t__ length; scalar_t__ vary; scalar_t__ sglen; struct timeval duration; } ;
struct usbtest_dev {int lock; int iso_in; int in_iso_pipe; int iso_out; int out_iso_pipe; TYPE_3__* info; int in_pipe; int out_pipe; } ;
struct usb_sg_request {int dummy; } ;
struct usb_interface {int dev; TYPE_2__* altsetting; int is_active; } ;
struct usb_device {int dummy; } ;
struct urb {int dummy; } ;
struct scatterlist {int dummy; } ;
struct TYPE_6__ {scalar_t__ alt; int ctrl_out; } ;
struct TYPE_4__ {scalar_t__ bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct usbtest_dev*,char*,unsigned int) ;
 unsigned int VAR_6 ;
 struct scatterlist* FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct usbtest_dev*) ;
 int FUNC_3 (struct usbtest_dev*,unsigned int,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,char*,int,...) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (struct timeval*) ;
 int FUNC_7 (struct scatterlist*,scalar_t__) ;
 int FUNC_8 (struct usbtest_dev*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct usbtest_dev*,scalar_t__,int ,struct usb_sg_request*,struct scatterlist*,scalar_t__) ;
 int VAR_7 ;
 int FUNC_12 (struct usbtest_dev*,scalar_t__) ;
 struct urb* FUNC_13 (struct usb_device*,int ,scalar_t__) ;
 int FUNC_14 (struct urb*) ;
 int FUNC_15 (struct usbtest_dev*,struct urb*,scalar_t__,scalar_t__,int ,char*) ;
 int FUNC_16 (struct usbtest_dev*,struct usbtest_param*) ;
 int FUNC_17 (struct usbtest_dev*,struct usbtest_param*,int ,int ) ;
 struct usb_device* FUNC_18 (struct usbtest_dev*) ;
 int FUNC_19 (struct usbtest_dev*,int ,scalar_t__) ;
 struct usbtest_dev* FUNC_20 (struct usb_interface*) ;

__attribute__((used)) static int
FUNC_21 (struct usb_interface *VAR_8, unsigned int VAR_9, void *VAR_10)
{
 struct usbtest_dev *VAR_11 = FUNC_20 (VAR_8);
 struct usb_device *VAR_12 = FUNC_18 (VAR_11);
 struct usbtest_param *VAR_13 = VAR_10;
 int VAR_14 = -VAR_4;
 struct urb *VAR_15;
 struct scatterlist *VAR_16;
 struct usb_sg_request VAR_17;
 struct timeval VAR_18;
 unsigned VAR_19;



 if (VAR_9 != VAR_6)
  return -VAR_4;

 if (VAR_13->iterations <= 0)
  return -VAR_1;

 if (FUNC_9(&VAR_11->lock))
  return -VAR_5;


 if (!VAR_8->is_active) {
  FUNC_10(&VAR_11->lock);
  return -VAR_0;
 }





 if (VAR_11->info->alt >= 0) {
  int VAR_20;

  if (VAR_8->altsetting->desc.bInterfaceNumber) {
   FUNC_10(&VAR_11->lock);
   return -VAR_2;
  }
  VAR_20 = FUNC_12 (VAR_11, VAR_11->info->alt);
  if (VAR_20) {
   FUNC_4 (&VAR_8->dev,
     "set altsetting to %d failed, %d\n",
     VAR_11->info->alt, VAR_20);
   FUNC_10(&VAR_11->lock);
   return VAR_20;
  }
 }
 FUNC_6 (&VAR_18);
 switch (VAR_13->test_num) {

 case 0:
  FUNC_5(&VAR_8->dev, "TEST 0:  NOP\n");
  VAR_14 = 0;
  break;


 case 1:
  if (VAR_11->out_pipe == 0)
   break;
  FUNC_5(&VAR_8->dev,
    "TEST 1:  write %d bytes %u times\n",
    VAR_13->length, VAR_13->iterations);
  VAR_15 = FUNC_13 (VAR_12, VAR_11->out_pipe, VAR_13->length);
  if (!VAR_15) {
   VAR_14 = -VAR_3;
   break;
  }

  VAR_14 = FUNC_15(VAR_11, VAR_15, VAR_13->iterations, 0, 0, "test1");
  FUNC_14 (VAR_15);
  break;
 case 2:
  if (VAR_11->in_pipe == 0)
   break;
  FUNC_5(&VAR_8->dev,
    "TEST 2:  read %d bytes %u times\n",
    VAR_13->length, VAR_13->iterations);
  VAR_15 = FUNC_13 (VAR_12, VAR_11->in_pipe, VAR_13->length);
  if (!VAR_15) {
   VAR_14 = -VAR_3;
   break;
  }

  VAR_14 = FUNC_15(VAR_11, VAR_15, VAR_13->iterations, 0, 0, "test2");
  FUNC_14 (VAR_15);
  break;
 case 3:
  if (VAR_11->out_pipe == 0 || VAR_13->vary == 0)
   break;
  FUNC_5(&VAR_8->dev,
    "TEST 3:  write/%d 0..%d bytes %u times\n",
    VAR_13->vary, VAR_13->length, VAR_13->iterations);
  VAR_15 = FUNC_13 (VAR_12, VAR_11->out_pipe, VAR_13->length);
  if (!VAR_15) {
   VAR_14 = -VAR_3;
   break;
  }

  VAR_14 = FUNC_15(VAR_11, VAR_15, VAR_13->iterations, VAR_13->vary,
     0, "test3");
  FUNC_14 (VAR_15);
  break;
 case 4:
  if (VAR_11->in_pipe == 0 || VAR_13->vary == 0)
   break;
  FUNC_5(&VAR_8->dev,
    "TEST 4:  read/%d 0..%d bytes %u times\n",
    VAR_13->vary, VAR_13->length, VAR_13->iterations);
  VAR_15 = FUNC_13 (VAR_12, VAR_11->in_pipe, VAR_13->length);
  if (!VAR_15) {
   VAR_14 = -VAR_3;
   break;
  }

  VAR_14 = FUNC_15(VAR_11, VAR_15, VAR_13->iterations, VAR_13->vary,
     0, "test4");
  FUNC_14 (VAR_15);
  break;


 case 5:
  if (VAR_11->out_pipe == 0 || VAR_13->sglen == 0)
   break;
  FUNC_5(&VAR_8->dev,
   "TEST 5:  write %d sglists %d entries of %d bytes\n",
    VAR_13->iterations,
    VAR_13->sglen, VAR_13->length);
  VAR_16 = FUNC_1 (VAR_13->sglen, VAR_13->length, 0);
  if (!VAR_16) {
   VAR_14 = -VAR_3;
   break;
  }

  VAR_14 = FUNC_11(VAR_11, VAR_13->iterations, VAR_11->out_pipe,
    &VAR_17, VAR_16, VAR_13->sglen);
  FUNC_7 (VAR_16, VAR_13->sglen);
  break;

 case 6:
  if (VAR_11->in_pipe == 0 || VAR_13->sglen == 0)
   break;
  FUNC_5(&VAR_8->dev,
   "TEST 6:  read %d sglists %d entries of %d bytes\n",
    VAR_13->iterations,
    VAR_13->sglen, VAR_13->length);
  VAR_16 = FUNC_1 (VAR_13->sglen, VAR_13->length, 0);
  if (!VAR_16) {
   VAR_14 = -VAR_3;
   break;
  }

  VAR_14 = FUNC_11(VAR_11, VAR_13->iterations, VAR_11->in_pipe,
    &VAR_17, VAR_16, VAR_13->sglen);
  FUNC_7 (VAR_16, VAR_13->sglen);
  break;
 case 7:
  if (VAR_11->out_pipe == 0 || VAR_13->sglen == 0 || VAR_13->vary == 0)
   break;
  FUNC_5(&VAR_8->dev,
   "TEST 7:  write/%d %d sglists %d entries 0..%d bytes\n",
    VAR_13->vary, VAR_13->iterations,
    VAR_13->sglen, VAR_13->length);
  VAR_16 = FUNC_1 (VAR_13->sglen, VAR_13->length, VAR_13->vary);
  if (!VAR_16) {
   VAR_14 = -VAR_3;
   break;
  }

  VAR_14 = FUNC_11(VAR_11, VAR_13->iterations, VAR_11->out_pipe,
    &VAR_17, VAR_16, VAR_13->sglen);
  FUNC_7 (VAR_16, VAR_13->sglen);
  break;
 case 8:
  if (VAR_11->in_pipe == 0 || VAR_13->sglen == 0 || VAR_13->vary == 0)
   break;
  FUNC_5(&VAR_8->dev,
   "TEST 8:  read/%d %d sglists %d entries 0..%d bytes\n",
    VAR_13->vary, VAR_13->iterations,
    VAR_13->sglen, VAR_13->length);
  VAR_16 = FUNC_1 (VAR_13->sglen, VAR_13->length, VAR_13->vary);
  if (!VAR_16) {
   VAR_14 = -VAR_3;
   break;
  }

  VAR_14 = FUNC_11(VAR_11, VAR_13->iterations, VAR_11->in_pipe,
    &VAR_17, VAR_16, VAR_13->sglen);
  FUNC_7 (VAR_16, VAR_13->sglen);
  break;


 case 9:
  VAR_14 = 0;
  FUNC_5(&VAR_8->dev,
   "TEST 9:  ch9 (subset) control tests, %d times\n",
    VAR_13->iterations);
  for (VAR_19 = VAR_13->iterations; VAR_14 == 0 && VAR_19--; )
   VAR_14 = FUNC_2 (VAR_11);
  if (VAR_14)
   FUNC_4(&VAR_8->dev, "ch9 subset failed, "
     "iterations left %d\n", VAR_19);
  break;


 case 10:
  if (VAR_13->sglen == 0)
   break;
  VAR_14 = 0;
  FUNC_5(&VAR_8->dev,
    "TEST 10:  queue %d control calls, %d times\n",
    VAR_13->sglen,
    VAR_13->iterations);
  VAR_14 = FUNC_16 (VAR_11, VAR_13);
  break;


 case 11:
  if (VAR_11->in_pipe == 0 || !VAR_13->length)
   break;
  VAR_14 = 0;
  FUNC_5(&VAR_8->dev, "TEST 11:  unlink %d reads of %d\n",
    VAR_13->iterations, VAR_13->length);
  for (VAR_19 = VAR_13->iterations; VAR_14 == 0 && VAR_19--; )
   VAR_14 = FUNC_19 (VAR_11, VAR_11->in_pipe,
      VAR_13->length);
  if (VAR_14)
   FUNC_4(&VAR_8->dev, "unlink reads failed %d, "
    "iterations left %d\n", VAR_14, VAR_19);
  break;
 case 12:
  if (VAR_11->out_pipe == 0 || !VAR_13->length)
   break;
  VAR_14 = 0;
  FUNC_5(&VAR_8->dev, "TEST 12:  unlink %d writes of %d\n",
    VAR_13->iterations, VAR_13->length);
  for (VAR_19 = VAR_13->iterations; VAR_14 == 0 && VAR_19--; )
   VAR_14 = FUNC_19 (VAR_11, VAR_11->out_pipe,
      VAR_13->length);
  if (VAR_14)
   FUNC_4(&VAR_8->dev, "unlink writes failed %d, "
    "iterations left %d\n", VAR_14, VAR_19);
  break;


 case 13:
  if (VAR_11->out_pipe == 0 && VAR_11->in_pipe == 0)
   break;
  VAR_14 = 0;
  FUNC_5(&VAR_8->dev, "TEST 13:  set/clear %d halts\n",
    VAR_13->iterations);
  for (VAR_19 = VAR_13->iterations; VAR_14 == 0 && VAR_19--; )
   VAR_14 = FUNC_8 (VAR_11);

  if (VAR_14)
   FUNC_0(VAR_11, "halts failed, iterations left %d\n", VAR_19);
  break;


 case 14:
  if (!VAR_11->info->ctrl_out)
   break;
  FUNC_5(&VAR_8->dev, "TEST 14:  %d ep0out, %d..%d vary %d\n",
    VAR_13->iterations,
    VAR_7 ? 1 : 0, VAR_13->length,
    VAR_13->vary);
  VAR_14 = FUNC_3(VAR_11, VAR_13->iterations,
    VAR_13->length, VAR_13->vary);
  break;


 case 15:
  if (VAR_11->out_iso_pipe == 0 || VAR_13->sglen == 0)
   break;
  FUNC_5(&VAR_8->dev,
   "TEST 15:  write %d iso, %d entries of %d bytes\n",
    VAR_13->iterations,
    VAR_13->sglen, VAR_13->length);

  VAR_14 = FUNC_17 (VAR_11, VAR_13,
    VAR_11->out_iso_pipe, VAR_11->iso_out);
  break;


 case 16:
  if (VAR_11->in_iso_pipe == 0 || VAR_13->sglen == 0)
   break;
  FUNC_5(&VAR_8->dev,
   "TEST 16:  read %d iso, %d entries of %d bytes\n",
    VAR_13->iterations,
    VAR_13->sglen, VAR_13->length);

  VAR_14 = FUNC_17 (VAR_11, VAR_13,
    VAR_11->in_iso_pipe, VAR_11->iso_in);
  break;





 }
 FUNC_6 (&VAR_13->duration);
 VAR_13->duration.tv_sec -= VAR_18.tv_sec;
 VAR_13->duration.tv_usec -= VAR_18.tv_usec;
 if (VAR_13->duration.tv_usec < 0) {
  VAR_13->duration.tv_usec += 1000 * 1000;
  VAR_13->duration.tv_sec -= 1;
 }
 FUNC_10(&VAR_11->lock);
 return VAR_14;
}
