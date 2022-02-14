
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ io; } ;
typedef TYPE_1__ card_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static __inline__ void FUNC_2(card_t *VAR_2, u8 VAR_3)
{
 u8 VAR_4 = FUNC_0(VAR_2->io + VAR_0);
 FUNC_1((VAR_4 & ~VAR_1) | VAR_3, VAR_2->io + VAR_0);
}
