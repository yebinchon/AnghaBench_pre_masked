
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hpsb_packet {unsigned int generation; int * data; } ;
struct hpsb_host {int dummy; } ;
typedef int quadlet_t ;
typedef int nodeid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hpsb_packet*) ;
 int FUNC_1 (struct hpsb_packet*) ;
 struct hpsb_packet* FUNC_2 (struct hpsb_host*,int ,int ,int,int *,int ) ;
 int FUNC_3 (struct hpsb_packet*) ;
 int FUNC_4 (struct hpsb_packet*) ;

int FUNC_5(struct hpsb_host *VAR_1, nodeid_t VAR_2, unsigned int VAR_3,
       u64 VAR_4, int VAR_5, quadlet_t *VAR_6, quadlet_t VAR_7)
{
 struct hpsb_packet *VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_4, VAR_5, VAR_6, VAR_7);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->generation = VAR_3;
 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9 < 0)
  goto hpsb_lock_fail;

 VAR_9 = FUNC_3(VAR_8);

 if (VAR_9 == 0)
  *VAR_6 = VAR_8->data[0];

hpsb_lock_fail:
 FUNC_1(VAR_8);
 FUNC_0(VAR_8);

 return VAR_9;
}
