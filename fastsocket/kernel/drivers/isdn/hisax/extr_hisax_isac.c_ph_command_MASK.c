
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {int type; int (* write_isac ) (struct isac*,int ,unsigned int) ;} ;


 int FUNC_0 (int ,char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (struct isac*,int ,unsigned int) ;
 int FUNC_2 (struct isac*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct isac *VAR_3, unsigned int VAR_4)
{
 FUNC_0(VAR_0, "ph_command %#x", VAR_4);
 switch (VAR_3->type) {
 case 129:
  VAR_3->write_isac(VAR_3, VAR_2, (VAR_4 << 2) | 3);
  break;
 case 128:
  VAR_3->write_isac(VAR_3, VAR_1, (VAR_4 << 4) | (7 << 1));
  break;
 }
}
