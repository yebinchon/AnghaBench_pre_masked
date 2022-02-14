
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_prefix {int ndpr_genid; } ;
struct nd_pfxrouter {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct nd_pfxrouter*,int ) ;
 int FUNC_2 (struct nd_prefix*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,struct nd_pfxrouter*) ;

__attribute__((used)) static void
FUNC_4(struct nd_pfxrouter *VAR_4, struct nd_prefix *VAR_5)
{
 FUNC_0(VAR_1, VAR_0);
 FUNC_2(VAR_5);
 VAR_5->ndpr_genid++;
 FUNC_1(VAR_4, VAR_3);
 FUNC_3(VAR_2, VAR_4);
}
