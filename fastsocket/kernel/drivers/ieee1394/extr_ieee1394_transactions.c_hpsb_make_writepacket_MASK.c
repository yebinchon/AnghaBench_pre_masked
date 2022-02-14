
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hpsb_packet {scalar_t__* data; int node_id; struct hpsb_host* host; } ;
struct hpsb_host {int dummy; } ;
typedef int quadlet_t ;
typedef int nodeid_t ;


 int FUNC_0 (struct hpsb_packet*,int ,size_t) ;
 int FUNC_1 (struct hpsb_packet*,int ,int ) ;
 struct hpsb_packet* FUNC_2 (size_t) ;
 int FUNC_3 (struct hpsb_packet*) ;
 scalar_t__ FUNC_4 (struct hpsb_packet*) ;
 int FUNC_5 (scalar_t__*,int *,size_t) ;

struct hpsb_packet *FUNC_6(struct hpsb_host *VAR_0, nodeid_t VAR_1,
       u64 VAR_2, quadlet_t * VAR_3,
       size_t VAR_4)
{
 struct hpsb_packet *VAR_5;

 if (VAR_4 == 0)
  return ((void*)0);

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5)
  return ((void*)0);

 if (VAR_4 % 4) {
  VAR_5->data[VAR_4 >> 2] = 0;
 }
 VAR_5->host = VAR_0;
 VAR_5->node_id = VAR_1;

 if (FUNC_4(VAR_5)) {
  FUNC_3(VAR_5);
  return ((void*)0);
 }

 if (VAR_4 == 4) {
  FUNC_1(VAR_5, VAR_2, VAR_3 ? *VAR_3 : 0);
 } else {
  FUNC_0(VAR_5, VAR_2, VAR_4);
  if (VAR_3)
   FUNC_5(VAR_5->data, VAR_3, VAR_4);
 }

 return VAR_5;
}
