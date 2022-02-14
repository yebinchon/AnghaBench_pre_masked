
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len; void* data; } ;
struct carlfw {TYPE_1__ fw; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 void* FUNC_2 (void*,size_t) ;

void *FUNC_3(struct carlfw *VAR_2, ssize_t VAR_3)
{
 size_t VAR_4;
 void *VAR_5;

 VAR_4 = VAR_2->fw.len + VAR_3;

 if (!FUNC_1(VAR_4))
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_2(VAR_2->fw.data, VAR_4);
 if (VAR_5 == ((void*)0))
  return FUNC_0(-VAR_1);

 VAR_2->fw.len = VAR_4;
 VAR_2->fw.data = VAR_5;
 return &VAR_2->fw.data[VAR_4 - VAR_3];
}
