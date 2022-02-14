
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hpsb_packet {int node_id; scalar_t__* data; int speed_code; struct hpsb_host* host; } ;
struct hpsb_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hpsb_packet*,int,int,int,int) ;
 struct hpsb_packet* FUNC_1 (int) ;
 int FUNC_2 (struct hpsb_packet*) ;
 scalar_t__ FUNC_3 (struct hpsb_packet*) ;
 int FUNC_4 (scalar_t__*,int *,int) ;

struct hpsb_packet *FUNC_5(struct hpsb_host *VAR_3, u8 * VAR_4,
        int VAR_5, int VAR_6, int VAR_7,
        int VAR_8)
{
 struct hpsb_packet *VAR_9;

 if (VAR_5 == 0)
  return ((void*)0);

 VAR_9 = FUNC_1(VAR_5);
 if (!VAR_9)
  return ((void*)0);

 if (VAR_5 % 4) {
  VAR_9->data[VAR_5 >> 2] = 0;
 }
 VAR_9->host = VAR_3;



 VAR_9->speed_code = VAR_1;


 VAR_9->node_id = VAR_2 | VAR_0;

 if (FUNC_3(VAR_9)) {
  FUNC_2(VAR_9);
  return ((void*)0);
 }

 FUNC_0(VAR_9, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_4)
  FUNC_4(VAR_9->data, VAR_4, VAR_5);

 return VAR_9;
}
