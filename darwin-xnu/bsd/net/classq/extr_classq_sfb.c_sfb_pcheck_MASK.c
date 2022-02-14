
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct sfb {int sfb_current; } ;
struct TYPE_2__ {scalar_t__ pmark; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct sfb*,int,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline int
FUNC_3(struct sfb *VAR_2, uint32_t VAR_3)
{

 int VAR_4, VAR_5;

 uint8_t *VAR_6 = (uint8_t *)&VAR_3;
 int VAR_7;

 VAR_7 = VAR_2->sfb_current;
 FUNC_2((VAR_7 + (VAR_7 ^ 1)) == 1);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_7 == 0)
   VAR_5 = FUNC_0(VAR_6[VAR_4]);
  else
   VAR_5 = FUNC_0(VAR_6[VAR_4 + 2]);

  if (FUNC_1(VAR_2, VAR_4, VAR_5, VAR_7)->pmark < VAR_1)
   return (0);
 }

 return (1);
}
