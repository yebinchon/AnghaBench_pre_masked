
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct IsdnCardState {int dummy; } ;
struct BCState {scalar_t__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct BCState* FUNC_0 (struct IsdnCardState*,int) ;
 int FUNC_1 (struct BCState*) ;

__attribute__((used)) static inline void
FUNC_2(struct IsdnCardState *VAR_2, u_char VAR_3)
{
 struct BCState *VAR_4;

 if (VAR_3 & VAR_0) {
  if ((VAR_4 = FUNC_0(VAR_2, 1))) {
   if (VAR_4->mode) {
    FUNC_1(VAR_4);
   }
  }
 }
 if (VAR_3 & VAR_1) {
  if ((VAR_4 = FUNC_0(VAR_2, 2))) {
   if (VAR_4->mode) {
    FUNC_1(VAR_4);
   }
  }
 }

}
