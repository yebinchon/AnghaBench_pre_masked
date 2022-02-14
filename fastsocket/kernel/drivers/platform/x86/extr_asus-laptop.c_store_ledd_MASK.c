
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ ledd_status; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,size_t,int*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int *,int,int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_4, VAR_5, &VAR_7);
 if (VAR_6 > 0) {
  if (FUNC_2(VAR_1, ((void*)0), VAR_7, ((void*)0)))
   FUNC_1("LED display write failed\n");
  else
   VAR_0->ledd_status = (u32) VAR_7;
 }
 return VAR_6;
}
