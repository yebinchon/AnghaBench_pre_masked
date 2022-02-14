
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dvb_frontend_parameters {int frequency; } ;
struct dvb_frontend {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (struct dvb_frontend*,int) ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend* VAR_1, struct dvb_frontend_parameters* VAR_2)
{
 u32 VAR_3 = VAR_2->frequency;

 int VAR_4, VAR_5, VAR_6, VAR_7;
 u32 VAR_8, VAR_9;

 u32 VAR_10[]={950000,1019000,1075000,1178000,1296000,1432000,
  1576000,1718000,1856000,2036000,2150000};
 u32 VAR_11[]={0,0x00020000,0x00040000,0x00100800,0x00101000,
  0x00102000,0x00104000,0x00108000,0x00110000,
  0x00120000,0x00140000};


 FUNC_2("cx24108 debug: entering SetTunerFreq, freq=%d\n",VAR_3);



 if (VAR_3<950000)
  VAR_3 = 950000;
 else if (VAR_3>2150000)
  VAR_3 = 2150000;


 for(VAR_4 = 1; (VAR_4 < FUNC_0(VAR_10) - 1) && (VAR_10[VAR_4] < VAR_3); VAR_4++);
 FUNC_2("cx24108 debug: select vco #%d (f=%d)\n",VAR_4,VAR_3);
 VAR_8=VAR_11[VAR_4];





 VAR_6=((VAR_4<=2?2:1)*VAR_3*10L)/(1011100/100);
 VAR_5=VAR_6%32; VAR_6/=32; if(VAR_5==0) VAR_6--;
 VAR_7=(VAR_3<(VAR_10[VAR_4-1]+VAR_10[VAR_4])/2);
 VAR_9=0xf8000000|
     ((VAR_7?1:2)<<(14+11))|
     ((VAR_6&0x1ff)<<(5+11))|
     ((VAR_5&0x1f)<<11);


 FUNC_2("cx24108 debug: pump=%d, n=%d, a=%d\n",VAR_7,VAR_6,VAR_5);
 FUNC_1(VAR_1,VAR_8);


 FUNC_1(VAR_1,0x500c0000);
 FUNC_1(VAR_1,0x83f1f800);
 FUNC_1(VAR_1,VAR_9);


 return 0;
}
