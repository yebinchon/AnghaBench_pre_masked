
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pgbuf; int start; int end; scalar_t__ buffer; } ;
typedef TYPE_1__ vtx_pagereq_t ;
struct saa5246a_device {scalar_t__* is_searching; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_4 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_5 (struct saa5246a_device*,int,char*) ;
 scalar_t__ FUNC_6 (struct saa5246a_device*,int ,int,int ,int,int ) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static inline int FUNC_11(struct saa5246a_device *VAR_16,
 vtx_pagereq_t *VAR_17)
{
 int VAR_18, VAR_19, VAR_20;
 char *VAR_21;
 int VAR_22;

 if (VAR_17->pgbuf < 0 || VAR_17->pgbuf >= VAR_6 ||
     VAR_17->start < 0 || VAR_17->start > VAR_17->end || VAR_17->end >= VAR_15)
  return -VAR_2;

 VAR_21 = FUNC_8(VAR_15, VAR_5);
 if (!VAR_21)
  return -VAR_4;


 VAR_22 = -VAR_3;

 VAR_19 = FUNC_10(VAR_17->end, VAR_15 - 1);
 if (FUNC_6(VAR_16, VAR_14,
   VAR_17->pgbuf | VAR_12,
   FUNC_3(VAR_17->start), FUNC_0(VAR_17->start), VAR_0))
  goto out;
 if (FUNC_5(VAR_16, VAR_19 - VAR_17->start + 1, VAR_21))
  goto out;
 VAR_22 = -VAR_1;
 if (FUNC_4(VAR_17->buffer, VAR_21, VAR_19 - VAR_17->start + 1))
  goto out;




 if (FUNC_2(VAR_17)) {
  VAR_18 = FUNC_9(VAR_17->start, VAR_10);
  VAR_19 = FUNC_10(VAR_17->end, VAR_9);
  VAR_20 = VAR_19 - VAR_18 + 1;
  VAR_22 = -VAR_2;
  if (VAR_20 < 0)
   goto out;
  VAR_22 = -VAR_3;
  if (FUNC_6(VAR_16, VAR_14,
    VAR_11 | VAR_12,
    VAR_13, VAR_18, VAR_0))
   goto out;
  if (FUNC_5(VAR_16, VAR_20, VAR_21))
   goto out;
  VAR_22 = -VAR_1;
  if (FUNC_4(VAR_17->buffer + VAR_18 - VAR_17->start, VAR_21, VAR_20))
   goto out;
 }

 if (FUNC_1(VAR_17) && VAR_16->is_searching[VAR_17->pgbuf]) {
  VAR_18 = FUNC_9(VAR_17->start, VAR_8);
  VAR_19 = FUNC_10(VAR_17->end, VAR_7);
  VAR_20 = VAR_19 - VAR_18 + 1;
  VAR_22 = -VAR_2;
  if (VAR_20 < 0)
   goto out;
  VAR_22 = -VAR_3;
  if (FUNC_6(VAR_16, VAR_14,
    VAR_11 | VAR_12,
    VAR_13, VAR_18, VAR_0))
   goto out;
  if (FUNC_5(VAR_16, VAR_19 - VAR_18 + 1, VAR_21))
   goto out;
  VAR_22 = -VAR_1;
  if (FUNC_4(VAR_17->buffer + VAR_18 - VAR_17->start, VAR_21, VAR_20))
   goto out;
 }
 VAR_22 = 0;
out:
 FUNC_7(VAR_21);
 return VAR_22;
}
