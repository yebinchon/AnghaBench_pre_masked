
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {unsigned char (* read_isac ) (struct isac*,int ) ;int l1m; } ;


 int FUNC_0 (int ,char*,unsigned char) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned char,int *) ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char FUNC_2 (struct isac*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct isac *VAR_3)
{
 unsigned char VAR_4;

 VAR_4 = VAR_3->read_isac(VAR_3, VAR_1);
 FUNC_0(VAR_0, "CIR0 %#x", VAR_4);
 if (VAR_4 & VAR_2) {
  FUNC_0(VAR_0, "CODR0 %#x", VAR_4 >> 4);
  FUNC_1(&VAR_3->l1m, VAR_4 >> 4, ((void*)0));
 }
}
