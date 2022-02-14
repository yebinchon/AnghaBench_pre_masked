
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ssl_ctx_st {int dummy; } ;
struct TYPE_6__ {int do_not_free; int x509; } ;
typedef TYPE_1__ X ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct ssl_ctx_st*,int ) ;

bool FUNC_3(struct ssl_ctx_st *VAR_0, X *VAR_1)
{
 bool VAR_2 = 0;
 X *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return VAR_2;
 }

 VAR_3 = FUNC_0(VAR_1);

 if (VAR_3 != ((void*)0))
 {
  FUNC_2(VAR_0, VAR_3->x509);
  VAR_3->do_not_free = 1;

  VAR_2 = 1;

  FUNC_1(VAR_3);
 }

 return VAR_2;
}
