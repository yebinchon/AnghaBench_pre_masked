
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlsv1_server {int verify; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct tlsv1_server*) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct tlsv1_server *VAR_2)
{
 VAR_2->state = VAR_0;

 if (FUNC_0(&VAR_2->verify) < 0) {
  FUNC_2(VAR_1, "TLSv1: Failed to re-initialize verify "
      "hash");
  return -1;
 }

 FUNC_1(VAR_2);

 return 0;
}
