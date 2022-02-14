
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct node_entry {int nodeid; int host; } ;
struct hpsb_packet {int dummy; } ;
typedef int quadlet_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct hpsb_packet* FUNC_0 (int ,int ,int ,int *,size_t) ;
 int FUNC_1 (struct node_entry*,struct hpsb_packet*) ;
 scalar_t__ FUNC_2 (struct hpsb_packet*) ;
 int FUNC_3 (struct hpsb_packet*,int (*) (struct hpsb_packet*),struct hpsb_packet*) ;
 int FUNC_4 (struct hpsb_packet*) ;

__attribute__((used)) static int FUNC_5(struct node_entry *VAR_2, u64 VAR_3,
           quadlet_t *VAR_4, size_t VAR_5)
{
 struct hpsb_packet *VAR_6;

 VAR_6 = FUNC_0(VAR_2->host, VAR_2->nodeid, VAR_3, VAR_4, VAR_5);
 if (!VAR_6)
  return -VAR_1;

 FUNC_3(VAR_6, FUNC_4, VAR_6);
 FUNC_1(VAR_2, VAR_6);
 if (FUNC_2(VAR_6) < 0) {
  FUNC_4(VAR_6);
  return -VAR_0;
 }
 return 0;
}
