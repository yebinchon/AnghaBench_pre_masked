
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf50633 {int* resume_reason; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct pcf50633* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int,int,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct pcf50633 *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, "%02x%02x%02x%02x%02x\n",
    VAR_3->resume_reason[0],
    VAR_3->resume_reason[1],
    VAR_3->resume_reason[2],
    VAR_3->resume_reason[3],
    VAR_3->resume_reason[4]);

 return VAR_4;
}
