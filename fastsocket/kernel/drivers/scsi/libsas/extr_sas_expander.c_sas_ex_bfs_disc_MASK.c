
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_level; } ;
struct asd_sas_port {TYPE_1__ disc; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct asd_sas_port*,int) ;

__attribute__((used)) static int FUNC_2(struct asd_sas_port *VAR_0)
{
 int VAR_1;
 int VAR_2;

 do {
  VAR_2 = VAR_0->disc.max_level;
  VAR_1 = FUNC_1(VAR_0, VAR_2);
  FUNC_0();
 } while (VAR_2 < VAR_0->disc.max_level);

 return VAR_1;
}
