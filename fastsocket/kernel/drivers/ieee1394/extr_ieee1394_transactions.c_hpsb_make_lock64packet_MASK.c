
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hpsb_packet {int* data; int node_id; struct hpsb_host* host; } ;
struct hpsb_host {int dummy; } ;
typedef int octlet_t ;
typedef int nodeid_t ;




 int FUNC_0 (struct hpsb_packet*,int ,int,int) ;
 struct hpsb_packet* FUNC_1 (int) ;
 int FUNC_2 (struct hpsb_packet*) ;
 scalar_t__ FUNC_3 (struct hpsb_packet*) ;

struct hpsb_packet *FUNC_4(struct hpsb_host *VAR_0,
        nodeid_t VAR_1, u64 VAR_2, int VAR_3,
        octlet_t * VAR_4, octlet_t VAR_5)
{
 struct hpsb_packet *VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_1(16);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->host = VAR_0;
 VAR_6->node_id = VAR_1;
 if (FUNC_3(VAR_6)) {
  FUNC_2(VAR_6);
  return ((void*)0);
 }

 switch (VAR_3) {
 case 129:
 case 128:
  VAR_7 = 8;
  if (VAR_4) {
   VAR_6->data[0] = *VAR_4 >> 32;
   VAR_6->data[1] = *VAR_4 & 0xffffffff;
  }
  break;
 default:
  VAR_7 = 16;
  if (VAR_4) {
   VAR_6->data[0] = VAR_5 >> 32;
   VAR_6->data[1] = VAR_5 & 0xffffffff;
   VAR_6->data[2] = *VAR_4 >> 32;
   VAR_6->data[3] = *VAR_4 & 0xffffffff;
  }
  break;
 }
 FUNC_0(VAR_6, VAR_2, VAR_3, VAR_7);

 return VAR_6;
}
