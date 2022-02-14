
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mxl5005s_state {unsigned long Fxtal; scalar_t__ Mode; int IF_Mode; unsigned long IF_LO; } ;
struct dvb_frontend {struct mxl5005s_state* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dvb_frontend*,int ,int) ;

__attribute__((used)) static u16 FUNC_1(struct dvb_frontend *VAR_4)
{
 struct mxl5005s_state *VAR_5 = VAR_4->tuner_priv;
 u16 VAR_6 = 0 ;
 u32 VAR_7 = 0 ;
 u32 VAR_8, VAR_9 ;
 u32 VAR_10 ;
 VAR_8 = 2 ;

 if (VAR_5->Fxtal >= 12000000UL && VAR_5->Fxtal <= 16000000UL)
  VAR_8 = 2 ;
 if (VAR_5->Fxtal > 16000000UL && VAR_5->Fxtal <= 32000000UL)
  VAR_8 = 1 ;


 if (VAR_5->Mode == 0 && VAR_5->IF_Mode == 1) {
  if (VAR_5->IF_LO == 41000000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x08);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x0C);
   VAR_7 = 328000000UL ;
  }
  if (VAR_5->IF_LO == 47000000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x08);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 376000000UL ;
  }
  if (VAR_5->IF_LO == 54000000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x10);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x0C);
   VAR_7 = 324000000UL ;
  }
  if (VAR_5->IF_LO == 60000000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x10);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 360000000UL ;
  }
  if (VAR_5->IF_LO == 39250000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x08);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x0C);
   VAR_7 = 314000000UL ;
  }
  if (VAR_5->IF_LO == 39650000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x08);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x0C);
   VAR_7 = 317200000UL ;
  }
  if (VAR_5->IF_LO == 40150000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x08);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x0C);
   VAR_7 = 321200000UL ;
  }
  if (VAR_5->IF_LO == 40650000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x08);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x0C);
   VAR_7 = 325200000UL ;
  }
 }

 if (VAR_5->Mode || (VAR_5->Mode == 0 && VAR_5->IF_Mode == 0)) {
  if (VAR_5->IF_LO == 57000000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x10);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 342000000UL ;
  }
  if (VAR_5->IF_LO == 44000000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x08);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 352000000UL ;
  }
  if (VAR_5->IF_LO == 43750000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x08);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 350000000UL ;
  }
  if (VAR_5->IF_LO == 36650000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x04);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 366500000UL ;
  }
  if (VAR_5->IF_LO == 36150000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x04);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 361500000UL ;
  }
  if (VAR_5->IF_LO == 36000000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x04);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 360000000UL ;
  }
  if (VAR_5->IF_LO == 35250000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x04);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 352500000UL ;
  }
  if (VAR_5->IF_LO == 34750000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x04);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 347500000UL ;
  }
  if (VAR_5->IF_LO == 6280000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x07);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 376800000UL ;
  }
  if (VAR_5->IF_LO == 5000000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x09);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 360000000UL ;
  }
  if (VAR_5->IF_LO == 4500000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x06);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 360000000UL ;
  }
  if (VAR_5->IF_LO == 4570000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x06);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 365600000UL ;
  }
  if (VAR_5->IF_LO == 4000000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x05);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 360000000UL ;
  }
  if (VAR_5->IF_LO == 57400000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x10);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 344400000UL ;
  }
  if (VAR_5->IF_LO == 44400000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x08);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 355200000UL ;
  }
  if (VAR_5->IF_LO == 44150000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x08);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 353200000UL ;
  }
  if (VAR_5->IF_LO == 37050000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x04);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 370500000UL ;
  }
  if (VAR_5->IF_LO == 36550000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x04);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 365500000UL ;
  }
  if (VAR_5->IF_LO == 36125000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x04);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 361250000UL ;
  }
  if (VAR_5->IF_LO == 6000000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x07);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 360000000UL ;
  }
  if (VAR_5->IF_LO == 5400000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x07);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x0C);
   VAR_7 = 324000000UL ;
  }
  if (VAR_5->IF_LO == 5380000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x07);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x0C);
   VAR_7 = 322800000UL ;
  }
  if (VAR_5->IF_LO == 5200000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x09);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 374400000UL ;
  }
  if (VAR_5->IF_LO == 4900000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x09);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 352800000UL ;
  }
  if (VAR_5->IF_LO == 4400000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x06);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 352000000UL ;
  }
  if (VAR_5->IF_LO == 4063000UL) {
   VAR_6 += FUNC_0(VAR_4, VAR_2, 0x05);
   VAR_6 += FUNC_0(VAR_4, VAR_3, 0x08);
   VAR_7 = 365670000UL ;
  }
 }


 VAR_9 = VAR_7 / (VAR_5->Fxtal * VAR_8/2);
 VAR_6 += FUNC_0(VAR_4, VAR_1, VAR_9);

 VAR_10 = (2<<15)*(VAR_7/1000 - (VAR_5->Fxtal/1000 * VAR_8/2) *
  VAR_9);

 VAR_10 = VAR_10 / ((VAR_5->Fxtal * VAR_8/2)/1000);
 VAR_6 += FUNC_0(VAR_4, VAR_0, VAR_10);

 return VAR_6 ;
}
