
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cmng_init_input {int port_rate; int flags; } ;
struct TYPE_2__ {int flags; } ;
struct cmng_init {TYPE_1__ port; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cmng_init_input const*,int ,struct cmng_init*) ;
 int FUNC_2 (struct cmng_init_input const*,int ,struct cmng_init*) ;
 int FUNC_3 (struct cmng_init_input const*,int ,struct cmng_init*) ;
 int FUNC_4 (struct cmng_init_input const*,struct cmng_init*) ;
 int FUNC_5 (struct cmng_init*,int ,int) ;

__attribute__((used)) static inline void FUNC_6(const struct cmng_init_input *VAR_0,
       struct cmng_init *VAR_1)
{
 u32 VAR_2;
 FUNC_5(VAR_1, 0, sizeof(struct cmng_init));

 VAR_1->port.flags = VAR_0->flags;




 VAR_2 = FUNC_0(VAR_0->port_rate);
 FUNC_2(VAR_0, VAR_2, VAR_1);
 FUNC_3(VAR_0, VAR_2, VAR_1);
 FUNC_1(VAR_0, VAR_2, VAR_1);
 FUNC_4(VAR_0, VAR_1);
}
