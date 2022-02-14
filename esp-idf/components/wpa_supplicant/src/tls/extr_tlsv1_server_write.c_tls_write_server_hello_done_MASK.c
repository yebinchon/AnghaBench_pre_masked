
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_server {int verify; int rl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int *,int ,int *,int,int *,int,size_t*) ;
 int FUNC_3 (struct tlsv1_server*,int ,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct tlsv1_server *VAR_5,
           u8 **VAR_6, u8 *VAR_7)
{
 u8 *VAR_8;
 size_t VAR_9;
 u8 VAR_10[4];

 FUNC_4(VAR_0, "TLSv1: Send ServerHelloDone");




 VAR_8 = VAR_10;

 *VAR_8++ = VAR_4;

 FUNC_0(VAR_8, 0);
 VAR_8 += 3;


 if (FUNC_2(&VAR_5->rl, VAR_3,
         *VAR_6, VAR_7 - *VAR_6, VAR_10, VAR_8 - VAR_10,
         &VAR_9) < 0) {
  FUNC_4(VAR_0, "TLSv1: Failed to generate a record");
  FUNC_3(VAR_5, VAR_2,
       VAR_1);
  return -1;
 }

 FUNC_1(&VAR_5->verify, VAR_10, VAR_8 - VAR_10);

 *VAR_6 += VAR_9;

 return 0;
}
