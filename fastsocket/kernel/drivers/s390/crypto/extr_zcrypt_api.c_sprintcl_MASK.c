
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char*,char*,...) ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_0, unsigned char *VAR_1,
      unsigned int VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_3 += FUNC_0(VAR_0+VAR_3, "%01x", (unsigned int) VAR_1[VAR_4]);
 VAR_3 += FUNC_0(VAR_0+VAR_3, " ");
 return VAR_3;
}
