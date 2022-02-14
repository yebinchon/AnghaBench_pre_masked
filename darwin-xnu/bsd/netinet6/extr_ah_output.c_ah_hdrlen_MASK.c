
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct secasvar {int flags; int alg_auth; } ;
struct newah {int dummy; } ;
struct ah_algorithm {int (* sumsiz ) (struct secasvar*) ;} ;
struct ah {int dummy; } ;


 int VAR_0 ;
 struct ah_algorithm* FUNC_0 (int ) ;
 int FUNC_1 (struct secasvar*) ;
 int FUNC_2 (struct secasvar*) ;

int
FUNC_3(struct secasvar *VAR_1)
{
 const struct ah_algorithm *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = FUNC_0(VAR_1->alg_auth);
 if (!VAR_2)
  return 0;
 if (VAR_1->flags & VAR_0) {

  VAR_3 = ((*VAR_2->sumsiz)(VAR_1) + 3) & ~(4 - 1);
  VAR_4 = VAR_3 + sizeof(struct ah);
 } else {

  VAR_3 = ((*VAR_2->sumsiz)(VAR_1) + 3) & ~(4 - 1);
  VAR_4 = VAR_3 + sizeof(struct newah);
 }

 return(VAR_4);
}
