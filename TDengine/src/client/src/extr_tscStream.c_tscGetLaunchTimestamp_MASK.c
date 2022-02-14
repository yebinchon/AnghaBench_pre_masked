
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef long int64_t ;
struct TYPE_3__ {long stime; scalar_t__ precision; double interval; } ;
typedef TYPE_1__ SSqlStream ;


 scalar_t__ VAR_0 ;
 long FUNC_0 () ;
 int FUNC_1 (int ) ;
 long FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 long VAR_1 ;
 long VAR_2 ;

__attribute__((used)) static int64_t FUNC_4(const SSqlStream *VAR_3) {
  int64_t VAR_4 = VAR_3->stime - FUNC_2(VAR_3->precision);
  if (VAR_4 < 0) VAR_4 = 0;

  int64_t VAR_5 = (int64_t)(VAR_3->interval * 0.1);

  int64_t VAR_6 =
      (VAR_3->precision == VAR_0) ? VAR_1 * 1000L : VAR_1;
  if (VAR_5 > VAR_6) {
    VAR_5 = VAR_6;
  }

  int64_t VAR_7 =
      (VAR_3->precision == VAR_0) ? VAR_2 * 1000L : VAR_2;

  FUNC_1(FUNC_3(((void*)0)));
  VAR_4 += (FUNC_0() % VAR_5);

  if (VAR_4 < VAR_7 || VAR_4 > VAR_6) {
    VAR_4 = (VAR_4 % VAR_7) + VAR_7;
  }

  return (VAR_3->precision == VAR_0) ? VAR_4 / 1000L : VAR_4;
}
