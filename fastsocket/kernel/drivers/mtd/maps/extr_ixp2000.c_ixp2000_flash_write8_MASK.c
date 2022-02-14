
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct map_info {scalar_t__ map_priv_1; } ;
struct TYPE_3__ {int * x; } ;
typedef TYPE_1__ map_word ;
typedef int __u8 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct map_info*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct map_info *VAR_0, map_word VAR_1, unsigned long VAR_2)
{
 *(__u8 *) (FUNC_0(VAR_0->map_priv_1 +
          FUNC_1(VAR_0, VAR_2))) = VAR_1.x[0];
}
