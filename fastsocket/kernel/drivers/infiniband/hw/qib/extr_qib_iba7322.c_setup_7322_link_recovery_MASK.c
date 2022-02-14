
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qib_pportdata {int port; TYPE_1__* cpspec; struct qib_devdata* dd; } ;
struct qib_devdata {TYPE_2__* cspec; } ;
struct TYPE_4__ {int recovery_ports_initted; int r1; } ;
struct TYPE_3__ {int recovery_init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int FUNC_0 (struct qib_devdata*,char*) ;
 scalar_t__ FUNC_1 (struct qib_devdata*) ;
 scalar_t__ FUNC_2 (struct qib_devdata*,int ,int ,int *,int *) ;
 scalar_t__ FUNC_3 (struct qib_devdata*,int ) ;
 int * VAR_12 ;
 int * VAR_13 ;

__attribute__((used)) static void FUNC_4(struct qib_pportdata *VAR_14, u32 VAR_15)
{
 u8 *VAR_16, *VAR_17;
 struct qib_devdata *VAR_18 = VAR_14->dd;

 if (!VAR_14->dd->cspec->r1)
  return;
 if (!VAR_15) {
  VAR_18->cspec->recovery_ports_initted++;
  VAR_14->cpspec->recovery_init = 1;
 }
 if (!VAR_15 && VAR_18->cspec->recovery_ports_initted == 1) {
  VAR_16 = VAR_14->port == 1 ? VAR_10 : VAR_11;
  VAR_17 = VAR_7;
 } else {
  VAR_16 = VAR_9;
  VAR_17 = VAR_8;
 }

 if (FUNC_1(VAR_18) < 0 ||
  FUNC_2(VAR_18, VAR_1, VAR_4, VAR_13, ((void*)0)) < 0 ||
  FUNC_3(VAR_18, VAR_1) < 0 ||
  FUNC_2(VAR_18, VAR_0, VAR_3, VAR_12, ((void*)0)) < 0 ||
  FUNC_3(VAR_18, VAR_0) < 0 ||
  FUNC_2(VAR_18, VAR_2, VAR_5,
       VAR_16, ((void*)0)) < 0 ||
  FUNC_3(VAR_18, VAR_2) < 0 ||
  FUNC_2(VAR_18, VAR_0, VAR_3, VAR_6, ((void*)0)) < 0 ||
  FUNC_3(VAR_18, VAR_0) < 0 ||
  FUNC_2(VAR_18, VAR_1, VAR_4, VAR_17, ((void*)0)) < 0 ||
  FUNC_3(VAR_18, VAR_1) < 0)
  FUNC_0(VAR_18, "Failed IB link recovery setup\n");
}
