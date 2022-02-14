
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_7__ {int magic; } ;
struct TYPE_6__ {TYPE_1__* index; int count; } ;
struct TYPE_5__ {int offset; int type; } ;
typedef TYPE_2__ CS_SuperBlob ;
typedef TYPE_3__ CS_GenericBlob ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

const CS_GenericBlob *
FUNC_1(const uint8_t *VAR_3, size_t VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 const CS_GenericBlob *VAR_7 = (const CS_GenericBlob *)(const void *)VAR_3;

 if (FUNC_0(VAR_7->magic) == VAR_1) {
  const CS_SuperBlob *VAR_8 = (const CS_SuperBlob *)VAR_7;
  size_t VAR_9, VAR_10 = FUNC_0(VAR_8->count);

  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
   if (FUNC_0(VAR_8->index[VAR_9].type) != VAR_5)
    continue;
   uint32_t VAR_11 = FUNC_0(VAR_8->index[VAR_9].offset);
   if (VAR_4 - sizeof(const CS_GenericBlob) < VAR_11)
    return ((void*)0);
   VAR_7 = (const CS_GenericBlob *)(const void *)(VAR_3 + VAR_11);
   if (FUNC_0(VAR_7->magic) != VAR_6)
    continue;
   return VAR_7;
  }
 } else if (VAR_5 == VAR_2
     && FUNC_0(VAR_7->magic) == VAR_0
     && VAR_6 == VAR_0)
  return VAR_7;
 return ((void*)0);
}
