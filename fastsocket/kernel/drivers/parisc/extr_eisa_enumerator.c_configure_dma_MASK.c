
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(const unsigned char *VAR_3)
{
 int VAR_4;
 u_int8_t VAR_5;
 int VAR_6;

 VAR_4=0;

 for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
  VAR_5 = FUNC_0(VAR_3+VAR_4);
  FUNC_1("DMA %d ", VAR_5&VAR_0);

  VAR_4+=2;
  if (!(VAR_5 & VAR_2)) {
   break;
  }
 }

 return VAR_4;
}
