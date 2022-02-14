
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {void* len; void* type; } ;
struct mrvl_ie_chanlist_param_set {TYPE_1__ header; int chanscanparam; } ;
struct chanscanparamset {int dummy; } ;


 size_t VAR_0 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (int ,struct chanscanparamset*,size_t) ;

__attribute__((used)) static int FUNC_2(uint8_t *VAR_1,
         struct chanscanparamset *VAR_2,
         int VAR_3)
{
 size_t VAR_4 = sizeof(struct chanscanparamset) *VAR_3;
 struct mrvl_ie_chanlist_param_set *VAR_5 = (void *)VAR_1;

 VAR_5->header.type = FUNC_0(VAR_0);
 FUNC_1(VAR_5->chanscanparam, VAR_2, VAR_4);
 VAR_5->header.len = FUNC_0(VAR_4);
 return sizeof(VAR_5->header) + VAR_4;
}
