
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_ib_dev {TYPE_6__* dev; } ;
struct ib_wc {int wc_flags; TYPE_5__* qp; } ;
struct ib_sa_mad {int dummy; } ;
struct TYPE_9__ {int method; int mgmt_class; int tid; } ;
struct ib_mad {TYPE_3__ mad_hdr; } ;
struct TYPE_7__ {int interface_id; } ;
struct TYPE_8__ {TYPE_1__ global; } ;
struct ib_grh {TYPE_2__ dgid; } ;
struct ib_device {int dummy; } ;
struct TYPE_10__ {int sqp_demux; } ;
struct TYPE_12__ {TYPE_4__ caps; } ;
struct TYPE_11__ {int qp_type; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ib_device*,int,int*,struct ib_mad*) ;
 int FUNC_1 (struct ib_device*,int,int,struct ib_sa_mad*) ;
 int FUNC_2 (struct ib_device*,int,int ) ;
 int FUNC_3 (struct mlx4_ib_dev*,int,int,int ,struct ib_wc*,struct ib_grh*,struct ib_mad*) ;
 int FUNC_4 (struct ib_device*,char*,...) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (char*,int,int) ;
 struct mlx4_ib_dev* FUNC_7 (struct ib_device*) ;

__attribute__((used)) static int FUNC_8(struct ib_device *VAR_3, u8 VAR_4,
   struct ib_wc *VAR_5, struct ib_grh *VAR_6,
   struct ib_mad *VAR_7)
{
 struct mlx4_ib_dev *VAR_8 = FUNC_7(VAR_3);
 int VAR_9;
 int VAR_10;
 u8 *VAR_11;


 VAR_10 = FUNC_5(VAR_8->dev);


 if (VAR_7->mad_hdr.method & 0x80) {
  VAR_11 = (u8 *) &VAR_7->mad_hdr.tid;
  VAR_10 = *VAR_11;
  if (VAR_10 != 255)
   *VAR_11 = 0;
 }


 if (VAR_5->wc_flags & VAR_2) {
  VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_6->dgid.global.interface_id);
  if (VAR_10 < 0) {
   FUNC_4(VAR_3, "failed matching grh\n");
   return -VAR_0;
  }
 }

 switch (VAR_7->mad_hdr.mgmt_class) {
 case 128:
  if (FUNC_1(VAR_3, VAR_4, VAR_10,
          (struct ib_sa_mad *) VAR_7))
   return 0;
  break;
 case 130:
  if (FUNC_0(VAR_3, VAR_4, &VAR_10, VAR_7))
   return 0;
  break;
 case 129:
  if (VAR_7->mad_hdr.method != VAR_1)
   return 0;
  break;
 default:

  if (VAR_10 != FUNC_5(VAR_8->dev)) {
   FUNC_6("dropping unsupported ingress mad from class:%d "
     "for slave:%d\n", VAR_7->mad_hdr.mgmt_class, VAR_10);
   return 0;
  }
 }

 if (VAR_10 >= VAR_8->dev->caps.sqp_demux) {
  FUNC_4(VAR_3, "slave id: %d is bigger than allowed:%d\n",
        VAR_10, VAR_8->dev->caps.sqp_demux);
  return -VAR_0;
 }

 VAR_9 = FUNC_3(VAR_8, VAR_10, VAR_4, VAR_5->qp->qp_type, VAR_5, VAR_6, VAR_7);
 if (VAR_9)
  FUNC_6("failed sending to slave %d via tunnel qp (%d)\n",
    VAR_10, VAR_9);
 return 0;
}
