
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_rdx {int tag; } ;
struct vio_driver_state {int dummy; } ;
typedef int pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct vio_rdx*,int ,int) ;
 int FUNC_2 (struct vio_driver_state*,int *,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct vio_driver_state *VAR_4)
{
 struct vio_rdx VAR_5;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));

 FUNC_0(&VAR_5.tag, VAR_3, VAR_2, VAR_1);

 FUNC_3(VAR_0, "SEND RDX INFO\n");

 return FUNC_2(VAR_4, &VAR_5.tag, sizeof(VAR_5));
}
