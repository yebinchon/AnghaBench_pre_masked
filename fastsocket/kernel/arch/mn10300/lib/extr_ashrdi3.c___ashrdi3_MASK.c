
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int word_type ;
struct TYPE_2__ {int high; int low; } ;
union DIunion {int ll; TYPE_1__ s; } ;
typedef int USItype ;
typedef int SItype ;
typedef int DItype ;


 int VAR_0 ;

DItype FUNC_0(DItype VAR_1, word_type VAR_2)
{
 union DIunion VAR_3;
 union DIunion VAR_4;
 word_type VAR_5;

 if (VAR_2 == 0)
  return VAR_1;

 VAR_4.ll = VAR_1;

 VAR_5 = (sizeof(SItype) * VAR_0) - VAR_2;
 if (VAR_5 <= 0) {

  VAR_3.s.high = VAR_4.s.high >> (sizeof(SItype) * VAR_0 - 1);
  VAR_3.s.low = VAR_4.s.high >> -VAR_5;
 } else {
  USItype VAR_6 = (USItype)VAR_4.s.high << VAR_5;
  VAR_3.s.high = VAR_4.s.high >> VAR_2;
  VAR_3.s.low = ((USItype)VAR_4.s.low >> VAR_2) | VAR_6;
 }

 return VAR_3.ll;
}
