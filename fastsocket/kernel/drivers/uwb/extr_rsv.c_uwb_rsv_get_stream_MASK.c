
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int type; TYPE_1__* dev; } ;
struct uwb_rsv {int stream; TYPE_3__ target; struct uwb_rc* rc; } ;
struct device {int dummy; } ;
struct TYPE_5__ {unsigned long* streams; struct device dev; } ;
struct uwb_rc {TYPE_2__ uwb_dev; } ;
struct TYPE_4__ {unsigned long* streams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (unsigned long*,int) ;
 int FUNC_2 (int,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct uwb_rsv *VAR_3)
{
 struct uwb_rc *VAR_4 = VAR_3->rc;
 struct device *VAR_5 = &VAR_4->uwb_dev.dev;
 unsigned long *VAR_6;
 int VAR_7;

 switch (VAR_3->target.type) {
 case 129:
  VAR_6 = VAR_3->target.dev->streams;
  break;
 case 128:
  VAR_6 = VAR_4->uwb_dev.streams;
  break;
 default:
  return -VAR_1;
 }

 VAR_7 = FUNC_1(VAR_6, VAR_2);
 if (VAR_7 >= VAR_2)
  return -VAR_0;

 VAR_3->stream = VAR_7;
 FUNC_2(VAR_7, VAR_6);

 FUNC_0(VAR_5, "get stream %d\n", VAR_3->stream);

 return 0;
}
