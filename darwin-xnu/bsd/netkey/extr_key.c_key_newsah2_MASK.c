
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct secasindex {int dummy; } ;
struct secashead {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct secashead* FUNC_1 (struct secasindex*) ;
 struct secashead* FUNC_2 (struct secasindex*,int *,int ,int ) ;
 int VAR_1 ;

struct secashead *
FUNC_3 (struct secasindex *VAR_2,
    u_int8_t VAR_3)
{
 struct secashead *VAR_4;

 FUNC_0(VAR_1, VAR_0);

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4) {
  return(FUNC_2(VAR_2, ((void*)0), 0, VAR_3));
 }
 return VAR_4;
}
