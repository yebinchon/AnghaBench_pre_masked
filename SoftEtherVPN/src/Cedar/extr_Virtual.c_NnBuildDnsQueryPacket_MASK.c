
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int header ;
typedef int USHORT ;
struct TYPE_4__ {int Flag1; int Flag2; void* NumQuery; void* TransactionId; } ;
typedef TYPE_1__ DNSV4_HEADER ;
typedef int BUF ;


 int FUNC_0 (int *,char*,int) ;
 void* FUNC_1 (int) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;

BUF *FUNC_6(char *VAR_0, USHORT VAR_1)
{
 BUF *VAR_2 = FUNC_2();
 DNSV4_HEADER VAR_3;

 FUNC_5(&VAR_3, sizeof(VAR_3));

 VAR_3.TransactionId = FUNC_1(VAR_1);
 VAR_3.Flag1 = 0x01;
 VAR_3.Flag2 = 0x00;
 VAR_3.NumQuery = FUNC_1(1);

 FUNC_4(VAR_2, &VAR_3, sizeof(VAR_3));

 FUNC_0(VAR_2, VAR_0, 0);

 FUNC_3(VAR_2);

 return VAR_2;
}
