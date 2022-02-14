
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct IsdnCardState {int (* readisac ) (struct IsdnCardState*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct IsdnCardState*,int) ;
 int FUNC_1 (struct IsdnCardState*) ;
 int FUNC_2 (struct IsdnCardState*) ;
 int FUNC_3 (struct IsdnCardState*,int ) ;

void
FUNC_4(struct IsdnCardState *VAR_1)
{
 u_char VAR_2;

 while ((VAR_2 = VAR_1->readisac(VAR_1, VAR_0))) {



    if (VAR_2 &0x80) FUNC_0(VAR_1, 0);
    if (VAR_2 &0x40) FUNC_0(VAR_1, 1);

    if (VAR_2 &0x01) FUNC_2(VAR_1);
    if (VAR_2 &0x10) FUNC_1(VAR_1);
  }
}
