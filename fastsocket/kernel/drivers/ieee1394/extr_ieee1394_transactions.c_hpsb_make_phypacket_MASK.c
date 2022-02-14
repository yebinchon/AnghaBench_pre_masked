
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_packet {struct hpsb_host* host; } ;
struct hpsb_host {int dummy; } ;
typedef int quadlet_t ;


 int FUNC_0 (struct hpsb_packet*,int ) ;
 struct hpsb_packet* FUNC_1 (int ) ;

struct hpsb_packet *FUNC_2(struct hpsb_host *VAR_0, quadlet_t VAR_1)
{
 struct hpsb_packet *VAR_2;

 VAR_2 = FUNC_1(0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->host = VAR_0;
 FUNC_0(VAR_2, VAR_1);

 return VAR_2;
}
