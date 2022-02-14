
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef TYPE_5__* rcc_interface_ty ;
struct TYPE_13__ {int offset; TYPE_6__* base; void* sym; } ;
struct TYPE_14__ {TYPE_1__ addr; } ;
struct TYPE_19__ {TYPE_2__ u; } ;
struct TYPE_18__ {scalar_t__ scope; scalar_t__ sclass; } ;
struct TYPE_15__ {int uid; int p; int n; int q; } ;
struct TYPE_16__ {TYPE_3__ rcc_Address; } ;
struct TYPE_17__ {TYPE_4__ v; } ;
struct TYPE_12__ {int (* address ) (void*,TYPE_6__*,int ) ;} ;
typedef TYPE_6__* Symbol ;
typedef TYPE_7__* Code ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_11__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 TYPE_7__* FUNC_1 (int ) ;
 int ** VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (void*,TYPE_6__*,int ) ;
 void* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(rcc_interface_ty VAR_7) {
 int VAR_8 = VAR_7->v.rcc_Address.uid;
 Symbol VAR_9 = FUNC_4(VAR_7->v.rcc_Address.p);

 FUNC_0(VAR_8 >= 0 && VAR_8 < VAR_6);
 FUNC_0(VAR_5[VAR_8] == ((void*)0));
 VAR_5[VAR_8] = FUNC_2(VAR_8, VAR_7->v.rcc_Address.q);
 if (VAR_9->scope == VAR_2 || VAR_9->sclass == VAR_4 || VAR_9->sclass == VAR_1)
  (*VAR_3->address)(FUNC_4(VAR_8), VAR_9, VAR_7->v.rcc_Address.n);
 else {
  Code VAR_10 = FUNC_1(VAR_0);
  VAR_10->u.addr.sym = FUNC_4(VAR_8);
  VAR_10->u.addr.base = VAR_9;
  VAR_10->u.addr.offset = VAR_7->v.rcc_Address.n;
 }
}
