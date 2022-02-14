
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gxm_sfd; int gxm_sfc; int gxm_rtgt; } ;
typedef TYPE_1__ vita2d_texture ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int ** VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,unsigned int,int ,int *,int *,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;

void FUNC_2(vita2d_texture *VAR_12, unsigned int VAR_13)
{

 if (VAR_12 == ((void*)0)) {
  FUNC_0(
  VAR_0,
  VAR_13,
  VAR_11,
  ((void*)0),
  ((void*)0),
  VAR_8[VAR_1],
  &VAR_9[VAR_1],
  &VAR_7);
 } else {
  FUNC_0(
  VAR_0,
  VAR_13,
  VAR_12->gxm_rtgt,
  ((void*)0),
  ((void*)0),
  ((void*)0),
  &VAR_12->gxm_sfc,
  &VAR_12->gxm_sfd);
 }

 VAR_10 = 1;

 if (VAR_6) {
  FUNC_1(VAR_3, VAR_5, VAR_2, VAR_4);
 }
}
