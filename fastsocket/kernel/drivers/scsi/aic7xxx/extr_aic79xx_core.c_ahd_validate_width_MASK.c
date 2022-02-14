
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct ahd_softc {int features; } ;
struct TYPE_3__ {scalar_t__ width; } ;
struct TYPE_4__ {scalar_t__ width; } ;
struct ahd_initiator_tinfo {TYPE_1__ goal; TYPE_2__ user; } ;
typedef scalar_t__ role_t ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void
FUNC_1(struct ahd_softc *VAR_3, struct ahd_initiator_tinfo *VAR_4,
     u_int *VAR_5, role_t VAR_6)
{
 switch (*VAR_5) {
 default:
  if (VAR_3->features & VAR_0) {

   *VAR_5 = VAR_1;
   break;
  }

 case 128:
  *VAR_5 = 128;
  break;
 }
 if (VAR_4 != ((void*)0)) {
  if (VAR_6 == VAR_2)
   *VAR_5 = FUNC_0((u_int)VAR_4->user.width, *VAR_5);
  else
   *VAR_5 = FUNC_0((u_int)VAR_4->goal.width, *VAR_5);
 }
}
