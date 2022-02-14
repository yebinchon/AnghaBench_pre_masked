
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isac {int mocr; int adf2; int (* read_isac ) (struct isac*,int ) ;int (* write_isac ) (struct isac*,int ,int) ;int l1m; int flags; int type; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *,int,int *) ;
 int VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct isac*) ;
 int FUNC_3 (struct isac*,int ) ;
 int FUNC_4 (struct isac*,int ,int) ;
 int FUNC_5 (struct isac*,int ,int) ;
 int FUNC_6 (struct isac*,int ,int) ;
 int FUNC_7 (struct isac*,int ,int) ;
 int FUNC_8 (struct isac*,int ,int) ;
 int FUNC_9 (struct isac*,int ) ;
 int FUNC_10 (struct isac*,int ) ;
 int FUNC_11 (struct isac*,int ) ;
 int FUNC_12 (struct isac*,int ) ;
 int FUNC_13 (struct isac*,int ) ;
 int FUNC_14 (struct isac*,int ) ;
 int FUNC_15 (struct isac*,int ,int) ;
 int FUNC_16 (struct isac*,int ,int) ;
 int FUNC_17 (struct isac*,int ,int) ;
 int FUNC_18 (struct isac*,int ,int) ;
 int FUNC_19 (struct isac*,int ,int) ;
 int FUNC_20 (struct isac*,int ,int) ;
 int FUNC_21 (struct isac*,int ,int) ;
 int FUNC_22 (struct isac*,int ,int) ;
 int FUNC_23 (struct isac*,int ,int) ;
 int FUNC_24 (struct isac*,int ,int) ;
 scalar_t__ FUNC_25 (int ,int *) ;

void FUNC_26(struct isac *VAR_18)
{
 int VAR_19, VAR_20;

 VAR_18->type = VAR_17;
 FUNC_2(VAR_18);

 FUNC_3(VAR_18, VAR_6);

   VAR_18->write_isac(VAR_18, VAR_10, 0xff);
   VAR_18->mocr = 0xaa;
 if (FUNC_25(VAR_8, &VAR_18->flags)) {

  VAR_18->write_isac(VAR_18, VAR_1, 0x0);
  VAR_18->write_isac(VAR_18, VAR_12, 0xa);
  VAR_18->write_isac(VAR_18, VAR_0, 0x2);
  VAR_18->write_isac(VAR_18, VAR_15, 0x70);
  VAR_18->write_isac(VAR_18, VAR_11, 0xc9);
 } else {

  if (!VAR_18->adf2)
   VAR_18->adf2 = 0x80;
  VAR_18->write_isac(VAR_18, VAR_1, VAR_18->adf2);
  VAR_18->write_isac(VAR_18, VAR_13, 0x2f);
  VAR_18->write_isac(VAR_18, VAR_12, 0x00);
  VAR_18->write_isac(VAR_18, VAR_15, 0x70);
  VAR_18->write_isac(VAR_18, VAR_11, 0xc9);
  VAR_18->write_isac(VAR_18, VAR_16, 0x00);
  VAR_18->write_isac(VAR_18, VAR_0, 0x00);
 }
 VAR_19 = VAR_18->read_isac(VAR_18, VAR_14);
 FUNC_0(2, "ISAC STAR %x", VAR_19);
 VAR_19 = VAR_18->read_isac(VAR_18, VAR_11);
 FUNC_0(2, "ISAC MODE %x", VAR_19);
 VAR_19 = VAR_18->read_isac(VAR_18, VAR_1);
 FUNC_0(2, "ISAC ADF2 %x", VAR_19);
 VAR_19 = VAR_18->read_isac(VAR_18, VAR_9);
 FUNC_0(2, "ISAC ISTA %x", VAR_19);
 if (VAR_19 & 0x01) {
  VAR_20 = VAR_18->read_isac(VAR_18, VAR_7);
  FUNC_0(2, "ISAC EXIR %x", VAR_20);
 }
 VAR_19 = VAR_18->read_isac(VAR_18, VAR_2);
 FUNC_0(2, "ISAC CIR0 %x", VAR_19);
 FUNC_1(&VAR_18->l1m, (VAR_19 >> 2) & 0xf, ((void*)0));

 VAR_18->write_isac(VAR_18, VAR_10, 0x0);

 VAR_18->write_isac(VAR_18, VAR_3, VAR_5 | VAR_4);
}
