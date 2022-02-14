
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int regstep; scalar_t__ base; } ;
struct c67x00_device {TYPE_1__ hpi; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct c67x00_device *VAR_0, int VAR_1, u16 VAR_2)
{
 FUNC_0(VAR_2, VAR_0->hpi.base + VAR_1 * VAR_0->hpi.regstep);
}
