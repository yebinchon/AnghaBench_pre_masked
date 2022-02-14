
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_packet {int node_id; int tlabel; int no_waiter; scalar_t__* data; int generation; struct hpsb_host* host; int state; int type; } ;
struct hpsb_host {int dummy; } ;
typedef int quadlet_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct hpsb_host*) ;
 struct hpsb_packet* FUNC_2 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static struct hpsb_packet *FUNC_4(struct hpsb_host *VAR_2,
            quadlet_t *VAR_3, size_t VAR_4)
{
 struct hpsb_packet *VAR_5;

 VAR_5 = FUNC_2(VAR_4);
 if (FUNC_3(VAR_5 == ((void*)0))) {

  FUNC_0("out of memory, cannot send response packet");
  return ((void*)0);
 }

 VAR_5->type = VAR_0;
 VAR_5->state = VAR_1;
 VAR_5->host = VAR_2;
 VAR_5->node_id = VAR_3[1] >> 16;
 VAR_5->tlabel = (VAR_3[0] >> 10) & 0x3f;
 VAR_5->no_waiter = 1;

 VAR_5->generation = FUNC_1(VAR_2);

 if (VAR_4 % 4)
  VAR_5->data[VAR_4 / 4] = 0;

 return VAR_5;
}
