
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ whoami; int (* read ) (TYPE_1__*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_8,
   struct device_attribute *VAR_9, char *VAR_10)
{
 u8 VAR_11;
 int VAR_12;

 VAR_7.read(&VAR_7, VAR_3, &VAR_11);

 if (VAR_7.whoami == VAR_4)
  VAR_12 = VAR_5[(VAR_11 & (VAR_0 | VAR_1)) >> 4];
 else
  VAR_12 = VAR_6[(VAR_11 & VAR_2) >> 7];

 return FUNC_0(VAR_10, "%d\n", VAR_12);
}
