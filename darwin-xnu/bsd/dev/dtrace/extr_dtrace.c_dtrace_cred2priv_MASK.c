
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zoneid_t ;
typedef int uint32_t ;
typedef scalar_t__ uid_t ;
typedef int cred_t ;


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
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(cred_t *VAR_13, uint32_t *VAR_14, uid_t *VAR_15, zoneid_t *VAR_16)
{
 uint32_t VAR_17;

 if (VAR_13 == ((void*)0) || FUNC_0(VAR_13, VAR_7, VAR_0)) {
  if (FUNC_4() && !FUNC_3()) {
   VAR_17 = VAR_5 | VAR_4 | VAR_3;
  }
  else {
   VAR_17 = VAR_1;
  }
  *VAR_15 = 0;
  *VAR_16 = 0;
 } else {
  *VAR_15 = FUNC_1(VAR_13);
  *VAR_16 = FUNC_2(VAR_13);

  VAR_17 = 0;
  if (FUNC_0(VAR_13, VAR_8, VAR_0))
   VAR_17 |= VAR_2 | VAR_5;
  else if (FUNC_0(VAR_13, VAR_10, VAR_0))
   VAR_17 |= VAR_5;
  if (FUNC_0(VAR_13, VAR_9, VAR_0))
   VAR_17 |= VAR_4;
  if (FUNC_0(VAR_13, VAR_11, VAR_0))
   VAR_17 |= VAR_3;
  if (FUNC_0(VAR_13, VAR_12, VAR_0))
   VAR_17 |= VAR_6;
 }

 *VAR_14 = VAR_17;
}
