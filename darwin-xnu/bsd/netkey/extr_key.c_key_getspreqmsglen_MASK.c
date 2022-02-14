
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct secpolicy {scalar_t__ policy; struct ipsecrequest* req; } ;
struct sadb_x_policy {int dummy; } ;
struct sadb_x_ipsecrequest {int dummy; } ;
struct TYPE_4__ {int ss_len; } ;
struct TYPE_5__ {int ss_len; } ;
struct TYPE_6__ {TYPE_1__ dst; TYPE_2__ src; } ;
struct ipsecrequest {TYPE_3__ saidx; struct ipsecrequest* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static u_int
FUNC_1(
       struct secpolicy *VAR_1)
{
 u_int VAR_2;

 VAR_2 = sizeof(struct sadb_x_policy);


 if (VAR_1->policy != VAR_0)
  return VAR_2;


    {
  struct ipsecrequest *VAR_3;
  int VAR_4;

  for (VAR_3 = VAR_1->req; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
   VAR_4 = sizeof(struct sadb_x_ipsecrequest)
   + VAR_3->saidx.src.ss_len
   + VAR_3->saidx.dst.ss_len;

   VAR_2 += FUNC_0(VAR_4);
  }
    }

 return VAR_2;
}
