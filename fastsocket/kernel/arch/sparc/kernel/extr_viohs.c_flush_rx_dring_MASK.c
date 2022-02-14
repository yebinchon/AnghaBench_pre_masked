
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vio_driver_state {int dr_state; int * desc_buf; struct vio_dring_state* drings; } ;
struct vio_dring_state {int ident; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vio_dring_state*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct vio_driver_state *VAR_2)
{
 struct vio_dring_state *VAR_3;
 u64 VAR_4;

 FUNC_0(!(VAR_2->dr_state & VAR_1));

 VAR_3 = &VAR_2->drings[VAR_0];
 VAR_4 = VAR_3->ident;

 FUNC_0(!VAR_2->desc_buf);
 FUNC_1(VAR_2->desc_buf);
 VAR_2->desc_buf = ((void*)0);

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->ident = VAR_4;
}
