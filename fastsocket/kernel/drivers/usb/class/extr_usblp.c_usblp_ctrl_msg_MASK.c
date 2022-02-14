
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usblp {int ifnum; size_t current_protocol; int dev; TYPE_1__* protocol; } ;
struct TYPE_2__ {int alt_setting; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int,int,int,int,int,int) ;
 int FUNC_1 (int ,int ,int,int,int,int,void*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usblp *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, void *VAR_9, int VAR_10)
{
 int VAR_11;
 int VAR_12 = VAR_3->ifnum;




 if ((VAR_4 == VAR_1) && (VAR_5 == VAR_2)) {
   VAR_12 = (VAR_3->ifnum<<8)|VAR_3->protocol[VAR_3->current_protocol].alt_setting;
 }

 VAR_11 = FUNC_1(VAR_3->dev,
  VAR_6 ? FUNC_2(VAR_3->dev, 0) : FUNC_3(VAR_3->dev, 0),
  VAR_4, VAR_5 | VAR_6 | VAR_7, VAR_8, VAR_12, VAR_9, VAR_10, VAR_0);
 FUNC_0("usblp_control_msg: rq: 0x%02x dir: %d recip: %d value: %d idx: %d len: %#x result: %d",
  VAR_4, !!VAR_6, VAR_7, VAR_8, VAR_12, VAR_10, VAR_11);
 return VAR_11 < 0 ? VAR_11 : 0;
}
