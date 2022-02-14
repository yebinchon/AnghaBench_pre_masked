
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ipw_priv {int dummy; } ;
struct ipw_frag_threshold {int frag_threshold; } ;
typedef int frag_threshold ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ipw_priv*,int ,int,struct ipw_frag_threshold*) ;

__attribute__((used)) static int FUNC_3(struct ipw_priv *VAR_1, u16 VAR_2)
{
 struct ipw_frag_threshold VAR_3 = {
  .frag_threshold = FUNC_1(VAR_2),
 };

 if (!VAR_1) {
  FUNC_0("Invalid args\n");
  return -1;
 }

 return FUNC_2(VAR_1, VAR_0,
    sizeof(VAR_3), &VAR_3);
}
