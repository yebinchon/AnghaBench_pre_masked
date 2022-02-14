
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vmpacket_descriptor {int type; } ;
struct netvsc_device {struct net_device* ndev; } ;
struct net_device {int dummy; } ;
struct hv_device {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 struct netvsc_device* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 unsigned char* FUNC_3 (int,int ) ;
 int FUNC_4 (struct net_device*,char*,int,...) ;
 int FUNC_5 (struct hv_device*,struct vmpacket_descriptor*) ;
 int FUNC_6 (struct hv_device*,struct vmpacket_descriptor*) ;
 int FUNC_7 (int ,unsigned char*,int,int*,int *) ;

__attribute__((used)) static void FUNC_8(void *VAR_3)
{
 int VAR_4;
 struct hv_device *VAR_5 = VAR_3;
 struct netvsc_device *VAR_6;
 u32 VAR_7;
 u64 VAR_8;
 unsigned char *VAR_9;
 struct vmpacket_descriptor *VAR_10;
 unsigned char *VAR_11;
 int VAR_12 = VAR_2;
 struct net_device *VAR_13;

 VAR_9 = FUNC_3(VAR_2 * sizeof(unsigned char),
    VAR_1);
 if (!VAR_9)
  return;
 VAR_11 = VAR_9;

 VAR_6 = FUNC_0(VAR_5);
 if (!VAR_6)
  goto out;
 VAR_13 = VAR_6->ndev;

 do {
  VAR_4 = FUNC_7(VAR_5->channel, VAR_11, VAR_12,
        &VAR_7, &VAR_8);
  if (VAR_4 == 0) {
   if (VAR_7 > 0) {
    VAR_10 = (struct vmpacket_descriptor *)VAR_11;
    switch (VAR_10->type) {
    case 129:
     FUNC_6(VAR_5, VAR_10);
     break;

    case 128:
     FUNC_5(VAR_5, VAR_10);
     break;

    default:
     FUNC_4(VAR_13,
         "unhandled packet type %d, "
         "tid %llx len %d\n",
         VAR_10->type, VAR_8,
         VAR_7);
     break;
    }


    if (VAR_12 > VAR_2) {
     FUNC_1(VAR_11);
     VAR_11 = VAR_9;
     VAR_12 = VAR_2;
    }
   } else {

    if (VAR_12 > VAR_2) {
     FUNC_1(VAR_11);
     VAR_11 = VAR_9;
     VAR_12 = VAR_2;
    }

    break;
   }
  } else if (VAR_4 == -VAR_0) {

   VAR_11 = FUNC_2(VAR_7, VAR_1);
   if (VAR_11 == ((void*)0)) {

    FUNC_4(VAR_13,
        "unable to allocate buffer of size "
        "(%d)!!\n", VAR_7);
    break;
   }

   VAR_12 = VAR_7;
  }
 } while (1);

out:
 FUNC_1(VAR_11);
 return;
}
