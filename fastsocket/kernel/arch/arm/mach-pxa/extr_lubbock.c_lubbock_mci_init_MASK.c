
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
typedef int irq_handler_t ;
struct TYPE_3__ {unsigned long data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int ,int ,int ,char*,void*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_5,
  irq_handler_t VAR_6,
  void *VAR_7)
{

 VAR_3 = VAR_6;
 FUNC_0(&VAR_4);
 VAR_4.data = (unsigned long) VAR_7;
 return FUNC_1(VAR_1, VAR_2,
   VAR_0, "lubbock-sd-detect", VAR_7);
}
