
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct cs_blob {int csb_hash_pageshift; TYPE_2__* csb_cd; int * csb_teamid; int csb_platform_binary; } ;
typedef int boolean_t ;
struct TYPE_4__ {int codeLimit; int scatterOffset; int version; int nCodeSlots; } ;
struct TYPE_3__ {int count; int base; } ;
typedef TYPE_1__ SC_Scatter ;
typedef TYPE_2__ CS_CodeDirectory ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static boolean_t
FUNC_1(struct cs_blob *VAR_5)
{
 const CS_CodeDirectory *VAR_6;






 if (!VAR_5->csb_platform_binary || VAR_5->csb_teamid != ((void*)0)) {
  return VAR_1;
 }





 if (VAR_3 <= VAR_5->csb_hash_pageshift) {
  return VAR_1;
 }

 VAR_6 = VAR_5->csb_cd;




 if (FUNC_0(VAR_6->nCodeSlots) & (VAR_2 >> VAR_5->csb_hash_pageshift)) {
  return VAR_1;
 }




 if ((FUNC_0(VAR_6->version) >= VAR_0) && (FUNC_0(VAR_6->scatterOffset))) {

  const SC_Scatter *VAR_7 = (const SC_Scatter*)
   ((const char*)VAR_6 + FUNC_0(VAR_6->scatterOffset));

  do {
   uint32_t VAR_8 = FUNC_0(VAR_7->base);
   uint32_t VAR_9 = FUNC_0(VAR_7->count);


   if (VAR_9 == 0) {
    break;
   }

   if (VAR_8 & (VAR_2 >> VAR_5->csb_hash_pageshift)) {
    return VAR_1;
   }

   if (VAR_9 & (VAR_2 >> VAR_5->csb_hash_pageshift)) {
    return VAR_1;
   }

   VAR_7++;
  } while(1);
 }


 if (FUNC_0(VAR_6->codeLimit) & VAR_2) {
  return VAR_1;
 }


 return VAR_4;
}
