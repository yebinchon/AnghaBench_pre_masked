
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* wwn_t ;
struct bfad_s {int dummy; } ;
struct bfa_fcs_fabric_s {scalar_t__ fabric_name; int bport; TYPE_1__* fcs; } ;
struct TYPE_2__ {scalar_t__ bfad; } ;


 int FUNC_0 (int ,struct bfad_s*,int ,char*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,void*) ;
 int FUNC_5 (char*,int ) ;

void
FUNC_6(struct bfa_fcs_fabric_s *VAR_4,
          wwn_t VAR_5)
{
 struct bfad_s *VAR_6 = (struct bfad_s *)VAR_4->fcs->bfad;
 char VAR_7[VAR_1];
 char VAR_8[VAR_1];

 FUNC_4(VAR_4->fcs, VAR_5);

 if (VAR_4->fabric_name == 0) {




  VAR_4->fabric_name = VAR_5;
 } else {
  VAR_4->fabric_name = VAR_5;
  FUNC_5(VAR_7, FUNC_3(&VAR_4->bport));
  FUNC_5(VAR_8,
   FUNC_2(&VAR_4->bport));
  FUNC_0(VAR_2, VAR_6, VAR_3,
   "Base port WWN = %s Fabric WWN = %s\n",
   VAR_7, VAR_8);
  FUNC_1(&VAR_4->bport,
    VAR_0);
 }
}
