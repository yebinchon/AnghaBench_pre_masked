
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {unsigned int mmcies_max; int (* mmcie_rm ) (struct wusbhc*,unsigned int) ;int mmcie_mutex; struct wuie_hdr** mmcie; } ;
struct wuie_hdr {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wusbhc*,unsigned int) ;

void FUNC_3(struct wusbhc *VAR_0, struct wuie_hdr *VAR_1)
{
 int VAR_2;
 unsigned VAR_3, VAR_4;

 FUNC_0(&VAR_0->mmcie_mutex);
 for (VAR_4 = 0; VAR_4 < VAR_0->mmcies_max; VAR_4++) {
  if (VAR_0->mmcie[VAR_4] == VAR_1) {
   VAR_3 = VAR_4;
   goto found;
  }
 }
 FUNC_1(&VAR_0->mmcie_mutex);
 return;

found:
 VAR_2 = (VAR_0->mmcie_rm)(VAR_0, VAR_3);
 if (VAR_2 == 0)
  VAR_0->mmcie[VAR_4] = ((void*)0);
 FUNC_1(&VAR_0->mmcie_mutex);
}
