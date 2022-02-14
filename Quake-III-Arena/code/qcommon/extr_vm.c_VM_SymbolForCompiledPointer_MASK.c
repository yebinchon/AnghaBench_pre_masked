
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int codeLength; scalar_t__* instructionPointers; scalar_t__ codeBase; } ;
typedef TYPE_1__ vm_t ;


 char const* FUNC_0 (TYPE_1__*,int) ;

const char *FUNC_1( vm_t *VAR_0, void *VAR_1 ) {
 int VAR_2;

 if ( VAR_1 < (void *)VAR_0->codeBase ) {
  return "Before code block";
 }
 if ( VAR_1 >= (void *)(VAR_0->codeBase + VAR_0->codeLength) ) {
  return "After code block";
 }


 for ( VAR_2 = 0 ; VAR_2 < VAR_0->codeLength ; VAR_2++ ) {
  if ( (void *)VAR_0->instructionPointers[VAR_2] > VAR_1 ) {
   break;
  }
 }
 VAR_2--;


 return FUNC_0( VAR_0, VAR_2 );
}
