
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_host {scalar_t__ h_expires; int h_count; int h_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_1 ;

struct nlm_host * FUNC_2(struct nlm_host *VAR_2)
{
 if (VAR_2) {
  FUNC_1("lockd: get host %s\n", VAR_2->h_name);
  FUNC_0(&VAR_2->h_count);
  VAR_2->h_expires = VAR_1 + VAR_0;
 }
 return VAR_2;
}
