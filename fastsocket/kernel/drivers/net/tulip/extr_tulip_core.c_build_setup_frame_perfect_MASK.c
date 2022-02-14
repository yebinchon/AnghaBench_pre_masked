
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct tulip_private {void** setup_frame; } ;
struct net_device {int mc_count; scalar_t__ dev_addr; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {scalar_t__ dmi_addr; struct dev_mc_list* next; } ;


 int FUNC_0 (void**,int,int) ;
 struct tulip_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(u16 *VAR_0, struct net_device *VAR_1)
{
 struct tulip_private *VAR_2 = FUNC_1(VAR_1);
 struct dev_mc_list *VAR_3;
 int VAR_4;
 u16 *VAR_5;



 for (VAR_4 = 0, VAR_3 = VAR_1->mc_list; VAR_4 < VAR_1->mc_count;
      VAR_4++, VAR_3 = VAR_3->next) {
  VAR_5 = (u16 *)VAR_3->dmi_addr;
  *VAR_0++ = *VAR_5; *VAR_0++ = *VAR_5++;
  *VAR_0++ = *VAR_5; *VAR_0++ = *VAR_5++;
  *VAR_0++ = *VAR_5; *VAR_0++ = *VAR_5++;
 }

 FUNC_0(VAR_0, 0xff, (15-VAR_4)*12);
 VAR_0 = &VAR_2->setup_frame[15*6];


 VAR_5 = (u16 *)VAR_1->dev_addr;
 *VAR_0++ = VAR_5[0]; *VAR_0++ = VAR_5[0];
 *VAR_0++ = VAR_5[1]; *VAR_0++ = VAR_5[1];
 *VAR_0++ = VAR_5[2]; *VAR_0++ = VAR_5[2];
}
