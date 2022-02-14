
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct newah {int dummy; } ;
struct TYPE_3__ {scalar_t__ proto; } ;
struct ipsecrequest {TYPE_2__* sav; TYPE_1__ saidx; } ;
struct ah_algorithm {int (* sumsiz ) (TYPE_2__*) ;} ;
struct ah {int dummy; } ;
struct TYPE_4__ {scalar_t__ state; int flags; int alg_auth; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct ah_algorithm* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*) ;

size_t
FUNC_5(struct ipsecrequest *VAR_5)
{


 if (VAR_5 == ((void*)0))
  FUNC_3("ah_hdrsiz: NULL was passed.\n");

 if (VAR_5->saidx.proto != VAR_0)
  FUNC_3("unsupported mode passed to ah_hdrsiz");
 return sizeof(struct newah) + 16;
}
