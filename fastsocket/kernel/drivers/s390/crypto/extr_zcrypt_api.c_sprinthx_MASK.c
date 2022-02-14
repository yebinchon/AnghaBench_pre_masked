
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,char*,...) ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_0, unsigned char *VAR_1,
      unsigned char *VAR_2, unsigned int VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_4 = FUNC_0(VAR_1, "\n%s\n", VAR_0);
 VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 < (VAR_3 / 64); VAR_6++) {
  VAR_4 += FUNC_1(VAR_1+VAR_4, VAR_2+VAR_5, 64);
  VAR_5 += 64;
 }
 VAR_7 = VAR_3 % 64;
 if (VAR_7) {
  VAR_4 += FUNC_1(VAR_1+VAR_4, VAR_2+VAR_5, VAR_7);
  VAR_5 += VAR_7;
 }
 VAR_4 += FUNC_0(VAR_1+VAR_4, "\n");
 return VAR_4;
}
