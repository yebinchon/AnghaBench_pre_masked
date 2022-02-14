
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len; void* data; } ;
struct carlfw {TYPE_1__ fw; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (size_t) ;
 void* FUNC_3 (struct carlfw*,size_t) ;
 int FUNC_4 (void*,void*,size_t) ;

void *FUNC_5(struct carlfw *VAR_1, ssize_t VAR_2)
{
 size_t VAR_3;
 void *VAR_4;

 VAR_3 = VAR_1->fw.len + VAR_2;
 if (!FUNC_2(VAR_3))
  return FUNC_0(-VAR_0);

 if (VAR_2 < 0)
  FUNC_4(VAR_1->fw.data, &VAR_1->fw.data[VAR_2], VAR_3);

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (FUNC_1(VAR_4))
  return VAR_4;

 if (VAR_2 > 0)
  FUNC_4(&VAR_1->fw.data[VAR_2], &VAR_1->fw.data[0], VAR_3 - VAR_2);

 return VAR_1->fw.data;
}
