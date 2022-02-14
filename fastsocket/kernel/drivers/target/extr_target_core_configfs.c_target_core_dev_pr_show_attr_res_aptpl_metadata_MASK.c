
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_device {TYPE_1__* transport; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ transport_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(
  struct se_device *VAR_1, char *VAR_2)
{
 if (VAR_1->transport->transport_type == VAR_0)
  return 0;

 return FUNC_0(VAR_2, "Ready to process PR APTPL metadata..\n");
}
