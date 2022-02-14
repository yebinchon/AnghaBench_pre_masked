
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_8__ ;
typedef struct TYPE_39__ TYPE_7__ ;
typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_20__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_19__ ;
typedef struct TYPE_30__ TYPE_18__ ;
typedef struct TYPE_29__ TYPE_17__ ;
typedef struct TYPE_28__ TYPE_16__ ;
typedef struct TYPE_27__ TYPE_15__ ;
typedef struct TYPE_26__ TYPE_14__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct w83627ehf_data {int in_num; int pwm_num; scalar_t__ temp3_disable; scalar_t__ in6_skip; } ;
struct device {int dummy; } ;
struct TYPE_40__ {int dev_attr; } ;
struct TYPE_39__ {int dev_attr; } ;
struct TYPE_38__ {int dev_attr; } ;
struct TYPE_37__ {int dev_attr; } ;
struct TYPE_36__ {int dev_attr; } ;
struct TYPE_35__ {int dev_attr; } ;
struct TYPE_34__ {int dev_attr; } ;
struct TYPE_33__ {int dev_attr; } ;
struct TYPE_32__ {int dev_attr; } ;
struct TYPE_31__ {int dev_attr; } ;
struct TYPE_30__ {int dev_attr; } ;
struct TYPE_29__ {int dev_attr; } ;
struct TYPE_28__ {int dev_attr; } ;
struct TYPE_27__ {int dev_attr; } ;
struct TYPE_26__ {int dev_attr; } ;
struct TYPE_25__ {int dev_attr; } ;
struct TYPE_24__ {int dev_attr; } ;
struct TYPE_23__ {int dev_attr; } ;
struct TYPE_22__ {int dev_attr; } ;


 int FUNC_0 (TYPE_8__*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct w83627ehf_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int *) ;
 TYPE_20__* VAR_2 ;
 TYPE_19__* VAR_3 ;
 TYPE_18__* VAR_4 ;
 TYPE_17__* VAR_5 ;
 TYPE_16__* VAR_6 ;
 TYPE_15__* VAR_7 ;
 TYPE_14__* VAR_8 ;
 TYPE_13__* VAR_9 ;
 TYPE_12__* VAR_10 ;
 TYPE_11__* VAR_11 ;
 TYPE_10__* VAR_12 ;
 TYPE_8__* VAR_13 ;
 TYPE_8__* VAR_14 ;
 TYPE_7__* VAR_15 ;
 TYPE_6__* VAR_16 ;
 TYPE_5__* VAR_17 ;
 TYPE_4__* VAR_18 ;
 TYPE_3__* VAR_19 ;
 TYPE_2__* VAR_20 ;
 TYPE_1__* VAR_21 ;

__attribute__((used)) static void FUNC_3(struct device *VAR_22)
{


 int VAR_23;
 struct w83627ehf_data *VAR_24 = FUNC_1(VAR_22);

 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_13); VAR_23++)
  FUNC_2(VAR_22, &VAR_13[VAR_23].dev_attr);
 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_14); VAR_23++)
  FUNC_2(VAR_22, &VAR_14[VAR_23].dev_attr);
 for (VAR_23 = 0; VAR_23 < VAR_24->in_num; VAR_23++) {
  if ((VAR_23 == 6) && VAR_24->in6_skip)
   continue;
  FUNC_2(VAR_22, &VAR_7[VAR_23].dev_attr);
  FUNC_2(VAR_22, &VAR_6[VAR_23].dev_attr);
  FUNC_2(VAR_22, &VAR_9[VAR_23].dev_attr);
  FUNC_2(VAR_22, &VAR_8[VAR_23].dev_attr);
 }
 for (VAR_23 = 0; VAR_23 < 5; VAR_23++) {
  FUNC_2(VAR_22, &VAR_4[VAR_23].dev_attr);
  FUNC_2(VAR_22, &VAR_2[VAR_23].dev_attr);
  FUNC_2(VAR_22, &VAR_3[VAR_23].dev_attr);
  FUNC_2(VAR_22, &VAR_5[VAR_23].dev_attr);
 }
 for (VAR_23 = 0; VAR_23 < VAR_24->pwm_num; VAR_23++) {
  FUNC_2(VAR_22, &VAR_10[VAR_23].dev_attr);
  FUNC_2(VAR_22, &VAR_12[VAR_23].dev_attr);
  FUNC_2(VAR_22, &VAR_11[VAR_23].dev_attr);
  FUNC_2(VAR_22, &VAR_15[VAR_23].dev_attr);
  FUNC_2(VAR_22, &VAR_21[VAR_23].dev_attr);
 }
 for (VAR_23 = 0; VAR_23 < 3; VAR_23++) {
  if ((VAR_23 == 2) && VAR_24->temp3_disable)
   continue;
  FUNC_2(VAR_22, &VAR_17[VAR_23].dev_attr);
  FUNC_2(VAR_22, &VAR_18[VAR_23].dev_attr);
  FUNC_2(VAR_22, &VAR_19[VAR_23].dev_attr);
  FUNC_2(VAR_22, &VAR_16[VAR_23].dev_attr);
  FUNC_2(VAR_22, &VAR_20[VAR_23].dev_attr);
 }

 FUNC_2(VAR_22, &VAR_1);
 FUNC_2(VAR_22, &VAR_0);
}
