
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD ;


 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int FUNC_2 (int const*,unsigned char const*,int,unsigned char*,int,unsigned char*,int) ;
 int FUNC_3 (unsigned char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (unsigned char*,int ,int) ;

void FUNC_6(unsigned char *VAR_0, int VAR_1, const unsigned char *VAR_2,
      int VAR_3, unsigned char *VAR_4, int VAR_5)
{
 const EVP_MD *VAR_6 = FUNC_0();
 const EVP_MD *VAR_7 = FUNC_1();
 int VAR_8,VAR_9;
 const unsigned char *VAR_10,*VAR_11;
 unsigned char *VAR_12;

 VAR_12 = (unsigned char *) FUNC_4 (VAR_5);

 VAR_8=VAR_3/2;
 VAR_10=VAR_2;
 VAR_11= &(VAR_2[VAR_8]);
 VAR_8+=(VAR_3&1);


 FUNC_2(VAR_6 ,VAR_10,VAR_8,VAR_0,VAR_1,VAR_4,VAR_5);
 FUNC_2(VAR_7,VAR_11,VAR_8,VAR_0,VAR_1,VAR_12,VAR_5);

 for (VAR_9=0; VAR_9<VAR_5; VAR_9++)
  VAR_4[VAR_9]^=VAR_12[VAR_9];

 FUNC_5 (VAR_12, 0, VAR_5);
 FUNC_3(VAR_12);
}
