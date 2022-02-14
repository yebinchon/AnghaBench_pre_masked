
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dp_state {int* stat; int link_nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dp_state*) ;
 scalar_t__ FUNC_1 (struct dp_state*,int) ;
 int FUNC_2 (struct dp_state*,int) ;

__attribute__((used)) static int
FUNC_3(struct dp_state *VAR_4)
{
 bool VAR_5, VAR_6 = 1;
 int VAR_7 = 0, VAR_8;

 FUNC_2(VAR_4, 2);

 do {
  if (FUNC_1(VAR_4, 400))
   break;

  VAR_5 = !!(VAR_4->stat[2] & VAR_3);
  for (VAR_8 = 0; VAR_8 < VAR_4->link_nr && VAR_5; VAR_8++) {
   u8 VAR_9 = (VAR_4->stat[VAR_8 >> 1] >> ((VAR_8 & 1) * 4)) & 0xf;
   if (!(VAR_9 & VAR_1))
    VAR_6 = 0;
   if (!(VAR_9 & VAR_0) ||
       !(VAR_9 & VAR_2))
    VAR_5 = 0;
  }

  if (FUNC_0(VAR_4))
   break;
 } while (!VAR_5 && VAR_6 && ++VAR_7 <= 5);

 return VAR_5 ? 0 : -1;
}
