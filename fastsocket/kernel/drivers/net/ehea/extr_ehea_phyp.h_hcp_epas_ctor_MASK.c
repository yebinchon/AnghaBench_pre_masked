
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int addr; } ;
struct TYPE_3__ {scalar_t__ addr; } ;
struct h_epas {TYPE_2__ user; TYPE_1__ kernel; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;

__attribute__((used)) static inline void FUNC_1(struct h_epas *VAR_2, u64 VAR_3,
     u64 VAR_4)
{

 VAR_2->kernel.addr = FUNC_0((VAR_3 & VAR_0), VAR_1) +
       (VAR_3 & ~VAR_0);
 VAR_2->user.addr = VAR_4;
}
