
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ refcnt; } ;
typedef TYPE_1__ mtrr_var_range_t ;
typedef int kern_return_t ;
typedef int addr64_t ;
struct TYPE_6__ {int MTRRcap; unsigned int var_count; TYPE_1__* var_range; } ;


 int FUNC_0 (char*,int,int,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ,int *) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 () ;
 TYPE_4__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (TYPE_1__*,int,int,int ,int) ;
 int FUNC_7 (TYPE_1__*,int,int,int ) ;

kern_return_t
FUNC_8(addr64_t VAR_16, uint64_t VAR_17, uint32_t VAR_18)
{
 mtrr_var_range_t * VAR_19;
 mtrr_var_range_t * VAR_20;
 kern_return_t VAR_21 = VAR_4;
 int VAR_22;
 unsigned int VAR_23;

 FUNC_0("mtrr_range_add base = 0x%llx, size = 0x%llx, type = %d\n",
            VAR_16, VAR_17, VAR_18);

 if (VAR_11 == VAR_0) {
  return VAR_3;
 }


 if ((VAR_18 != VAR_6) &&
     (VAR_18 != VAR_8) &&
     (VAR_18 != VAR_10) &&
     (VAR_18 != VAR_9) &&
     (VAR_18 != VAR_7)) {
  return VAR_2;
 }


 if ((VAR_18 == VAR_8) &&
     (VAR_12.MTRRcap & VAR_1) == 0) {
  return VAR_3;
 }


 if (VAR_16 < 0x100000 || VAR_12.var_count == 0) {
  return VAR_3;
 }





 if ((VAR_17 < 0x1000) ||
     (FUNC_1(VAR_17) != VAR_17) ||
            (VAR_16 && (VAR_17 > FUNC_1(VAR_16)))) {
  return VAR_2;
 }

 FUNC_2();




 for (VAR_23 = 0, VAR_20 = ((void*)0); VAR_23 < VAR_12.var_count; VAR_23++)
 {
  VAR_19 = &VAR_12.var_range[VAR_23];

  if (VAR_19->refcnt == 0) {

   VAR_20 = VAR_19;
   continue;
  }

  VAR_22 = FUNC_7(VAR_19, VAR_16, VAR_17, VAR_18);
  if (VAR_22 > 0) {




   VAR_20 = VAR_19;
   break;
  }
  if (VAR_22 < 0) {

   VAR_20 = ((void*)0);
   break;
  }
 }

 if (VAR_20) {
  if (VAR_20->refcnt++ == 0) {
   FUNC_6(VAR_20, VAR_16, VAR_17, VAR_18, 1);
   FUNC_4(VAR_14,
          VAR_13,
          VAR_15, ((void*)0));
  }
  VAR_21 = VAR_5;
 }





 FUNC_3();

 return VAR_21;
}
