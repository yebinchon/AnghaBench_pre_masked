
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;


 int FUNC_0 (struct mbuf*,int,short) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mbuf*) ;
 scalar_t__ FUNC_4 (struct mbuf*,int) ;
 struct mbuf* FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (short) ;

__attribute__((used)) static inline struct mbuf *
FUNC_8(int VAR_4, short VAR_5, int VAR_6)
{
 struct mbuf *VAR_7;
 int VAR_8 = FUNC_1(VAR_4);


 if (VAR_8 & VAR_0)
  VAR_8 |= VAR_1;

 VAR_7 = FUNC_5(FUNC_2(VAR_2), VAR_8);
 if (VAR_7 != ((void*)0)) {
  FUNC_0(VAR_7, VAR_6, VAR_5);
  FUNC_7(VAR_5);
  FUNC_6(VAR_3);






 }
 return (VAR_7);
}
