
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_dring_state {scalar_t__ ident; } ;
struct vio_dring_data {scalar_t__ dring_ident; scalar_t__ start_idx; scalar_t__ end_idx; } ;
struct TYPE_2__ {struct vio_dring_state* drings; } ;
struct vdc_port {TYPE_1__ vio; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct vdc_port*,struct vio_dring_state*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct vdc_port *VAR_2, void *VAR_3)
{
 struct vio_dring_state *VAR_4 = &VAR_2->vio.drings[VAR_1];
 struct vio_dring_data *VAR_5 = VAR_3;

 if (FUNC_0(VAR_5->dring_ident != VAR_4->ident ||
       VAR_5->start_idx != VAR_5->end_idx ||
       VAR_5->start_idx >= VAR_0))
  return 0;

 FUNC_1(VAR_2, VAR_4, VAR_5->start_idx);

 return 0;
}
