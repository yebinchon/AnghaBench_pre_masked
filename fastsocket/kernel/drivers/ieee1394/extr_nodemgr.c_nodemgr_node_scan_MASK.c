
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selfid {int link_active; scalar_t__ extended; } ;
struct hpsb_host {int selfid_count; scalar_t__ topology_map; } ;
typedef int nodeid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hpsb_host*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct hpsb_host *VAR_1, int VAR_2)
{
 int VAR_3;
 struct selfid *VAR_4 = (struct selfid *)VAR_1->topology_map;
 nodeid_t VAR_5 = VAR_0;


 for (VAR_3 = VAR_1->selfid_count; VAR_3; VAR_3--, VAR_4++) {
  if (VAR_4->extended)
   continue;

  if (!VAR_4->link_active) {
   VAR_5++;
   continue;
  }
  FUNC_0(VAR_1, VAR_5++, VAR_2);
 }
}
