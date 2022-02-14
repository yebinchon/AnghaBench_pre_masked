
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int high; int low; } ;
struct TYPE_6__ {TYPE_1__ ssr; } ;
typedef TYPE_2__ IXJ ;


 int FUNC_0 (int,TYPE_2__*) ;

__attribute__((used)) static inline int FUNC_1(IXJ *VAR_0)
{
 int VAR_1;

 FUNC_0(0xCF8F, VAR_0);
 return VAR_0->ssr.high << 8 | VAR_0->ssr.low;
 VAR_1 = VAR_0->ssr.high << 8 | VAR_0->ssr.low;
 VAR_1 = (VAR_1 * 256) / 240;
 return VAR_1;
}
