
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stripe_chunk {TYPE_1__* stripe; } ;
struct TYPE_5__ {scalar_t__ stats; } ;
struct TYPE_4__ {int sc; } ;


 int VAR_0 ;
 int FUNC_0 (struct stripe_chunk*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct stripe_chunk*) ;
 unsigned long FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct stripe_chunk*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (unsigned long) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_3, void *VAR_4)
{
 struct stripe_chunk *VAR_5 = VAR_4;

 if (FUNC_7(VAR_3)) {
  FUNC_5(VAR_5, VAR_1);

  FUNC_4(FUNC_1(VAR_5->stripe->sc)->stats + VAR_2);
 } else
  FUNC_5(VAR_5, VAR_0);





 if (FUNC_7(FUNC_3(VAR_5->stripe)))
  FUNC_0(VAR_5);
 else
  FUNC_2(VAR_5);


 FUNC_6(VAR_5->stripe);
}
