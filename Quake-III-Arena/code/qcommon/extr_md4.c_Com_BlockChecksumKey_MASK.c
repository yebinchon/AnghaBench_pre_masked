
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MD4_CTX ;


 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;

unsigned FUNC_3 (void *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3[4];
 unsigned VAR_4;
 MD4_CTX VAR_5;

 FUNC_1 (&VAR_5);
 FUNC_2 (&VAR_5, (unsigned char *)&VAR_2, 4);
 FUNC_2 (&VAR_5, (unsigned char *)VAR_0, VAR_1);
 FUNC_0 ( (unsigned char *)VAR_3, &VAR_5);

 VAR_4 = VAR_3[0] ^ VAR_3[1] ^ VAR_3[2] ^ VAR_3[3];

 return VAR_4;
}
