
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


typedef TYPE_5__* Type ;
struct TYPE_19__ {int outofline; int align; int size; } ;
struct TYPE_14__ {int i; int u; int d; } ;
struct TYPE_13__ {int d; int u; int i; } ;
struct TYPE_15__ {TYPE_2__ max; TYPE_1__ min; } ;
struct TYPE_16__ {TYPE_3__ limits; } ;
struct TYPE_18__ {TYPE_4__ u; int addressed; TYPE_5__* type; } ;
struct TYPE_17__ {int align; int size; int op; } ;
typedef TYPE_6__* Symbol ;
typedef TYPE_7__ Metrics ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (int) ;
 TYPE_6__* FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 TYPE_5__* FUNC_4 (int,int ,int ,int ,TYPE_6__*) ;
 int VAR_5 ;

__attribute__((used)) static Type FUNC_5(int VAR_6, char *VAR_7, Metrics VAR_8) {
 Symbol VAR_9 = FUNC_1(FUNC_3(VAR_7), &VAR_5, VAR_2, VAR_4);
 Type VAR_10 = FUNC_4(VAR_6, 0, VAR_8.size, VAR_8.align, VAR_9);

 FUNC_0(VAR_10->align == 0 || VAR_10->size%VAR_10->align == 0);
 VAR_9->type = VAR_10;
 VAR_9->addressed = VAR_8.outofline;
 switch (VAR_10->op) {
 case 129:
  VAR_9->u.limits.max.i = FUNC_2(8*VAR_10->size)>>1;
  VAR_9->u.limits.min.i = -VAR_9->u.limits.max.i - 1;
  break;
 case 128:
  VAR_9->u.limits.max.u = FUNC_2(8*VAR_10->size);
  VAR_9->u.limits.min.u = 0;
  break;
 case 130:
  if (VAR_10->size == sizeof (float))
   VAR_9->u.limits.max.d = VAR_1;
  else if (VAR_10->size == sizeof (double))
   VAR_9->u.limits.max.d = VAR_0;
  else
   VAR_9->u.limits.max.d = VAR_3;
  VAR_9->u.limits.min.d = -VAR_9->u.limits.max.d;
  break;
 default: FUNC_0(0);
 }
 return VAR_10;
}
