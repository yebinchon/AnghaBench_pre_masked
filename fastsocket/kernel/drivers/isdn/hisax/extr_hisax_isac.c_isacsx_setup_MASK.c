
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {int (* write_isac ) (struct isac*,int ,int) ;int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct isac*,int ,int) ;
 int FUNC_1 (struct isac*,int ,int) ;
 int FUNC_2 (struct isac*,int ,int) ;
 int FUNC_3 (struct isac*,int ,int) ;
 int FUNC_4 (struct isac*,int ,int) ;

void FUNC_5(struct isac *VAR_8)
{
 VAR_8->type = VAR_7;

 VAR_8->write_isac(VAR_8, VAR_5, 0x00);

 VAR_8->write_isac(VAR_8, VAR_6, 0x00);

 VAR_8->write_isac(VAR_8, VAR_4, 0xc9);

 VAR_8->write_isac(VAR_8, VAR_3, 0x03);

 VAR_8->write_isac(VAR_8, VAR_2,
    ~(VAR_1 | VAR_0));
}
