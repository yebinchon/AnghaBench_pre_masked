
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct c_sv_hash_entry {scalar_t__ he_ref; scalar_t__ he_record; int he_data; } ;
typedef int UInt64 ;
struct TYPE_2__ {scalar_t__ he_record; } ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(int VAR_3)
{
 struct c_sv_hash_entry VAR_4, VAR_5;

 while (1) {

  VAR_4.he_record = VAR_1[VAR_3].he_record;

  VAR_5.he_ref = VAR_4.he_ref - 1;
  VAR_5.he_data = VAR_4.he_data;

  if (FUNC_1((UInt64)VAR_4.he_record, (UInt64)VAR_5.he_record, (UInt64 *) &VAR_1[VAR_3].he_record) == VAR_0) {
   if (VAR_5.he_ref == 0)
    FUNC_0(-1, &VAR_2);
   break;
  }
 }
}
