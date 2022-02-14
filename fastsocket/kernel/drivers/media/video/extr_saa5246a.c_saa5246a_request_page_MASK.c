
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pagemask; scalar_t__ page; scalar_t__ hour; scalar_t__ minute; int pgbuf; } ;
typedef TYPE_1__ vtx_pagereq_t ;
struct saa5246a_device {int* is_searching; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (struct saa5246a_device*,int ,int,int,int,...) ;

__attribute__((used)) static int FUNC_8(struct saa5246a_device *VAR_38,
    vtx_pagereq_t *VAR_39)
{
 if (VAR_39->pagemask < 0 || VAR_39->pagemask >= VAR_12)
  return -VAR_1;
 if (VAR_39->pagemask & VAR_14)
  if (VAR_39->page < 0 || VAR_39->page > VAR_10)
   return -VAR_1;
 if (VAR_39->pagemask & VAR_11)
  if (VAR_39->hour < 0 || VAR_39->hour > VAR_3)
   return -VAR_1;
 if (VAR_39->pagemask & VAR_13)
  if (VAR_39->minute < 0 || VAR_39->minute > VAR_6)
   return -VAR_1;
 if (VAR_39->pgbuf < 0 || VAR_39->pgbuf >= VAR_9)
  return -VAR_1;

 if (FUNC_7(VAR_38, VAR_37,

  VAR_20 |
  VAR_39->pgbuf << 4 |
  VAR_18 |
  VAR_19,

  FUNC_0(VAR_39->page) |
  VAR_21 |
  (VAR_39->pagemask & VAR_15 ?
   VAR_30 :
   VAR_31),

  FUNC_3(VAR_39->page) |
  (VAR_39->pagemask & VAR_16 ?
   VAR_32 :
   VAR_33),

  FUNC_6(VAR_39->page) |
  (VAR_39->pagemask & VAR_17 ?
   VAR_34 :
   VAR_35),

  FUNC_1(VAR_39->hour) |
  (VAR_39->pagemask & VAR_4 ?
   VAR_22 :
   VAR_23),

  FUNC_4(VAR_39->hour) |
  (VAR_39->pagemask & VAR_5 ?
   VAR_24 :
   VAR_25),

  FUNC_2(VAR_39->minute) |
  (VAR_39->pagemask & VAR_7 ?
   VAR_26 :
   VAR_27),

  FUNC_5(VAR_39->minute) |
  (VAR_39->pagemask & VAR_8 ?
   VAR_28 :
   VAR_29),

  VAR_0) || FUNC_7(VAR_38, VAR_37,

  VAR_20 |
  VAR_39->pgbuf << 4 |
  VAR_18 |
  VAR_19,

  FUNC_0(VAR_39->page) |
  VAR_36 |
  (VAR_39->pagemask & VAR_15 ?
   VAR_30 :
   VAR_31),

  VAR_0))
 {
  return -VAR_2;
 }

 VAR_38->is_searching[VAR_39->pgbuf] = 1;
 return 0;
}
