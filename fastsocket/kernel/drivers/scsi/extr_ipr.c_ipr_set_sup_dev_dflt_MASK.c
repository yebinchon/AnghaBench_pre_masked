
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_supported_device {int num_records; scalar_t__ reserved; int data_length; int vpids; } ;
struct ipr_std_inq_vpids {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct ipr_std_inq_vpids*,int) ;
 int FUNC_2 (struct ipr_supported_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ipr_supported_device *VAR_0,
     struct ipr_std_inq_vpids *VAR_1)
{
 FUNC_2(VAR_0, 0, sizeof(struct ipr_supported_device));
 FUNC_1(&VAR_0->vpids, VAR_1, sizeof(struct ipr_std_inq_vpids));
 VAR_0->num_records = 1;
 VAR_0->data_length =
  FUNC_0(sizeof(struct ipr_supported_device));
 VAR_0->reserved = 0;
}
