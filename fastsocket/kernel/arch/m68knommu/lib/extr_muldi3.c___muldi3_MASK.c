
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int USItype ;
struct TYPE_3__ {int high; scalar_t__ low; } ;
struct TYPE_4__ {void* ll; TYPE_1__ s; } ;
typedef TYPE_2__ DIunion ;
typedef void* DItype ;


 void* FUNC_0 (scalar_t__,scalar_t__) ;

DItype
FUNC_1 (DItype VAR_0, DItype VAR_1)
{
  DIunion VAR_2;
  DIunion VAR_3, VAR_4;

  VAR_3.ll = VAR_0,
  VAR_4.ll = VAR_1;

  VAR_2.ll = FUNC_0 (VAR_3.s.low, VAR_4.s.low);
  VAR_2.s.high += ((USItype) VAR_3.s.low * (USItype) VAR_4.s.high
        + (USItype) VAR_3.s.high * (USItype) VAR_4.s.low);

  return VAR_2.ll;
}
