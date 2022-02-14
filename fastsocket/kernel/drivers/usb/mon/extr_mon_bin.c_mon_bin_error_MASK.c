
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {TYPE_3__* dev; TYPE_1__* ep; } ;
struct mon_reader_bin {int b_wait; int b_lock; } ;
struct mon_bin_hdr {char type; unsigned long id; int status; char flag_setup; char flag_data; int busnum; int devnum; int epnum; int xfer_type; } ;
struct TYPE_6__ {TYPE_2__* bus; int devnum; } ;
struct TYPE_5__ {int busnum; } ;
struct TYPE_4__ {int desc; } ;


 struct mon_bin_hdr* FUNC_0 (struct mon_reader_bin*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mon_bin_hdr*,int ,int ) ;
 unsigned int FUNC_2 (struct mon_reader_bin*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct urb*) ;
 int FUNC_8 (int *) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_9(void *VAR_3, struct urb *VAR_4, int VAR_5)
{
 struct mon_reader_bin *VAR_6 = VAR_3;
 unsigned long VAR_7;
 unsigned int VAR_8;
 struct mon_bin_hdr *VAR_9;

 FUNC_3(&VAR_6->b_lock, VAR_7);

 VAR_8 = FUNC_2(VAR_6, VAR_0);
 if (VAR_8 == ~0) {

  FUNC_4(&VAR_6->b_lock, VAR_7);
  return;
 }

 VAR_9 = FUNC_0(VAR_6, VAR_8);

 FUNC_1(VAR_9, 0, VAR_0);
 VAR_9->type = 'E';
 VAR_9->xfer_type = VAR_2[FUNC_6(&VAR_4->ep->desc)];
 VAR_9->epnum = FUNC_7(VAR_4) ? VAR_1 : 0;
 VAR_9->epnum |= FUNC_5(&VAR_4->ep->desc);
 VAR_9->devnum = VAR_4->dev->devnum;
 VAR_9->busnum = VAR_4->dev->bus->busnum;
 VAR_9->id = (unsigned long) VAR_4;
 VAR_9->status = VAR_5;

 VAR_9->flag_setup = '-';
 VAR_9->flag_data = 'E';

 FUNC_4(&VAR_6->b_lock, VAR_7);

 FUNC_8(&VAR_6->b_wait);
}
