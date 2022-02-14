
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int status; scalar_t__ actual; int short_not_ok; int zero; int no_interrupt; int buf; int length; } ;
struct usb_ep {int name; } ;
struct s3c_hsotg_req {int queue; } ;
struct s3c_hsotg_ep {int lock; int queue; struct s3c_hsotg* parent; } ;
struct s3c_hsotg {int dev; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,struct usb_request*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 struct s3c_hsotg_ep* FUNC_4 (struct usb_ep*) ;
 struct s3c_hsotg_req* FUNC_5 (struct usb_request*) ;
 int FUNC_6 (struct s3c_hsotg*,struct s3c_hsotg_ep*,struct usb_request*) ;
 int FUNC_7 (struct s3c_hsotg*,struct s3c_hsotg_ep*,struct s3c_hsotg_req*,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (struct s3c_hsotg*) ;

__attribute__((used)) static int FUNC_11(struct usb_ep *VAR_1, struct usb_request *VAR_2,
         gfp_t VAR_3)
{
 struct s3c_hsotg_req *VAR_4 = FUNC_5(VAR_2);
 struct s3c_hsotg_ep *VAR_5 = FUNC_4(VAR_1);
 struct s3c_hsotg *VAR_6 = VAR_5->parent;
 unsigned long VAR_7;
 bool VAR_8;

 FUNC_1(VAR_6->dev, "%s: req %p: %d@%p, noi=%d, zero=%d, snok=%d\n",
  VAR_1->name, VAR_2, VAR_2->length, VAR_2->buf, VAR_2->no_interrupt,
  VAR_2->zero, VAR_2->short_not_ok);


 FUNC_0(&VAR_4->queue);
 VAR_2->actual = 0;
 VAR_2->status = -VAR_0;


 if (FUNC_10(VAR_6)) {
  int VAR_9 = FUNC_6(VAR_6, VAR_5, VAR_2);
  if (VAR_9)
   return VAR_9;
 }

 FUNC_8(&VAR_5->lock, VAR_7);

 VAR_8 = FUNC_3(&VAR_5->queue);
 FUNC_2(&VAR_4->queue, &VAR_5->queue);

 if (VAR_8)
  FUNC_7(VAR_6, VAR_5, VAR_4, 0);

 FUNC_9(&VAR_5->lock, VAR_7);

 return 0;
}
