
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct IsdnCardState {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct IsdnCardState*,int ,int) ;
 int FUNC_1 (struct IsdnCardState*) ;

__attribute__((used)) static int
FUNC_2(struct IsdnCardState *VAR_3, u_char VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_3);
 VAR_5 = 256 * FUNC_0(VAR_3, VAR_2, VAR_4 | VAR_0);
 FUNC_1(VAR_3);
 VAR_5 += FUNC_0(VAR_3, VAR_2, VAR_4 | VAR_1);
 return (VAR_5);
}
