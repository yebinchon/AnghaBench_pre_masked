
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int user_addr_t ;
struct TYPE_8__ {void* entry_count; } ;
typedef TYPE_1__ memorystatus_jetsam_snapshot_t ;
typedef int int32_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ,size_t) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_1__**,size_t*,scalar_t__) ;
 int FUNC_4 (TYPE_1__**,size_t*,scalar_t__) ;
 int FUNC_5 (TYPE_1__**,size_t*,scalar_t__) ;
 int FUNC_6 (TYPE_1__**,size_t*,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(int32_t VAR_13, user_addr_t VAR_14, size_t VAR_15, int32_t *VAR_16) {
 int VAR_17 = VAR_0;
 boolean_t VAR_18;
 boolean_t VAR_19 = VAR_1;
 boolean_t VAR_20 = VAR_1;
 boolean_t VAR_21 = VAR_1;
 memorystatus_jetsam_snapshot_t *VAR_22;

 VAR_18 = ((VAR_14 == VAR_6) ? VAR_5 : VAR_1);

 if (VAR_13 == 0) {

  VAR_19 = VAR_5;
  VAR_17 = FUNC_4(&VAR_22, &VAR_15, VAR_18);
 } else {
  if (VAR_13 & ~(VAR_4 | VAR_2 | VAR_3)) {



   return VAR_0;
  }

  if (VAR_13 & (VAR_13 - 0x1)) {



   return VAR_0;
  }

  if (VAR_13 & VAR_4) {
   VAR_20 = VAR_5;




   VAR_17 = FUNC_6(&VAR_22, &VAR_15, VAR_18);

  } else if (VAR_13 & VAR_2) {
   VAR_21 = VAR_5;
   VAR_17 = FUNC_3(&VAR_22, &VAR_15, VAR_18);
  } else if (VAR_13 & VAR_3) {
   VAR_17 = FUNC_5(&VAR_22, &VAR_15, VAR_18);
  } else {



   return VAR_0;
  }
 }

 if (VAR_17) {
  goto out;
 }
 if (!VAR_18) {
  if ((VAR_17 = FUNC_0(VAR_22, VAR_14, VAR_15)) == 0) {
   if (VAR_19) {





    FUNC_7();
    FUNC_2(VAR_8, VAR_7, VAR_12);
    VAR_9 = VAR_10;
    VAR_22->entry_count = VAR_10 = 0;
    VAR_11 = 0;
    FUNC_8();
   }
  }

  if (VAR_20) {




   if(VAR_22) {
    FUNC_1(VAR_22, VAR_15);
   }
  }
 }

 if (VAR_17 == 0) {
  *VAR_16 = VAR_15;
 }
out:
 return VAR_17;
}
