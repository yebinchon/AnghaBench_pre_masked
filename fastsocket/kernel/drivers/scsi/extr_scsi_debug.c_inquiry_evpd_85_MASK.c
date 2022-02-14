
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,char const*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(unsigned char * VAR_0)
{
 int VAR_1 = 0;
 const char * VAR_2 = "https://www.kernel.org/config";
 const char * VAR_3 = "http://www.kernel.org/log";
 int VAR_4, VAR_5;

 VAR_0[VAR_1++] = 0x1;
 VAR_0[VAR_1++] = 0x0;
 VAR_0[VAR_1++] = 0x0;
 VAR_5 = FUNC_2(VAR_2);
 VAR_4 = VAR_5 + 1;
 if (VAR_4 % 4)
  VAR_4 = ((VAR_4 / 4) + 1) * 4;
 VAR_0[VAR_1++] = VAR_4;
 FUNC_0(VAR_0 + VAR_1, VAR_2, VAR_5);
 FUNC_1(VAR_0 + VAR_1 + VAR_5, 0, VAR_4 - VAR_5);
 VAR_1 += VAR_4;

 VAR_0[VAR_1++] = 0x4;
 VAR_0[VAR_1++] = 0x0;
 VAR_0[VAR_1++] = 0x0;
 VAR_5 = FUNC_2(VAR_3);
 VAR_4 = VAR_5 + 1;
 if (VAR_4 % 4)
  VAR_4 = ((VAR_4 / 4) + 1) * 4;
 VAR_0[VAR_1++] = VAR_4;
 FUNC_0(VAR_0 + VAR_1, VAR_3, VAR_5);
 FUNC_1(VAR_0 + VAR_1 + VAR_5, 0, VAR_4 - VAR_5);
 VAR_1 += VAR_4;

 return VAR_1;
}
