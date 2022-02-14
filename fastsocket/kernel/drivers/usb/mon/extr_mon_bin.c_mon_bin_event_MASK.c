
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_endpoint_descriptor {int dummy; } ;
struct urb {unsigned int number_of_packets; unsigned int transfer_buffer_length; unsigned int actual_length; int error_count; int start_frame; int interval; int transfer_flags; TYPE_3__* dev; TYPE_1__* ep; } ;
struct timeval {int tv_usec; int tv_sec; } ;
struct mon_reader_bin {int b_size; int b_wait; int b_lock; int cnt_lost; scalar_t__ mmap_active; } ;
struct mon_bin_isodesc {int dummy; } ;
struct TYPE_9__ {unsigned int numdesc; int error_count; } ;
struct TYPE_10__ {int setup; TYPE_4__ iso; } ;
struct mon_bin_hdr {char type; unsigned char epnum; unsigned long id; int status; unsigned int len_urb; unsigned int len_cap; char flag_setup; unsigned int ndesc; char flag_data; TYPE_5__ s; int start_frame; int interval; int xfer_flags; int ts_usec; int ts_sec; int busnum; int devnum; int xfer_type; } ;
struct TYPE_8__ {TYPE_2__* bus; int devnum; } ;
struct TYPE_7__ {int busnum; } ;
struct TYPE_6__ {struct usb_endpoint_descriptor desc; } ;


 unsigned int VAR_0 ;
 struct mon_bin_hdr* FUNC_0 (struct mon_reader_bin*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (struct mon_bin_hdr*,int ,int) ;
 char FUNC_3 (struct mon_reader_bin*,unsigned int,struct urb*,unsigned int) ;
 int FUNC_4 (struct mon_reader_bin*,unsigned int,struct urb*,char,unsigned int) ;
 char FUNC_5 (int ,struct urb*,char) ;
 unsigned int FUNC_6 (struct mon_reader_bin*,int) ;
 unsigned int FUNC_7 (struct mon_reader_bin*,int) ;
 int FUNC_8 (struct mon_reader_bin*,unsigned int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 unsigned char FUNC_11 (struct usb_endpoint_descriptor const*) ;
 size_t FUNC_12 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_13 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_14 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_15 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_16 (struct urb*) ;
 int FUNC_17 (int *) ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_18(struct mon_reader_bin *VAR_5, struct urb *VAR_6,
    char VAR_7, int VAR_8)
{
 const struct usb_endpoint_descriptor *VAR_9 = &VAR_6->ep->desc;
 unsigned long VAR_10;
 struct timeval VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16, VAR_17;
 unsigned char VAR_18;
 struct mon_bin_hdr *VAR_19;
 char VAR_20 = 0;

 FUNC_1(&VAR_11);

 FUNC_9(&VAR_5->b_lock, VAR_10);




 if (FUNC_15(VAR_9)) {
  if (VAR_6->number_of_packets < 0) {
   VAR_16 = 0;
  } else if (VAR_6->number_of_packets >= VAR_0) {
   VAR_16 = VAR_0;
  } else {
   VAR_16 = VAR_6->number_of_packets;
  }
 } else {
  VAR_16 = 0;
 }
 VAR_17 = VAR_16*sizeof(struct mon_bin_isodesc);

 VAR_12 = (VAR_7 == 'S') ?
     VAR_6->transfer_buffer_length : VAR_6->actual_length;
 VAR_14 = VAR_12;

 if (VAR_14 >= VAR_5->b_size/5)
  VAR_14 = VAR_5->b_size/5;

 if (FUNC_16(VAR_6)) {
  if (VAR_7 == 'S') {
   VAR_14 = 0;
   VAR_20 = '<';
  }

  VAR_18 = VAR_3;
 } else {
  if (VAR_7 == 'C') {
   VAR_14 = 0;
   VAR_20 = '>';
  }
  VAR_18 = 0;
 }

 if (VAR_5->mmap_active) {
  VAR_13 = FUNC_7(VAR_5,
       VAR_14 + VAR_2 + VAR_17);
 } else {
  VAR_13 = FUNC_6(VAR_5, VAR_14 + VAR_2 + VAR_17);
 }
 if (VAR_13 == ~0) {
  VAR_5->cnt_lost++;
  FUNC_10(&VAR_5->b_lock, VAR_10);
  return;
 }

 VAR_19 = FUNC_0(VAR_5, VAR_13);
 if ((VAR_13 += VAR_2) >= VAR_5->b_size) VAR_13 = 0;




 FUNC_2(VAR_19, 0, VAR_2);
 VAR_19->type = VAR_7;
 VAR_19->xfer_type = VAR_4[FUNC_12(VAR_9)];
 VAR_19->epnum = VAR_18 | FUNC_11(VAR_9);
 VAR_19->devnum = VAR_6->dev->devnum;
 VAR_19->busnum = VAR_6->dev->bus->busnum;
 VAR_19->id = (unsigned long) VAR_6;
 VAR_19->ts_sec = VAR_11.tv_sec;
 VAR_19->ts_usec = VAR_11.tv_usec;
 VAR_19->status = VAR_8;
 VAR_19->len_urb = VAR_12;
 VAR_19->len_cap = VAR_14 + VAR_17;
 VAR_19->xfer_flags = VAR_6->transfer_flags;

 if (FUNC_14(VAR_9)) {
  VAR_19->interval = VAR_6->interval;
 } else if (FUNC_15(VAR_9)) {
  VAR_19->interval = VAR_6->interval;
  VAR_19->start_frame = VAR_6->start_frame;
  VAR_19->s.iso.error_count = VAR_6->error_count;
  VAR_19->s.iso.numdesc = VAR_6->number_of_packets;
 }

 if (FUNC_13(VAR_9) && VAR_7 == 'S') {
  VAR_19->flag_setup = FUNC_5(VAR_19->s.setup, VAR_6, VAR_7);
 } else {
  VAR_19->flag_setup = '-';
 }

 if (VAR_16 != 0) {
  VAR_19->ndesc = VAR_16;
  FUNC_4(VAR_5, VAR_13, VAR_6, VAR_7, VAR_16);
  if ((VAR_13 += VAR_17) >= VAR_5->b_size)
   VAR_13 -= VAR_5->b_size;
 }

 if (VAR_14 != 0) {
  VAR_19->flag_data = FUNC_3(VAR_5, VAR_13, VAR_6, VAR_14);
  if (VAR_19->flag_data != 0) {
   VAR_15 = (VAR_19->len_cap + VAR_1-1) & ~(VAR_1-1);
   VAR_19->len_cap -= VAR_14;
   VAR_15 -= (VAR_19->len_cap + VAR_1-1) & ~(VAR_1-1);
   FUNC_8(VAR_5, VAR_15);
  }
 } else {
  VAR_19->flag_data = VAR_20;
 }

 FUNC_10(&VAR_5->b_lock, VAR_10);

 FUNC_17(&VAR_5->b_wait);
}
