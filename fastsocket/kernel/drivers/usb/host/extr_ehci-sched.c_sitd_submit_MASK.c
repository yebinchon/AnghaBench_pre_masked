
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {scalar_t__ interval; int transfer_buffer_length; int pipe; TYPE_1__* dev; } ;
struct ehci_iso_stream {scalar_t__ interval; } ;
struct ehci_hcd {int periodic_size; int lock; } ;
typedef int gfp_t ;
struct TYPE_2__ {int devpath; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ehci_hcd*,char*,...) ;
 int FUNC_2 (struct ehci_hcd*) ;
 struct ehci_iso_stream* FUNC_3 (struct ehci_hcd*,struct urb*) ;
 int FUNC_4 (struct ehci_hcd*,struct ehci_iso_stream*) ;
 int FUNC_5 (struct ehci_hcd*,struct urb*,struct ehci_iso_stream*) ;
 int FUNC_6 (struct ehci_hcd*,struct urb*,int,struct ehci_iso_stream*) ;
 int FUNC_7 (struct ehci_iso_stream*,struct ehci_hcd*,struct urb*,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ,struct urb*) ;
 int FUNC_12 (int ,struct urb*) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15 (struct ehci_hcd *VAR_3, struct urb *VAR_4,
 gfp_t VAR_5)
{
 int VAR_6 = -VAR_0;
 unsigned long VAR_7;
 struct ehci_iso_stream *VAR_8;


 VAR_8 = FUNC_3 (VAR_3, VAR_4);
 if (VAR_8 == ((void*)0)) {
  FUNC_1 (VAR_3, "can't get iso stream\n");
  return -VAR_1;
 }
 if (VAR_4->interval != VAR_8->interval) {
  FUNC_1 (VAR_3, "can't change iso interval %d --> %d\n",
   VAR_8->interval, VAR_4->interval);
  goto done;
 }
 VAR_6 = FUNC_7 (VAR_8, VAR_3, VAR_4, VAR_5);
 if (VAR_6 < 0) {
  FUNC_1 (VAR_3, "can't init sitds\n");
  goto done;
 }


 FUNC_8 (&VAR_3->lock, VAR_7);
 if (FUNC_10(!FUNC_0(FUNC_2(VAR_3)))) {
  VAR_6 = -VAR_2;
  goto done_not_linked;
 }
 VAR_6 = FUNC_11(FUNC_2(VAR_3), VAR_4);
 if (FUNC_10(VAR_6))
  goto done_not_linked;
 VAR_6 = FUNC_5(VAR_3, VAR_4, VAR_8);
 if (VAR_6 == 0)
  FUNC_6 (VAR_3, VAR_4, VAR_3->periodic_size << 3, VAR_8);
 else
  FUNC_12(FUNC_2(VAR_3), VAR_4);
done_not_linked:
 FUNC_9 (&VAR_3->lock, VAR_7);

done:
 if (VAR_6 < 0)
  FUNC_4 (VAR_3, VAR_8);
 return VAR_6;
}
