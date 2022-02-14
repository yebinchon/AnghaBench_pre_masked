
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {int actual_length; int transfer_buffer_length; TYPE_2__* ep; TYPE_1__* dev; struct api_context* context; } ;
struct api_context {int status; int done; } ;
struct TYPE_6__ {int comm; } ;
struct TYPE_5__ {int desc; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_0 (int *,char*,int ,int ,char*,int,int ) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (struct urb*,int ) ;
 scalar_t__ FUNC_8 (struct urb*) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct urb *VAR_5, int VAR_6, int *VAR_7)
{
 struct api_context VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 FUNC_1(&VAR_8.done);
 VAR_5->context = &VAR_8;
 VAR_5->actual_length = 0;
 VAR_10 = FUNC_7(VAR_5, VAR_2);
 if (FUNC_3(VAR_10))
  goto out;

 VAR_9 = VAR_6 ? FUNC_2(VAR_6) : VAR_3;
 if (!FUNC_9(&VAR_8.done, VAR_9)) {
  FUNC_6(VAR_5);
  VAR_10 = (VAR_8.status == -VAR_0 ? -VAR_1 : VAR_8.status);

  FUNC_0(&VAR_5->dev->dev,
   "%s timed out on ep%d%s len=%u/%u\n",
   VAR_4->comm,
   FUNC_4(&VAR_5->ep->desc),
   FUNC_8(VAR_5) ? "in" : "out",
   VAR_5->actual_length,
   VAR_5->transfer_buffer_length);
 } else
  VAR_10 = VAR_8.status;
out:
 if (VAR_7)
  *VAR_7 = VAR_5->actual_length;

 FUNC_5(VAR_5);
 return VAR_10;
}
