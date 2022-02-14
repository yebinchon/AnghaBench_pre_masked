
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_iso_packet_descriptor {int actual_length; int length; int offset; int status; } ;
struct urb {int number_of_packets; struct usb_iso_packet_descriptor* iso_frame_desc; int error_count; int start_frame; int interval; int actual_length; int transfer_buffer_length; TYPE_3__* ep; TYPE_2__* dev; } ;
struct TYPE_10__ {TYPE_5__* m_bus; } ;
struct mon_reader_text {scalar_t__ nevents; int wait; int e_list; TYPE_4__ r; int e_slab; } ;
struct mon_iso_desc {int length; int offset; int status; } ;
struct mon_event_text {char type; unsigned long id; scalar_t__ xfertype; unsigned int tstamp; int status; int numdesc; int e_link; int length; int data_flag; int setup_flag; struct mon_iso_desc* isodesc; int error_count; int start_frame; int interval; int is_in; int epnum; int devnum; int busnum; } ;
struct TYPE_11__ {int cnt_text_lost; } ;
struct TYPE_9__ {int desc; } ;
struct TYPE_8__ {int devnum; TYPE_1__* bus; } ;
struct TYPE_7__ {int busnum; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct mon_event_text* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (struct mon_event_text*,struct urb*,int ,char,TYPE_5__*) ;
 int FUNC_4 (struct mon_event_text*,struct urb*,char,TYPE_5__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct mon_reader_text *VAR_5, struct urb *VAR_6,
    char VAR_7, int VAR_8)
{
 struct mon_event_text *VAR_9;
 unsigned int VAR_10;
 struct usb_iso_packet_descriptor *VAR_11;
 struct mon_iso_desc *VAR_12;
 int VAR_13, VAR_14;

 VAR_10 = FUNC_2();

 if (VAR_5->nevents >= VAR_0 ||
     (VAR_9 = FUNC_0(VAR_5->e_slab, VAR_1)) == ((void*)0)) {
  VAR_5->r.m_bus->cnt_text_lost++;
  return;
 }

 VAR_9->type = VAR_7;
 VAR_9->id = (unsigned long) VAR_6;
 VAR_9->busnum = VAR_6->dev->bus->busnum;
 VAR_9->devnum = VAR_6->dev->devnum;
 VAR_9->epnum = FUNC_5(&VAR_6->ep->desc);
 VAR_9->xfertype = FUNC_6(&VAR_6->ep->desc);
 VAR_9->is_in = FUNC_7(VAR_6);
 VAR_9->tstamp = VAR_10;
 VAR_9->length = (VAR_7 == 'S') ?
     VAR_6->transfer_buffer_length : VAR_6->actual_length;

 VAR_9->status = VAR_8;

 if (VAR_9->xfertype == VAR_3) {
  VAR_9->interval = VAR_6->interval;
 } else if (VAR_9->xfertype == VAR_4) {
  VAR_9->interval = VAR_6->interval;
  VAR_9->start_frame = VAR_6->start_frame;
  VAR_9->error_count = VAR_6->error_count;
 }
 VAR_9->numdesc = VAR_6->number_of_packets;
 if (VAR_9->xfertype == VAR_4 &&
   VAR_6->number_of_packets > 0) {
  if ((VAR_14 = VAR_6->number_of_packets) > VAR_2)
   VAR_14 = VAR_2;
  VAR_11 = VAR_6->iso_frame_desc;
  VAR_12 = VAR_9->isodesc;
  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
   VAR_12->status = VAR_11->status;
   VAR_12->offset = VAR_11->offset;
   VAR_12->length = (VAR_7 == 'S') ?
       VAR_11->length : VAR_11->actual_length;
   VAR_11++;
   VAR_12++;
  }
 }

 VAR_9->setup_flag = FUNC_4(VAR_9, VAR_6, VAR_7, VAR_5->r.m_bus);
 VAR_9->data_flag = FUNC_3(VAR_9, VAR_6, VAR_9->length, VAR_7,
   VAR_5->r.m_bus);

 VAR_5->nevents++;
 FUNC_1(&VAR_9->e_link, &VAR_5->e_list);
 FUNC_8(&VAR_5->wait);
}
