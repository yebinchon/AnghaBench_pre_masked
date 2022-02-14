
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (char*,int,int,int *) ;
 int * VAR_7 ;
 int FUNC_5 (int) ;

int FUNC_6(const char *VAR_8)
{
 FUNC_0();

 VAR_7 = FUNC_2(VAR_8, "wb");

 if (VAR_7 == ((void*)0))
  return VAR_0;
 if (FUNC_4("RIFF\0\0\0\0WAVEfmt \x10\0\0\0\1\0", 1, 22, VAR_7) != 22) {
  FUNC_1(VAR_7);
  VAR_7 = ((void*)0);
  return VAR_0;
 }

 FUNC_3(VAR_2, VAR_7);
 FUNC_3(0, VAR_7);
 FUNC_5(VAR_3);


 FUNC_5(VAR_3 * (VAR_4 & VAR_1 ? VAR_2 << 1 : VAR_2));

 FUNC_3(VAR_4 & VAR_1 ? VAR_2 << 1 : VAR_2, VAR_7);
 FUNC_3(0, VAR_7);

 FUNC_3(VAR_4 & VAR_1? 16: 8, VAR_7);

 if (FUNC_4("\0data\0\0\0\0", 1, 9, VAR_7) != 9) {
  FUNC_1(VAR_7);
  VAR_7 = ((void*)0);
  return VAR_0;
 }

 VAR_6 = 0;
 return VAR_5;
}
