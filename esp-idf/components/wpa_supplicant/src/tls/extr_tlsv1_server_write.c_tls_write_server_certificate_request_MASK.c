
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_server {int verify; int rl; int verify_peer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int,int *,int,size_t*) ;
 int FUNC_4 (struct tlsv1_server*,int ,int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct tlsv1_server *VAR_6,
      u8 **VAR_7, u8 *VAR_8)
{
 u8 *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 size_t VAR_13;

 if (!VAR_6->verify_peer) {
  FUNC_5(VAR_0, "TLSv1: No CertificateRequest needed");
  return 0;
 }

 VAR_9 = *VAR_7;

 FUNC_5(VAR_0, "TLSv1: Send CertificateRequest");
 VAR_10 = VAR_9;
 VAR_9 += VAR_5;




 VAR_11 = VAR_9;

 *VAR_9++ = VAR_4;

 VAR_12 = VAR_9;
 VAR_9 += 3;
 *VAR_9++ = 1;
 *VAR_9++ = 1;






 FUNC_0(VAR_9, 0);
 VAR_9 += 2;

 FUNC_1(VAR_12, VAR_9 - VAR_12 - 3);

 if (FUNC_3(&VAR_6->rl, VAR_3,
         VAR_10, VAR_8 - VAR_10, VAR_11, VAR_9 - VAR_11,
         &VAR_13) < 0) {
  FUNC_5(VAR_0, "TLSv1: Failed to generate a record");
  FUNC_4(VAR_6, VAR_2,
       VAR_1);
  return -1;
 }
 VAR_9 = VAR_10 + VAR_13;

 FUNC_2(&VAR_6->verify, VAR_11, VAR_9 - VAR_11);

 *VAR_7 = VAR_9;

 return 0;
}
