
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {scalar_t__ le_next; scalar_t__ le_prev; } ;
struct secasvar {TYPE_1__ spihash; int spi; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct secasvar*,int *) ;
 int FUNC_2 (struct secasvar*,int *) ;
 size_t FUNC_3 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_4(
     struct secasvar *VAR_3,
     u_int32_t VAR_4)
{
 FUNC_0(VAR_1, VAR_0);
 VAR_3->spi = VAR_4;
 if (VAR_3->spihash.le_prev || VAR_3->spihash.le_next)
  FUNC_2(VAR_3, VAR_2);
 FUNC_1(&VAR_2[FUNC_3(VAR_4)], VAR_3, VAR_2);
}
