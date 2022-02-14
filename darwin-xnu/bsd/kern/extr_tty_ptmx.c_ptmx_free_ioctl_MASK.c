
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptmx_ioctl {int pt_flags; int pt_tty; int * pt_devhandle; } ;
struct TYPE_2__ {int pis_total; int pis_free; struct ptmx_ioctl** pis_ioctl_list; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct ptmx_ioctl*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(int VAR_4, int VAR_5)
{
 struct ptmx_ioctl *VAR_6 = ((void*)0);

 FUNC_0();

 if (VAR_4 < 0 || VAR_4 >= VAR_3.pis_total) {
  FUNC_1();
  return (-1);
 }

 VAR_3.pis_ioctl_list[VAR_4]->pt_flags &= ~(VAR_5);






 if (!(VAR_3.pis_ioctl_list[VAR_4]->pt_flags & (VAR_1|VAR_2))) {

  VAR_6 = VAR_3.pis_ioctl_list[ VAR_4];
  VAR_3.pis_ioctl_list[VAR_4] = ((void*)0);
  VAR_3.pis_free++;
 }
 FUNC_1();


 if (VAR_6 != ((void*)0)) {






  if (VAR_6->pt_devhandle != ((void*)0))
   FUNC_3(VAR_6->pt_devhandle);
  FUNC_4(VAR_6->pt_tty);
  FUNC_2(VAR_6, VAR_0);
 }

 return (0);
}
