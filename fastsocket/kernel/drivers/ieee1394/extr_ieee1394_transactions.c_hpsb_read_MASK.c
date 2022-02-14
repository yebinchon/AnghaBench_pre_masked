
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hpsb_packet {unsigned int generation; int data; int * header; } ;
struct hpsb_host {int dummy; } ;
typedef int quadlet_t ;
typedef int nodeid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hpsb_packet*) ;
 int FUNC_1 (struct hpsb_packet*) ;
 struct hpsb_packet* FUNC_2 (struct hpsb_host*,int ,int ,size_t) ;
 int FUNC_3 (struct hpsb_packet*) ;
 int FUNC_4 (struct hpsb_packet*) ;
 int FUNC_5 (int *,int ,size_t) ;

int FUNC_6(struct hpsb_host *VAR_2, nodeid_t VAR_3, unsigned int VAR_4,
       u64 VAR_5, quadlet_t * VAR_6, size_t VAR_7)
{
 struct hpsb_packet *VAR_8;
 int VAR_9 = 0;

 if (VAR_7 == 0)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_5, VAR_7);

 if (!VAR_8) {
  return -VAR_1;
 }

 VAR_8->generation = VAR_4;
 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9 < 0)
  goto hpsb_read_fail;

 VAR_9 = FUNC_3(VAR_8);

 if (VAR_9 == 0) {
  if (VAR_7 == 4) {
   *VAR_6 = VAR_8->header[3];
  } else {
   FUNC_5(VAR_6, VAR_8->data, VAR_7);
  }
 }

      hpsb_read_fail:
 FUNC_1(VAR_8);
 FUNC_0(VAR_8);

 return VAR_9;
}
