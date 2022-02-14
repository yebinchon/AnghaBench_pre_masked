
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {unsigned char (* read_isac ) (struct isac*,int ) ;} ;


 int FUNC_0 (int ,char*,unsigned char) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_1 (struct isac*) ;
 int FUNC_2 (struct isac*) ;
 unsigned char FUNC_3 (struct isac*,int ) ;

void FUNC_4(struct isac *VAR_4)
{
 unsigned char VAR_5;

 VAR_5 = VAR_4->read_isac(VAR_4, VAR_1);
 FUNC_0(VAR_0, "ISTA %#x", VAR_5);

 if (VAR_5 & VAR_3)
  FUNC_2(VAR_4);
 if (VAR_5 & VAR_2)
  FUNC_1(VAR_4);
}
