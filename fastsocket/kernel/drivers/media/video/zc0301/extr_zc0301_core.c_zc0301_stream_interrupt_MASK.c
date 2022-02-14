
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zc0301_device {scalar_t__ stream; int state; TYPE_1__* v4ldev; int wait_stream; } ;
struct TYPE_2__ {int num; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 long FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct zc0301_device* VAR_7)
{
 long VAR_8;

 VAR_7->stream = VAR_4;
 VAR_8 = FUNC_1(VAR_7->wait_stream,
         (VAR_7->stream == VAR_5) ||
         (VAR_7->state & VAR_0),
         VAR_6);
 if (VAR_7->state & VAR_0)
  return -VAR_3;
 else if (VAR_7->stream != VAR_5) {
  VAR_7->state |= VAR_1;
  FUNC_0(1, "URB timeout reached. The camera is misconfigured. To "
         "use it, close and open /dev/video%d again.",
      VAR_7->v4ldev->num);
  return -VAR_2;
 }

 return 0;
}
