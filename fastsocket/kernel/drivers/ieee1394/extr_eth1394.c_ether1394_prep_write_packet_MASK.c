
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hpsb_packet {int node_id; int tcode; int header_size; int expect_response; int* header; int tlabel; int data_size; void* data; } ;
struct hpsb_host {int node_id; } ;
typedef int nodeid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hpsb_packet*) ;

__attribute__((used)) static int FUNC_1(struct hpsb_packet *VAR_2,
           struct hpsb_host *VAR_3, nodeid_t VAR_4,
           u64 VAR_5, void *VAR_6, int VAR_7)
{
 VAR_2->node_id = VAR_4;

 if (FUNC_0(VAR_2))
  return -VAR_0;

 VAR_2->tcode = VAR_1;
 VAR_2->header_size = 16;
 VAR_2->expect_response = 1;
 VAR_2->header[0] =
  VAR_2->node_id << 16 | VAR_2->tlabel << 10 | 1 << 8 | VAR_1 << 4;
 VAR_2->header[1] = VAR_3->node_id << 16 | VAR_5 >> 32;
 VAR_2->header[2] = VAR_5 & 0xffffffff;
 VAR_2->header[3] = VAR_7 << 16;
 VAR_2->data_size = (VAR_7 + 3) & ~3;
 VAR_2->data = VAR_6;

 return 0;
}
