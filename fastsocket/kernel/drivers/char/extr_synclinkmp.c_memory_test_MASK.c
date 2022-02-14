
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ memory_base; } ;
typedef TYPE_1__ SLMP_INFO ;


 unsigned long FUNC_0 (unsigned long*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ,int) ;

__attribute__((used)) static bool FUNC_2(SLMP_INFO *VAR_1)
{
 static unsigned long VAR_2[] = { 0x0, 0x55555555, 0xaaaaaaaa,
  0x66666666, 0x99999999, 0xffffffff, 0x12345678 };
 unsigned long VAR_3 = FUNC_0(VAR_2);
 unsigned long VAR_4;
 unsigned long VAR_5 = VAR_0/sizeof(unsigned long);
 unsigned long * VAR_6 = (unsigned long *)VAR_1->memory_base;



 for ( VAR_4 = 0 ; VAR_4 < VAR_3 ; VAR_4++ ) {
  *VAR_6 = VAR_2[VAR_4];
  if ( *VAR_6 != VAR_2[VAR_4] )
   return 0;
 }




 for ( VAR_4 = 0 ; VAR_4 < VAR_5 ; VAR_4++ ) {
  *VAR_6 = VAR_4 * 4;
  VAR_6++;
 }

 VAR_6 = (unsigned long *)VAR_1->memory_base;

 for ( VAR_4 = 0 ; VAR_4 < VAR_5 ; VAR_4++ ) {
  if ( *VAR_6 != VAR_4 * 4 )
   return 0;
  VAR_6++;
 }

 FUNC_1( VAR_1->memory_base, 0, VAR_0 );
 return 1;
}
