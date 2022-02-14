
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
struct sfb {int sfb_holdtime; } ;
struct TYPE_2__ {unsigned int holdtime; scalar_t__ speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sfb*,int ,int ) ;
 int FUNC_1 (scalar_t__*,int *) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct sfb *VAR_4, u_int64_t VAR_5)
{
 u_int64_t VAR_6;

 if (VAR_2 != 0) {
  VAR_6 = VAR_2;
 } else if (VAR_5 == 0) {
  VAR_6 = FUNC_0(VAR_4, VAR_1, VAR_0);
 } else {
  unsigned int VAR_7, VAR_8;

  VAR_7 = VAR_3[0].holdtime;
  for (VAR_8 = 0; VAR_3[VAR_8].speed != 0; VAR_8++) {
   if (VAR_5 < VAR_3[VAR_8].speed)
    break;
   VAR_7 = VAR_3[VAR_8].holdtime;
  }
  VAR_6 = VAR_7;
 }
 FUNC_1(&VAR_6, &VAR_4->sfb_holdtime);
}
