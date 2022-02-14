
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hpsb_packet {int node_id; struct hpsb_host* host; } ;
struct hpsb_host {int dummy; } ;
typedef int nodeid_t ;


 int FUNC_0 (struct hpsb_packet*,int ,size_t) ;
 int FUNC_1 (struct hpsb_packet*,int ) ;
 struct hpsb_packet* FUNC_2 (size_t) ;
 int FUNC_3 (struct hpsb_packet*) ;
 scalar_t__ FUNC_4 (struct hpsb_packet*) ;

struct hpsb_packet *FUNC_5(struct hpsb_host *VAR_0, nodeid_t VAR_1,
      u64 VAR_2, size_t VAR_3)
{
 struct hpsb_packet *VAR_4;

 if (VAR_3 == 0)
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->host = VAR_0;
 VAR_4->node_id = VAR_1;

 if (FUNC_4(VAR_4)) {
  FUNC_3(VAR_4);
  return ((void*)0);
 }

 if (VAR_3 == 4)
  FUNC_1(VAR_4, VAR_2);
 else
  FUNC_0(VAR_4, VAR_2, VAR_3);

 return VAR_4;
}
