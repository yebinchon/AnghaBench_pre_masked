
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*,int,int,char*,char*) ;
 int FUNC_1 (unsigned char*,int,int,int) ;

__attribute__((used)) static void FUNC_2(unsigned char *VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3;
 char VAR_4[8], VAR_5[9];

 for (VAR_3 = 0; VAR_3 < 7; VAR_3++)
  VAR_4[VAR_3] = FUNC_1(VAR_0, 24+8*VAR_3, 8, 1);

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
  VAR_5[VAR_3] = FUNC_1(VAR_0, 88+8*VAR_3, 8, 1);

 VAR_4[7] = VAR_5[8] = 0;

 FUNC_0(VAR_1, VAR_2, " [PnP %d.%02d id %s rev %s]",
  (int) ((FUNC_1(VAR_0, 8, 6, 1) << 6) |
   FUNC_1(VAR_0, 16, 6, 1)) / 100,
  (int) ((FUNC_1(VAR_0, 8, 6, 1) << 6) |
   FUNC_1(VAR_0, 16, 6, 1)) % 100,
   VAR_4, VAR_5);
}
