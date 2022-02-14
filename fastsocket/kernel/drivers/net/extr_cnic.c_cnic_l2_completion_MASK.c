
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int conn_and_cmd_data; } ;
struct TYPE_5__ {int type_error_flags; } ;
union eth_rx_cqe {TYPE_3__ ramrod_cqe; TYPE_2__ fast_path_cqe; } ;
typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct cnic_uio_dev {scalar_t__ l2_ring; } ;
struct cnic_local {size_t* rx_cons_ptr; size_t rx_cons; TYPE_1__* dev; struct cnic_uio_dev* udev; } ;
struct TYPE_4__ {int flags; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct cnic_local *VAR_7)
{
 u16 VAR_8, VAR_9;
 struct cnic_uio_dev *VAR_10 = VAR_7->udev;
 union eth_rx_cqe *VAR_11, *VAR_12 = (union eth_rx_cqe *)
     (VAR_10->l2_ring + (2 * VAR_1));
 u32 VAR_13;
 int VAR_14 = 0;

 if (!FUNC_2(VAR_2, &VAR_7->dev->flags))
  return 0;

 VAR_8 = *VAR_7->rx_cons_ptr;
 if ((VAR_8 & VAR_0) == VAR_0)
  VAR_8++;

 VAR_9 = VAR_7->rx_cons;
 while (VAR_9 != VAR_8) {
  u8 VAR_15;

  VAR_11 = &VAR_12[VAR_9 & VAR_0];
  VAR_15 = VAR_11->fast_path_cqe.type_error_flags;
  if (VAR_15 & VAR_4) {
   VAR_13 = FUNC_1(VAR_11->ramrod_cqe.conn_and_cmd_data);
   VAR_13 >>= VAR_3;
   if (VAR_13 == VAR_5 ||
       VAR_13 == VAR_6)
    VAR_14++;
  }
  VAR_9 = FUNC_0(VAR_9);
 }
 return VAR_14;
}
