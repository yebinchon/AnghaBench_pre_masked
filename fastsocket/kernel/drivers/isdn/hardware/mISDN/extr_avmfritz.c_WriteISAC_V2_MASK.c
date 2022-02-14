
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fritzcard {scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(void *VAR_2, u8 VAR_3, u8 VAR_4)
{
 struct fritzcard *VAR_5 = VAR_2;

 FUNC_0(VAR_3, VAR_5->addr + VAR_1);
 FUNC_0(VAR_4, VAR_5->addr + VAR_0);
}
