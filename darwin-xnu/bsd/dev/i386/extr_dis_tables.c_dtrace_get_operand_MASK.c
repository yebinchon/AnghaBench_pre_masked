
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
struct TYPE_8__ {scalar_t__ d86_numopnds; int d86_rex_prefix; scalar_t__ d86_opnd_size; scalar_t__ d86_addr_size; scalar_t__ d86_mode; scalar_t__ d86_vsib; TYPE_1__* d86_opnd; scalar_t__ d86_error; } ;
typedef TYPE_2__ dis86_t ;
struct TYPE_7__ {char* d86_opnd; void* d86_mode; } ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;




 char** VAR_12 ;
 char** VAR_13 ;
 char** VAR_14 ;
 char** VAR_15 ;
 char** VAR_16 ;
 char** VAR_17 ;
 char** VAR_18 ;
 char** VAR_19 ;
 char** VAR_20 ;
 char** VAR_21 ;
 char** VAR_22 ;
 char** VAR_23 ;
 char*** VAR_24 ;
 char** VAR_25 ;
 char** VAR_26 ;
 char** VAR_27 ;
 char** VAR_28 ;
 char** VAR_29 ;
 char** VAR_30 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (TYPE_2__*,int const,int,int) ;
 int FUNC_3 (char*,char const* const,int ) ;

__attribute__((used)) static void
FUNC_4(dis86_t *VAR_31, uint_t VAR_32, uint_t VAR_33, int VAR_34, int VAR_35)
{
 int VAR_36 = 0;
 uint_t VAR_37;
 uint_t VAR_38;
 uint_t VAR_39;
 int VAR_40;



#pragma unused (wbit)


 if (VAR_31->d86_numopnds < (uint_t)VAR_35 + 1)
  VAR_31->d86_numopnds = (uint_t)VAR_35 + 1;

 if (VAR_31->d86_error)
  return;




 if (VAR_32 == VAR_7) {
  return;
 }




 FUNC_0(VAR_31, VAR_35);
 if (VAR_31->d86_addr_size == VAR_10) {
  if ((VAR_32 == 0 && VAR_33 == 6) || VAR_32 == 2)
   FUNC_2(VAR_31, 130, 2, VAR_35);
  else if (VAR_32 == 1)
   FUNC_2(VAR_31, 137, 1, VAR_35);
  return;
 }





 if (VAR_33 == VAR_1 || VAR_33 == VAR_1 + 8) {
  VAR_36 = 1;
  FUNC_1(VAR_31, &VAR_37, &VAR_38, &VAR_39);
  if (VAR_31->d86_error)
   return;
  if (VAR_39 != 5 || VAR_32 != 0)
   if (VAR_31->d86_rex_prefix & VAR_8)
    VAR_39 += 8;
  if (VAR_31->d86_rex_prefix & VAR_9)
   VAR_38 += 8;
 } else {
  VAR_39 = VAR_33;
 }




 VAR_40 = 0;

 if (VAR_32 == 1)
  VAR_40 = 1;
 else if (VAR_32 == 2)
  VAR_40 = 4;
 else if ((VAR_33 & 7) == VAR_0 ||
     (VAR_36 && (VAR_39 & 7) == VAR_0))
  VAR_40 = 4;

 if (VAR_40 > 0) {
  FUNC_2(VAR_31, VAR_40 == 4 ? 134 : 137,
      VAR_40, VAR_35);
  if (VAR_31->d86_error)
   return;
 }
}
