
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct get_set_mib {int size; void** data; void* index; void* type; } ;
struct atmel_private {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct atmel_private*,int ,struct get_set_mib*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct atmel_private *VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct get_set_mib VAR_6;
 VAR_6.type = VAR_3;
 VAR_6.size = 1;
 VAR_6.index = VAR_4;
 VAR_6.data[0] = VAR_5;

 FUNC_0(VAR_2, VAR_0, &VAR_6, VAR_1 + 1);
}
