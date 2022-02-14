
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_driver_state {scalar_t__ desc_buf_len; int * desc_buf; int dr_state; struct vio_dring_state* drings; } ;
struct vio_dring_unregister {scalar_t__ dring_ident; } ;
struct vio_dring_state {scalar_t__ ident; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vio_dring_state*,int ,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct vio_driver_state *VAR_3,
     struct vio_dring_unregister *VAR_4)
{
 struct vio_dring_state *VAR_5 = &VAR_3->drings[VAR_1];

 FUNC_2(VAR_0, "GOT DRING_UNREG\n");

 if (VAR_4->dring_ident != VAR_5->ident)
  return 0;

 VAR_3->dr_state &= ~VAR_2;

 FUNC_1(VAR_5, 0, sizeof(*VAR_5));

 FUNC_0(VAR_3->desc_buf);
 VAR_3->desc_buf = ((void*)0);
 VAR_3->desc_buf_len = 0;

 return 0;
}
