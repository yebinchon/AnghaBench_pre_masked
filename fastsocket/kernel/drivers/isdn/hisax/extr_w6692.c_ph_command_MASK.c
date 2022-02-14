
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IsdnCardState {int debug; int (* writeisac ) (struct IsdnCardState*,int ,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct IsdnCardState*,char*,unsigned int) ;
 int FUNC_1 (struct IsdnCardState*,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct IsdnCardState *VAR_2, unsigned int VAR_3)
{
 if (VAR_2->debug & VAR_0)
  FUNC_0(VAR_2, "ph_command %x", VAR_3);
 VAR_2->writeisac(VAR_2, VAR_1, VAR_3);
}
