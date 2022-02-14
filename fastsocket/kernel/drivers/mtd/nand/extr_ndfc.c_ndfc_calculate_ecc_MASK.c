
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_char ;
struct ndfc_controller {scalar_t__ ndfcbase; } ;
struct mtd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct ndfc_controller VAR_1 ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_2,
         const u_char *VAR_3, u_char *VAR_4)
{
 struct ndfc_controller *VAR_5 = &VAR_1;
 uint32_t VAR_6;
 uint8_t *VAR_7 = (uint8_t *)&VAR_6;

 FUNC_1();
 VAR_6 = FUNC_0(VAR_5->ndfcbase + VAR_0);

 VAR_4[0] = VAR_7[1];
 VAR_4[1] = VAR_7[2];
 VAR_4[2] = VAR_7[3];

 return 0;
}
