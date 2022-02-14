
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct microtune_priv {int dummy; } ;
struct dvb_frontend {struct microtune_priv* tuner_priv; } ;


 int FUNC_0 (struct dvb_frontend*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1,
          unsigned int VAR_2,
          unsigned int VAR_3, unsigned int VAR_4,
          unsigned int VAR_5,
          unsigned int VAR_6,
          unsigned char *VAR_7,
          int *VAR_8,
          unsigned int VAR_9)
{
 struct microtune_priv *VAR_10 = VAR_1->tuner_priv;
 unsigned int VAR_11,VAR_12,VAR_13,VAR_14,VAR_15,VAR_16,VAR_17, VAR_18,
  VAR_19,VAR_20,VAR_21,VAR_22,VAR_23,VAR_24;

 VAR_11= 5250 *1000;
 VAR_18=VAR_2+VAR_3;

 VAR_12=(2*(VAR_18/1000)+(VAR_11/1000)) / (2*VAR_11/1000);
 VAR_13=VAR_12/8;
 VAR_14=VAR_12-(VAR_13*8);

 VAR_15=VAR_2/1000/1000+1090;

 if(VAR_0) {
  if(VAR_15>1890) VAR_16=0;
  else if(VAR_15>1720) VAR_16=1;
  else if(VAR_15>1530) VAR_16=2;
  else if(VAR_15>1370) VAR_16=3;
  else VAR_16=4;
 }
 else {
  if(VAR_15>1790) VAR_16=0;
  else if(VAR_15>1617) VAR_16=1;
  else if(VAR_15>1449) VAR_16=2;
  else if(VAR_15>1291) VAR_16=3;
  else VAR_16=4;
 }
 *VAR_8=VAR_16;

 VAR_17=(VAR_14+8*VAR_13)*VAR_11;

 FUNC_1("mt2032: rfin=%d lo1=%d lo1n=%d lo1a=%d sel=%d, lo1freq=%d\n",
    VAR_2,VAR_12,VAR_13,VAR_14,VAR_16,VAR_17);

 VAR_19=VAR_17-VAR_2-VAR_4;
 VAR_20=(VAR_19)/VAR_11;
 VAR_21=VAR_20/8;
 VAR_22=VAR_20-(VAR_21*8);
 VAR_23=((VAR_19/1000)%(VAR_11/1000))* 3780/(VAR_11/1000);
 VAR_24=(VAR_22+8*VAR_21)*VAR_11 + VAR_23*(VAR_11/1000)/3780*1000;

 FUNC_1("mt2032: rfin=%d lo2=%d lo2n=%d lo2a=%d num=%d lo2freq=%d\n",
    VAR_2,VAR_20,VAR_21,VAR_22,VAR_23,VAR_24);

 if (VAR_14 > 7 || VAR_13 < 17 || VAR_13 > 48 || VAR_22 > 7 || VAR_21 < 17 ||
   VAR_21 > 30) {
  FUNC_2("mt2032: frequency parameters out of range: %d %d %d %d\n",
      VAR_14, VAR_13, VAR_22,VAR_21);
  return(-1);
 }

 FUNC_0(VAR_1, VAR_17, VAR_19, VAR_5, VAR_6);



 VAR_7[0]=VAR_13-1;
 VAR_7[1]=VAR_14 | (VAR_16<<4);
 VAR_7[2]=0x86;
 VAR_7[3]=0x0f;
 VAR_7[4]=0x1f;
 VAR_7[5]=(VAR_21-1) | (VAR_22<<5);
 if(VAR_2 >400*1000*1000)
  VAR_7[6]=0xe4;
 else
  VAR_7[6]=0xf4;
 VAR_7[7]=8+VAR_9;
 VAR_7[8]=0xc3;
 VAR_7[9]=0x4e;
 VAR_7[10]=0xec;
 VAR_7[11]=(VAR_23&0xff);
 VAR_7[12]=(VAR_23>>8) |0x80;

 return 0;
}
