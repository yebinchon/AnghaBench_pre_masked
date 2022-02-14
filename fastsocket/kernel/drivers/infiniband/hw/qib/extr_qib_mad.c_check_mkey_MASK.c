
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_ibport {int mkey_lease_timeout; int mkeyprot; scalar_t__ mkey; int mkey_violations; int mkey_lease_period; } ;
struct ib_smp {scalar_t__ mkey; int method; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct qib_ibport*,struct ib_smp*) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct qib_ibport *VAR_3, struct ib_smp *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 0;


 if (VAR_3->mkey_lease_timeout &&
     FUNC_1(VAR_2, VAR_3->mkey_lease_timeout)) {

  VAR_3->mkey_lease_timeout = 0;
  VAR_3->mkeyprot = 0;
 }

 if ((VAR_5 & VAR_1) || VAR_3->mkey == 0 ||
     VAR_3->mkey == VAR_4->mkey)
  VAR_6 = 1;


 if (VAR_6 && VAR_3->mkey_lease_timeout &&
     (VAR_4->method == 130 ||
      VAR_4->method == 129 ||
      VAR_4->method == 128))
  VAR_3->mkey_lease_timeout = 0;

 if (!VAR_6) {
  switch (VAR_4->method) {
  case 130:

   if (VAR_3->mkeyprot < 2)
    break;
  case 129:
  case 128:
   if (VAR_3->mkey_violations != 0xFFFF)
    ++VAR_3->mkey_violations;
   if (!VAR_3->mkey_lease_timeout && VAR_3->mkey_lease_period)
    VAR_3->mkey_lease_timeout = VAR_2 +
     VAR_3->mkey_lease_period * VAR_0;

   FUNC_0(VAR_3, VAR_4);
   VAR_7 = 1;
  }
 }

 return VAR_7;
}
