
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csrow_info {TYPE_1__* channels; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* label; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct csrow_info *VAR_1,
    char *VAR_2, int VAR_3)
{

 if (!VAR_1->channels[VAR_3].label[0])
  return 0;

 return FUNC_0(VAR_2, VAR_0, "%s\n",
   VAR_1->channels[VAR_3].label);
}
