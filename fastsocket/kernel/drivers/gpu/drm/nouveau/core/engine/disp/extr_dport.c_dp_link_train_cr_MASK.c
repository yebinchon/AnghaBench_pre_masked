
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dp_state {int* conf; int link_nr; int* stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dp_state*) ;
 scalar_t__ FUNC_1 (struct dp_state*,int) ;
 int FUNC_2 (struct dp_state*,int) ;

__attribute__((used)) static int
FUNC_3(struct dp_state *VAR_3)
{
 bool VAR_4 = 0, VAR_5 = 0;
 int VAR_6 = VAR_3->conf[0] & VAR_1;
 int VAR_7 = 0, VAR_8;

 FUNC_2(VAR_3, 1);

 do {
  if (FUNC_0(VAR_3) ||
      FUNC_1(VAR_3, 100))
   break;

  VAR_4 = 1;
  for (VAR_8 = 0; VAR_8 < VAR_3->link_nr; VAR_8++) {
   u8 VAR_9 = (VAR_3->stat[VAR_8 >> 1] >> ((VAR_8 & 1) * 4)) & 0xf;
   if (!(VAR_9 & VAR_2)) {
    VAR_4 = 0;
    if (VAR_3->conf[VAR_8] & VAR_0)
     VAR_5 = 1;
    break;
   }
  }

  if ((VAR_3->conf[0] & VAR_1) != VAR_6) {
   VAR_6 = VAR_3->conf[0] & VAR_1;
   VAR_7 = 0;
  }
 } while (!VAR_4 && !VAR_5 && ++VAR_7 < 5);

 return VAR_4 ? 0 : -1;
}
