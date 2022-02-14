
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*,int ,int ) ;
 int FUNC_3 (char*,struct ifnet*,int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int
FUNC_5(struct ifnet *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 != 0) {
  FUNC_4("gif_clone_destroy: gif remove failed %d\n", VAR_2);
  return (VAR_2);
 }

 VAR_2 = FUNC_2(VAR_1, 0, VAR_0);
 if (VAR_2 != 0) {
  FUNC_4("gif_clone_destroy: ifnet_set_flags failed %d\n", VAR_2);
 }

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 != 0)
  FUNC_3("gif_clone_destroy: ifnet_detach(%p) failed %d\n", VAR_1,
      VAR_2);
 return (0);
}
