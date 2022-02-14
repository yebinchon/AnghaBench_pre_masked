
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_registrar {int pbc_ignore_uuid; int pbc_ignore_start; scalar_t__ pbc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;
 scalar_t__ FUNC_3 (struct wps_registrar*,int const*,size_t) ;
 int FUNC_4 (struct wps_registrar*) ;
 int FUNC_5 (struct wps_registrar*) ;
 int FUNC_6 (struct wps_registrar*,int const*,int *) ;

void FUNC_7(struct wps_registrar *VAR_2, const u8 *VAR_3,
       const u8 *VAR_4, size_t VAR_5)
{
 if (VAR_2->pbc) {
  FUNC_6(VAR_2,
       VAR_3, ((void*)0));
  FUNC_4(VAR_2);
  FUNC_0(&VAR_2->pbc_ignore_start);
  FUNC_1(VAR_2->pbc_ignore_uuid, VAR_3, VAR_1);
 } else {



 }
}
