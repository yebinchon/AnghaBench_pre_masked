
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {unsigned int base_addr; int mc_count; unsigned char* dev_addr; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {unsigned char* dmi_addr; struct dev_mc_list* next; } ;
struct TYPE_3__ {scalar_t__ mohawk; } ;
typedef TYPE_1__ local_info_t ;


 int FUNC_0 (int,unsigned char) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_0)
{
    unsigned int VAR_1 = VAR_0->base_addr;
    local_info_t *VAR_2 = FUNC_2(VAR_0);
    struct dev_mc_list *VAR_3 = VAR_0->mc_list;
    unsigned char *VAR_4;
    int VAR_5,VAR_6,VAR_7,VAR_8;

    FUNC_1(VAR_7=0x50);
    for (VAR_5=0,VAR_6=8,VAR_8=0; ; VAR_5++, VAR_6++) {
 if (VAR_5 > 5) {
     if (++VAR_8 > 9)
  break;
     VAR_5 = 0;
     if (VAR_8 > 1 && VAR_8 <= VAR_0->mc_count && VAR_3) {
      VAR_3 = VAR_3->next;
     }
 }
 if (VAR_6 > 15) {
     VAR_6 = 8;
     VAR_7++;
     FUNC_1(VAR_7);
 }

 if (VAR_8 && VAR_8 <= VAR_0->mc_count && VAR_3)
     VAR_4 = VAR_3->dmi_addr;
 else
     VAR_4 = VAR_0->dev_addr;

 if (VAR_2->mohawk)
     FUNC_0(VAR_6, VAR_4[5-VAR_5]);
 else
     FUNC_0(VAR_6, VAR_4[VAR_5]);
    }
    FUNC_1(0);
}
