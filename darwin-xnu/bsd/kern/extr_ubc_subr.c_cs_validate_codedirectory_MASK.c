
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct cs_hash {size_t cs_size; } ;
typedef int scatter ;
struct TYPE_5__ {scalar_t__ pageSize; size_t hashSize; scalar_t__ teamOffset; scalar_t__ version; scalar_t__ identOffset; scalar_t__ nCodeSlots; scalar_t__ scatterOffset; scalar_t__ hashOffset; scalar_t__ nSpecialSlots; int hashType; scalar_t__ magic; } ;
struct TYPE_4__ {scalar_t__ count; } ;
typedef TYPE_1__ SC_Scatter ;
typedef TYPE_2__ CS_CodeDirectory ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct cs_hash* FUNC_0 (int ) ;
 int * FUNC_1 (int const*,int ,size_t) ;
 size_t FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(const CS_CodeDirectory *VAR_6, size_t VAR_7)
{
 struct cs_hash const *VAR_8;

 if (VAR_7 < sizeof(*VAR_6))
  return VAR_3;
 if (FUNC_2(VAR_6->magic) != VAR_0)
  return VAR_3;
 if (VAR_6->pageSize < VAR_5 || VAR_6->pageSize > VAR_4)
  return VAR_3;
 VAR_8 = FUNC_0(VAR_6->hashType);
 if (VAR_8 == ((void*)0))
  return VAR_3;

 if (VAR_6->hashSize != VAR_8->cs_size)
  return VAR_3;

 if (VAR_7 < FUNC_2(VAR_6->hashOffset))
  return VAR_3;


 if (FUNC_2(VAR_6->hashOffset) / VAR_8->cs_size < FUNC_2(VAR_6->nSpecialSlots))
  return VAR_3;


 if ((VAR_7 - FUNC_2(VAR_6->hashOffset)) / VAR_8->cs_size < FUNC_2(VAR_6->nCodeSlots))
  return VAR_3;

 if (FUNC_2(VAR_6->version) >= VAR_1 && VAR_6->scatterOffset) {

  if (VAR_7 < FUNC_2(VAR_6->scatterOffset))
   return VAR_3;

  const SC_Scatter *VAR_9 = (const SC_Scatter *)
   (((const uint8_t *)VAR_6) + FUNC_2(VAR_6->scatterOffset));
  uint32_t VAR_10 = 0;






  while(1) {

   if (((const uint8_t *)VAR_9) + sizeof(VAR_9[0]) > (const uint8_t *)VAR_6 + VAR_7)
    return VAR_3;
   uint32_t VAR_11 = FUNC_2(VAR_9->count);
   if (VAR_11 == 0)
    break;
   if (VAR_10 + VAR_11 < VAR_10)
    return VAR_3;
   VAR_10 += VAR_11;
   VAR_9++;



  }




 }

 if (VAR_7 < FUNC_2(VAR_6->identOffset))
  return VAR_3;


 if (VAR_6->identOffset) {
  const uint8_t *VAR_12 = (const uint8_t *)VAR_6 + FUNC_2(VAR_6->identOffset);
  if (FUNC_1(VAR_12, 0, VAR_7 - FUNC_2(VAR_6->identOffset)) == ((void*)0))
   return VAR_3;
 }


 if (FUNC_2(VAR_6->version) >= VAR_2 && FUNC_2(VAR_6->teamOffset)) {
  if (VAR_7 < FUNC_2(VAR_6->teamOffset))
   return VAR_3;

  const uint8_t *VAR_13 = (const uint8_t *)VAR_6 + FUNC_2(VAR_6->teamOffset);
  if (FUNC_1(VAR_13, 0, VAR_7 - FUNC_2(VAR_6->teamOffset)) == ((void*)0))
   return VAR_3;
 }

 return 0;
}
