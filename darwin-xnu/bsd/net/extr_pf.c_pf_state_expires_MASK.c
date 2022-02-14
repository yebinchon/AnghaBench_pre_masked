
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
typedef scalar_t__ u_int32_t ;
struct TYPE_6__ {TYPE_1__* ptr; } ;
struct pf_state {size_t timeout; scalar_t__ expire; TYPE_2__ rule; } ;
struct TYPE_8__ {scalar_t__* timeout; } ;
struct TYPE_7__ {scalar_t__ states; } ;
struct TYPE_5__ {scalar_t__* timeout; scalar_t__ states; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int) ;
 TYPE_4__ VAR_6 ;
 int VAR_7 ;
 TYPE_3__ VAR_8 ;
 scalar_t__ FUNC_2 () ;

u_int64_t
FUNC_3(const struct pf_state *VAR_9)
{
 u_int32_t VAR_10;
 u_int32_t VAR_11;
 u_int32_t VAR_12;
 u_int32_t VAR_13;

 FUNC_0(VAR_7, VAR_0);


 if (VAR_9->timeout == VAR_4)
  return (FUNC_2());

 FUNC_1(VAR_9->timeout != VAR_5);
 FUNC_1(VAR_9->timeout < VAR_3);
 VAR_10 = VAR_9->rule.ptr->timeout[VAR_9->timeout];
 if (!VAR_10)
  VAR_10 = VAR_6.timeout[VAR_9->timeout];
 VAR_11 = VAR_9->rule.ptr->timeout[VAR_2];
 if (VAR_11) {
  VAR_12 = VAR_9->rule.ptr->timeout[VAR_1];
  VAR_13 = VAR_9->rule.ptr->states;
 } else {
  VAR_11 = VAR_6.timeout[VAR_2];
  VAR_12 = VAR_6.timeout[VAR_1];
  VAR_13 = VAR_8.states;
 }
 if (VAR_12 && VAR_13 > VAR_11 && VAR_11 < VAR_12) {
  if (VAR_13 < VAR_12)
   return (VAR_9->expire + VAR_10 * (VAR_12 - VAR_13) /
       (VAR_12 - VAR_11));
  else
   return (FUNC_2());
 }
 return (VAR_9->expire + VAR_10);
}
