
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IsdnCardState {scalar_t__ subtyp; int (* writeW6692 ) (struct IsdnCardState*,int ,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct IsdnCardState*,int ,int) ;
 int FUNC_2 (struct IsdnCardState*,int ,int) ;
 int FUNC_3 (struct IsdnCardState*,int ,int) ;
 int FUNC_4 (struct IsdnCardState*,int ,int) ;
 int FUNC_5 (struct IsdnCardState*,int ,int) ;
 int FUNC_6 (struct IsdnCardState*,int ,int) ;
 int FUNC_7 (struct IsdnCardState*,int ,int) ;
 int FUNC_8 (struct IsdnCardState*,int ,int) ;
 int FUNC_9 (struct IsdnCardState*,int ,int) ;
 int FUNC_10 (struct IsdnCardState*,int ,int) ;

__attribute__((used)) static void FUNC_11(struct IsdnCardState *VAR_11)
{
 VAR_11->writeW6692(VAR_11, VAR_1, VAR_2);
 FUNC_0(10);
 VAR_11->writeW6692(VAR_11, VAR_1, 0x00);
 FUNC_0(10);
 VAR_11->writeW6692(VAR_11, VAR_8, 0xff);
 VAR_11->writeW6692(VAR_11, VAR_6, 0xff);
 VAR_11->writeW6692(VAR_11, VAR_7, 0xff);
 VAR_11->writeW6692(VAR_11, VAR_3, 0x00);
 VAR_11->writeW6692(VAR_11, VAR_4, VAR_5);
 VAR_11->writeW6692(VAR_11, VAR_8, 0x18);
 if (VAR_11->subtyp == VAR_0) {




  VAR_11->writeW6692(VAR_11, VAR_9, 0x80);
  VAR_11->writeW6692(VAR_11, VAR_10, 0x00);
 }
}
