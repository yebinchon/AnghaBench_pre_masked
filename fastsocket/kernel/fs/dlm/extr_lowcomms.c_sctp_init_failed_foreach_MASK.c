
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int swork; int flags; scalar_t__ sctp_assoc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct connection *VAR_3)
{
 VAR_3->sctp_assoc = 0;
 if (FUNC_1(VAR_0, &VAR_3->flags)) {
  if (!FUNC_2(VAR_1, &VAR_3->flags))
   FUNC_0(VAR_2, &VAR_3->swork);
 }
}
