
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usblp {size_t current_protocol; int rcomplete; int rstatus; int lock; scalar_t__ readcount; int urbs; int readbuf; TYPE_2__* protocol; int dev; } ;
struct urb {int dummy; } ;
struct TYPE_4__ {TYPE_1__* epread; } ;
struct TYPE_3__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct urb* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct urb*,int *) ;
 int FUNC_5 (struct urb*,int ,int ,int ,int ,int ,struct usblp*) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct urb*,int ) ;
 int FUNC_9 (struct urb*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(struct usblp *VAR_4)
{
 struct urb *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = -VAR_0;
 if ((VAR_5 = FUNC_3(0, VAR_1)) == ((void*)0))
  goto raise_urb;

 FUNC_5(VAR_5, VAR_4->dev,
  FUNC_7(VAR_4->dev,
    VAR_4->protocol[VAR_4->current_protocol].epread->bEndpointAddress),
  VAR_4->readbuf, VAR_2,
  VAR_3, VAR_4);
 FUNC_4(VAR_5, &VAR_4->urbs);

 FUNC_1(&VAR_4->lock, VAR_6);
 VAR_4->readcount = 0;
 VAR_4->rcomplete = 0;
 FUNC_2(&VAR_4->lock, VAR_6);
 if ((VAR_7 = FUNC_8(VAR_5, VAR_1)) < 0) {
  FUNC_0("error submitting urb (%d)", VAR_7);
  FUNC_1(&VAR_4->lock, VAR_6);
  VAR_4->rstatus = VAR_7;
  VAR_4->rcomplete = 1;
  FUNC_2(&VAR_4->lock, VAR_6);
  goto raise_submit;
 }

 return 0;

raise_submit:
 FUNC_9(VAR_5);
 FUNC_6(VAR_5);
raise_urb:
 return VAR_7;
}
