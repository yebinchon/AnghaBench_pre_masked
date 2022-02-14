
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct c_sv_hash_entry {int he_data; scalar_t__ he_ref; scalar_t__ he_record; } ;
typedef scalar_t__ boolean_t ;
typedef int UInt64 ;
struct TYPE_2__ {scalar_t__ he_record; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_2(uint32_t VAR_9)
{
 int VAR_10;
 int VAR_11;
 struct c_sv_hash_entry VAR_12, VAR_13;
 boolean_t VAR_14 = VAR_3;

 if (VAR_9 == 0)
  FUNC_0(1, &VAR_8);
 else
  FUNC_0(1, &VAR_7);

 VAR_10 = VAR_9 & VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
 {
  VAR_12.he_record = VAR_5[VAR_10].he_record;

  while (VAR_12.he_data == VAR_9 || VAR_12.he_ref == 0) {
   VAR_13.he_ref = VAR_12.he_ref + 1;
   VAR_13.he_data = VAR_9;

   if (FUNC_1((UInt64)VAR_12.he_record, (UInt64)VAR_13.he_record, (UInt64 *) &VAR_5[VAR_10].he_record) == VAR_4) {
    if (VAR_13.he_ref == 1)
     FUNC_0(1, &VAR_6);
    VAR_14 = VAR_4;
    break;
   }
   VAR_12.he_record = VAR_5[VAR_10].he_record;
  }
  if (VAR_14 == VAR_4)
   break;
  VAR_10++;

  if (VAR_10 == VAR_2)
   VAR_10 = 0;
 }
 if (VAR_14 == VAR_3)
  return(-1);

 return (VAR_10);
}
