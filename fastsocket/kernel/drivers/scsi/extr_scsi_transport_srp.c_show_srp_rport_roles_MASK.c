
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct srp_rport {scalar_t__ roles; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ value; char* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char*,char*) ;
 TYPE_1__* VAR_0 ;
 struct srp_rport* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct srp_rport *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;
 char *VAR_6 = ((void*)0);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++)
  if (VAR_0[VAR_5].value == VAR_4->roles) {
   VAR_6 = VAR_0[VAR_5].name;
   break;
  }
 return FUNC_1(VAR_3, "%s\n", VAR_6 ? : "unknown");
}
