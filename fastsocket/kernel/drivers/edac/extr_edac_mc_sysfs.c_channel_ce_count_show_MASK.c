
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csrow_info {TYPE_1__* channels; } ;
typedef int ssize_t ;
struct TYPE_2__ {int ce_count; } ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct csrow_info *VAR_0,
    char *VAR_1, int VAR_2)
{
 return FUNC_0(VAR_1, "%u\n", VAR_0->channels[VAR_2].ce_count);
}
