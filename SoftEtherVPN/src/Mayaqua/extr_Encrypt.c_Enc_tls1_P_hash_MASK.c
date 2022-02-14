
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char HMAC_CTX ;
typedef int EVP_MD ;
typedef int A1 ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 () ;
 int FUNC_4 (unsigned char*,unsigned char*,unsigned int*) ;
 int FUNC_5 (unsigned char*,unsigned char const*,int,int const*,int *) ;
 int FUNC_6 (unsigned char*,unsigned char const*,int) ;
 int FUNC_7 (unsigned char*,int) ;
 int FUNC_8 (unsigned char*,unsigned char*,int) ;

void FUNC_9(const EVP_MD *VAR_1, const unsigned char *VAR_2, int VAR_3,
     const unsigned char *VAR_4, int VAR_5, unsigned char *VAR_6, int VAR_7)
{
 int VAR_8,VAR_9;
 unsigned int VAR_10;
 HMAC_CTX *VAR_11;
 HMAC_CTX *VAR_12;
 unsigned char VAR_13[VAR_0];
 unsigned int VAR_14;





 HMAC_CTX VAR_15;
 HMAC_CTX VAR_16;
 VAR_11 = &VAR_15;
 VAR_12 = &VAR_16;
 FUNC_7(VAR_11, sizeof(HMAC_CTX));
 FUNC_7(VAR_12, sizeof(HMAC_CTX));

 VAR_8=FUNC_0(VAR_1);

 FUNC_5(VAR_11,VAR_2,VAR_3,VAR_1, ((void*)0));
 FUNC_5(VAR_12,VAR_2,VAR_3,VAR_1, ((void*)0));
 FUNC_6(VAR_11,VAR_4,VAR_5);
 FUNC_4(VAR_11,VAR_13,&VAR_14);

 VAR_9=0;
 for (;;)
 {
  FUNC_5(VAR_11,((void*)0),0,((void*)0),((void*)0));
  FUNC_5(VAR_12,((void*)0),0,((void*)0),((void*)0));
  FUNC_6(VAR_11,VAR_13,VAR_14);
  FUNC_6(VAR_12,VAR_13,VAR_14);
  FUNC_6(VAR_11,VAR_4,VAR_5);

  if (VAR_7 > VAR_8)
  {
   FUNC_4(VAR_11,VAR_6,&VAR_10);
   VAR_6+=VAR_10;
   VAR_7-=VAR_10;
   FUNC_4(VAR_12,VAR_13,&VAR_14);
  }
  else
  {
   FUNC_4(VAR_11,VAR_13,&VAR_14);
   FUNC_8(VAR_6,VAR_13,VAR_7);
   break;
  }
 }




 FUNC_1(VAR_11);
 FUNC_1(VAR_12);

 FUNC_7 (VAR_13, sizeof(VAR_13));
}
