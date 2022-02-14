
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {TYPE_1__* desc; } ;
struct TYPE_4__ {unsigned int descpage; } ;
struct TYPE_3__ {unsigned int config_len; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct device*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int,char*) ;
 unsigned int FUNC_3 () ;
 int FUNC_4 (unsigned int,void const*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1, unsigned VAR_2, const void *VAR_3)
{

 if (FUNC_1(VAR_1) + VAR_2 > VAR_0.descpage + FUNC_3())
  FUNC_2(1, "Too many devices");


 FUNC_4(FUNC_1(VAR_1), VAR_3, VAR_2);
 VAR_1->desc->config_len = VAR_2;


 FUNC_0(VAR_1->desc->config_len == VAR_2);
}
