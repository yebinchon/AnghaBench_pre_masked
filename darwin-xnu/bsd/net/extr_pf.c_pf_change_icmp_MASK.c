
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct pf_addr {int * addr16; } ;
typedef int sa_family_t ;




 int FUNC_0 (struct pf_addr*,struct pf_addr*,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct pf_addr *VAR_0, u_int16_t *VAR_1, struct pf_addr *VAR_2,
    struct pf_addr *VAR_3, u_int16_t VAR_4, u_int16_t *VAR_5, u_int16_t *VAR_6,
    u_int16_t *VAR_7, u_int16_t *VAR_8, u_int8_t VAR_9, sa_family_t VAR_10)
{
 struct pf_addr VAR_11, VAR_12;

 FUNC_0(&VAR_11, VAR_0, VAR_10);
 FUNC_0(&VAR_12, VAR_2, VAR_10);


 if (VAR_1 != ((void*)0)) {
  u_int16_t VAR_13 = *VAR_1;
  u_int32_t VAR_14 = 0;

  if (VAR_5 != ((void*)0))
   VAR_14 = *VAR_5;
  *VAR_1 = VAR_4;
  if (VAR_5 != ((void*)0))
   *VAR_5 = FUNC_1(*VAR_5, VAR_13, *VAR_1, VAR_9);
  *VAR_7 = FUNC_1(*VAR_7, VAR_13, *VAR_1, 0);
  if (VAR_5 != ((void*)0))
   *VAR_7 = FUNC_1(*VAR_7, VAR_14, *VAR_5, 0);
 }

 FUNC_0(VAR_0, VAR_3, VAR_10);
 switch (VAR_10) {
 }

 FUNC_0(VAR_2, VAR_3, VAR_10);
 switch (VAR_10) {
 }
}
