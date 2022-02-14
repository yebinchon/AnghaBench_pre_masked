
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_short ;
typedef int u_int ;
typedef int u_char ;
struct TYPE_4__ {scalar_t__ iobase; } ;
typedef TYPE_1__ hfc4s8s_hw ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int volatile) ;

__attribute__((used)) static inline u_short
FUNC_2(hfc4s8s_hw * VAR_0, u_char VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 return (FUNC_1((volatile u_int) VAR_0->iobase));
}
