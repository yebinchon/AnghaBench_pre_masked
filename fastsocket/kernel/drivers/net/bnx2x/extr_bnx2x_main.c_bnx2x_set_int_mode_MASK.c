
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int num_queues; int num_cnic_queues; int num_ethernet_queues; } ;


 int FUNC_0 (char*,...) ;



 int VAR_0 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int VAR_1 ;

int FUNC_4(struct bnx2x *VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_1(VAR_2) && VAR_1 != 128)
  return -VAR_0;

 switch (VAR_1) {
 case 128:

  VAR_3 = FUNC_3(VAR_2);


  if (!VAR_3)
   return 0;


  if (VAR_3 && FUNC_1(VAR_2))
   return VAR_3;


  FUNC_0("Failed to enable multiple MSI-X (%d), set number of queues to %d\n",
          VAR_2->num_queues,
          1 + VAR_2->num_cnic_queues);


 case 129:
  FUNC_2(VAR_2);


 case 130:
  VAR_2->num_ethernet_queues = 1;
  VAR_2->num_queues = VAR_2->num_ethernet_queues + VAR_2->num_cnic_queues;
  FUNC_0("set number of queues to 1\n");
  break;
 default:
  FUNC_0("unknown value in int_mode module parameter\n");
  return -VAR_0;
 }
 return 0;
}
