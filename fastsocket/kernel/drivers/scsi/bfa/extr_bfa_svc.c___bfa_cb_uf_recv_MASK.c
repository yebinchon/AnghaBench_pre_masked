
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_uf_s {int bfa; } ;
struct bfa_uf_mod_s {int cbarg; int (* ufrecv ) (int ,struct bfa_uf_s*) ;} ;
typedef scalar_t__ bfa_boolean_t ;


 struct bfa_uf_mod_s* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct bfa_uf_s*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, bfa_boolean_t VAR_1)
{
 struct bfa_uf_s *VAR_2 = VAR_0;
 struct bfa_uf_mod_s *VAR_3 = FUNC_0(VAR_2->bfa);

 if (VAR_1)
  VAR_3->ufrecv(VAR_3->cbarg, VAR_2);
}
