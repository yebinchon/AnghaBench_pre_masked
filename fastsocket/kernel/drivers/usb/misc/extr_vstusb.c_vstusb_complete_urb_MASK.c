
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {int status; int actual_length; int transfer_buffer_length; int pipe; TYPE_1__* dev; } ;
struct completion {int dummy; } ;
struct TYPE_5__ {int comm; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_0 (int *,char*,int ,int ,char*,int,int ,int) ;
 unsigned long FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct urb*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct completion*,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct urb *VAR_7, struct completion *VAR_8,
          int VAR_9, int *VAR_10)
{
 unsigned long VAR_11;
 int VAR_12;

 VAR_11 = VAR_9 ? FUNC_1(VAR_9) : VAR_5;
 if (!FUNC_6(VAR_8, VAR_11)) {
  FUNC_3(VAR_7);
  VAR_12 = VAR_7->status == -VAR_2 ? -VAR_4 : VAR_7->status;

  FUNC_0(&VAR_7->dev->dev,
   "%s timed out on ep%d%s len=%d/%d, urb status = %d\n",
   VAR_6->comm,
   FUNC_4(VAR_7->pipe),
   FUNC_5(VAR_7->pipe) ? "in" : "out",
   VAR_7->actual_length,
   VAR_7->transfer_buffer_length,
   VAR_7->status);

 } else {
  if (FUNC_2(VAR_6)) {

   if (VAR_7->status && !((VAR_7->status == -VAR_2) ||
          (VAR_7->status == -VAR_0) ||
          (VAR_7->status == -VAR_3))) {
    VAR_12 = -VAR_1;
    FUNC_3(VAR_7);
   } else {
    VAR_12 = 0;
   }

   FUNC_0(&VAR_7->dev->dev,
    "%s: signal pending on ep%d%s len=%d/%d,"
    "urb status = %d\n",
    VAR_6->comm,
    FUNC_4(VAR_7->pipe),
    FUNC_5(VAR_7->pipe) ? "in" : "out",
    VAR_7->actual_length,
    VAR_7->transfer_buffer_length,
    VAR_7->status);

  } else {
   VAR_12 = VAR_7->status;
  }
 }

 if (VAR_10)
  *VAR_10 = VAR_7->actual_length;

 return VAR_12;
}
