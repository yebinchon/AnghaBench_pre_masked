
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {unsigned char (* read_isac ) (struct isac*,int ) ;int l1m; } ;


 int FUNC_0 (int ,char*,unsigned char) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned char,int *) ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 unsigned char FUNC_2 (struct isac*,int ) ;
 unsigned char FUNC_3 (struct isac*,int ) ;

__attribute__((used)) static inline void FUNC_4(struct isac *VAR_6)
{
 unsigned char VAR_7;

 VAR_7 = VAR_6->read_isac(VAR_6, VAR_2);
 FUNC_0(VAR_0, "CIR0 %#x", VAR_7);
 if (VAR_7 & VAR_3) {
  FUNC_0(VAR_0, "CODR0 %#x", (VAR_7 >> 2) & 0xf);
  FUNC_1(&VAR_6->l1m, (VAR_7 >> 2) & 0xf, ((void*)0));
 }
 if (VAR_7 & VAR_4) {
  VAR_7 = VAR_6->read_isac(VAR_6, VAR_5);
  FUNC_0(VAR_1, "ISAC CIR1 %#x", VAR_7 );
 }
}
