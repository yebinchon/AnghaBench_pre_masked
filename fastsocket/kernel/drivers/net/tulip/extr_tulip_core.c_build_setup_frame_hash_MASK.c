
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct tulip_private {void** setup_frame; } ;
struct net_device {int mc_count; scalar_t__ dev_addr; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int dmi_addr; struct dev_mc_list* next; } ;
typedef int hash_table ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (void**,int ,int) ;
 struct tulip_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int,void**) ;

__attribute__((used)) static void FUNC_4(u16 *VAR_1, struct net_device *VAR_2)
{
 struct tulip_private *VAR_3 = FUNC_2(VAR_2);
 u16 VAR_4[32];
 struct dev_mc_list *VAR_5;
 int VAR_6;
 u16 *VAR_7;

 FUNC_1(VAR_4, 0, sizeof(VAR_4));
 FUNC_3(255, VAR_4);

 for (VAR_6 = 0, VAR_5 = VAR_2->mc_list; VAR_5 && VAR_6 < VAR_2->mc_count;
      VAR_6++, VAR_5 = VAR_5->next) {
  int VAR_8 = FUNC_0(VAR_0, VAR_5->dmi_addr) & 0x1ff;

  FUNC_3(VAR_8, VAR_4);

 }
 for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
  *VAR_1++ = VAR_4[VAR_6];
  *VAR_1++ = VAR_4[VAR_6];
 }
 VAR_1 = &VAR_3->setup_frame[13*6];


 VAR_7 = (u16 *)VAR_2->dev_addr;
 *VAR_1++ = VAR_7[0]; *VAR_1++ = VAR_7[0];
 *VAR_1++ = VAR_7[1]; *VAR_1++ = VAR_7[1];
 *VAR_1++ = VAR_7[2]; *VAR_1++ = VAR_7[2];
}
