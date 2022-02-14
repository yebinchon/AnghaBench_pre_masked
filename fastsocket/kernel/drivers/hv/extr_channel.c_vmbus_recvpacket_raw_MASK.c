
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vmpacket_descriptor {int len8; int trans_id; } ;
struct vmbus_channel {int inbound; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct vmpacket_descriptor*,int) ;
 int FUNC_1 (int *,void*,int,int ,int*) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct vmbus_channel*) ;

int FUNC_4(struct vmbus_channel *VAR_1, void *VAR_2,
         u32 VAR_3, u32 *VAR_4,
         u64 *VAR_5)
{
 struct vmpacket_descriptor VAR_6;
 u32 VAR_7;
 int VAR_8;
 bool VAR_9 = 0;

 *VAR_4 = 0;
 *VAR_5 = 0;


 VAR_8 = FUNC_0(&VAR_1->inbound, &VAR_6,
        sizeof(struct vmpacket_descriptor));
 if (VAR_8 != 0)
  return 0;


 VAR_7 = VAR_6.len8 << 3;

 *VAR_4 = VAR_7;

 if (VAR_7 > VAR_3) {
  FUNC_2("Buffer too small - needed %d bytes but "
   "got space for only %d bytes\n",
   VAR_7, VAR_3);
  return -VAR_0;
 }

 *VAR_5 = VAR_6.trans_id;


 VAR_8 = FUNC_1(&VAR_1->inbound, VAR_2, VAR_7, 0,
     &VAR_9);

 if (VAR_9)
  FUNC_3(VAR_1);

 return 0;
}
