
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int debug_ucred ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int) ;

void FUNC_2( debug_ucred * VAR_0, size_t VAR_1 )
{
 int VAR_2, VAR_3 = (VAR_1 / sizeof(debug_ucred));

 FUNC_1("\n\t dumping credential hash table - total creds %d \n",
   VAR_3);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  FUNC_1("[%02d] ", VAR_2);
  FUNC_0( VAR_0 );
  VAR_0++;
 }
 return;
}
