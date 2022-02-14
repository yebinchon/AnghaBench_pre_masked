
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txdb {struct tx_map* start; struct tx_map* end; struct tx_map* wptr; struct tx_map* rptr; } ;
struct tx_map {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct txdb *VAR_0, struct tx_map **VAR_1)
{
 FUNC_0(VAR_0 == ((void*)0) || VAR_1 == ((void*)0));

 FUNC_0(*VAR_1 != VAR_0->rptr &&
     *VAR_1 != VAR_0->wptr);

 FUNC_0(*VAR_1 < VAR_0->start ||
     *VAR_1 >= VAR_0->end);

 ++*VAR_1;
 if (FUNC_1(*VAR_1 == VAR_0->end))
  *VAR_1 = VAR_0->start;
}
