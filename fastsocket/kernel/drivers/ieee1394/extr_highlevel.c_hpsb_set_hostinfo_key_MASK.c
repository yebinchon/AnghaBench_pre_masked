
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_host {int dummy; } ;
struct hpsb_highlevel {int dummy; } ;
struct hl_host_info {unsigned long key; } ;


 struct hl_host_info* FUNC_0 (struct hpsb_highlevel*,struct hpsb_host*) ;

void FUNC_1(struct hpsb_highlevel *VAR_0, struct hpsb_host *VAR_1,
      unsigned long VAR_2)
{
 struct hl_host_info *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3)
  VAR_3->key = VAR_2;
 return;
}
