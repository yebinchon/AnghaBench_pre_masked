
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,char*) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_0, unsigned char *VAR_1,
      unsigned int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_3 = FUNC_1(VAR_0, "	   ");
 VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < (VAR_2 / 16); VAR_5++) {
  VAR_3 += FUNC_0(VAR_0+VAR_3, VAR_1+VAR_4, 16);
  VAR_4 += 16;
 }
 VAR_6 = VAR_2%16;
 if (VAR_6) {
  VAR_3 += FUNC_0(VAR_0+VAR_3, VAR_1+VAR_4, VAR_6);
  VAR_4 += VAR_6;
 }
 VAR_3 += FUNC_1(VAR_0+VAR_3, "\n");
 return VAR_3;
}
