
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csrow_info {TYPE_1__* channels; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {char* label; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(struct csrow_info *VAR_1,
     const char *VAR_2,
     size_t VAR_3, int VAR_4)
{
 ssize_t VAR_5 = 0;

 VAR_5 = FUNC_0((ssize_t) VAR_3, (ssize_t) VAR_0 - 1);
 FUNC_1(VAR_1->channels[VAR_4].label, VAR_2, VAR_5);
 VAR_1->channels[VAR_4].label[VAR_5] = '\0';

 return VAR_5;
}
