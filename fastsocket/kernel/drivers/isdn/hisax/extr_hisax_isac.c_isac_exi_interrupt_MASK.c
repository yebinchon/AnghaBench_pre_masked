
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {unsigned char (* read_isac ) (struct isac*,int ) ;} ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct isac*) ;
 unsigned char FUNC_2 (struct isac*,int ) ;
 unsigned char FUNC_3 (struct isac*,int ) ;

__attribute__((used)) static inline void FUNC_4(struct isac *VAR_6)
{
 unsigned char VAR_7;

 VAR_7 = VAR_6->read_isac(VAR_6, VAR_1);
 FUNC_0(2, "EXIR %#x", VAR_7);

 if (VAR_7 & VAR_4) {
  FUNC_0(VAR_0, "ISAC XMR");
  FUNC_1(VAR_6);
 }
 if (VAR_7 & VAR_3) {
  FUNC_0(VAR_0, "ISAC XDU");
  FUNC_1(VAR_6);
 }
 if (VAR_7 & VAR_2) {
  FUNC_0(VAR_0, "MOS");
  VAR_7 = VAR_6->read_isac(VAR_6, VAR_5);
  FUNC_0(2, "ISAC MOSR %#x", VAR_7);
 }
}
