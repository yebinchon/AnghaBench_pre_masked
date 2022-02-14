
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {int (* read_isac ) (struct isac*,int ) ;} ;


 int FUNC_0 (int,char*,int,int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct isac*,int ) ;

__attribute__((used)) static void FUNC_2(struct isac *VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_2->read_isac(VAR_2, VAR_1);
 FUNC_0(1, "ISAC version (%x): %s", VAR_3, VAR_0[(VAR_3 >> 5) & 3]);
}
