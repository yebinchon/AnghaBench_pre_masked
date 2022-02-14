
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tlsv1_server {size_t num_cipher_suites; int * cipher_suites; int verify; int state; struct tlsv1_credentials* cred; } ;
struct tlsv1_credentials {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct tlsv1_server*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;

struct tlsv1_server * FUNC_4(struct tlsv1_credentials *VAR_7)
{
 struct tlsv1_server *VAR_8;
 size_t VAR_9;
 u16 *VAR_10;

 VAR_8 = (struct tlsv1_server *)FUNC_1(sizeof(*VAR_8));
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_8->cred = VAR_7;

 VAR_8->state = VAR_0;

 if (FUNC_2(&VAR_8->verify) < 0) {
  FUNC_3(VAR_1, "TLSv1: Failed to initialize verify "
      "hash");
  FUNC_0(VAR_8);
  return ((void*)0);
 }

 VAR_9 = 0;
 VAR_10 = VAR_8->cipher_suites;
 VAR_10[VAR_9++] = VAR_4;
 VAR_10[VAR_9++] = VAR_3;



 VAR_10[VAR_9++] = VAR_6;
 VAR_10[VAR_9++] = VAR_5;
 VAR_8->num_cipher_suites = VAR_9;

 return VAR_8;
}
