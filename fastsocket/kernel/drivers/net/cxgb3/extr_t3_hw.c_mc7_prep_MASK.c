
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mc7 {char const* name; int width; int size; scalar_t__ offset; struct adapter* adapter; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct adapter*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_3, struct mc7 *VAR_4,
       unsigned int VAR_5, const char *VAR_6)
{
 u32 VAR_7;

 VAR_4->adapter = VAR_3;
 VAR_4->name = VAR_6;
 VAR_4->offset = VAR_5 - VAR_1;
 VAR_7 = FUNC_3(VAR_3, VAR_4->offset + VAR_0);
 VAR_4->size = FUNC_0(VAR_7) == VAR_2 ? 0 : FUNC_2(VAR_7);
 VAR_4->width = FUNC_1(VAR_7);
}
