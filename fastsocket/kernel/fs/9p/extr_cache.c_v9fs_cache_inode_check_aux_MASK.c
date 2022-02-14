
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct v9fs_cookie {TYPE_1__* qid; } ;
typedef enum fscache_checkaux { ____Placeholder_fscache_checkaux } fscache_checkaux ;
struct TYPE_2__ {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void const*,int *,int) ;

__attribute__((used)) static enum
fscache_checkaux FUNC_1(void *VAR_2,
         const void *VAR_3,
         uint16_t VAR_4)
{
 const struct v9fs_cookie *VAR_5 = VAR_2;

 if (VAR_4 != sizeof(VAR_5->qid->version))
  return VAR_0;

 if (FUNC_0(VAR_3, &VAR_5->qid->version,
     sizeof(VAR_5->qid->version)))
  return VAR_0;

 return VAR_1;
}
