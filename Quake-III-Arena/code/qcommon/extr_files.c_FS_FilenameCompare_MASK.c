
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;



qboolean FUNC_0( const char *VAR_0, const char *VAR_1 ) {
 int VAR_2, VAR_3;

 do {
  VAR_2 = *VAR_0++;
  VAR_3 = *VAR_1++;

  if (VAR_2 >= 'a' && VAR_2 <= 'z') {
   VAR_2 -= ('a' - 'A');
  }
  if (VAR_3 >= 'a' && VAR_3 <= 'z') {
   VAR_3 -= ('a' - 'A');
  }

  if ( VAR_2 == '\\' || VAR_2 == ':' ) {
   VAR_2 = '/';
  }
  if ( VAR_3 == '\\' || VAR_3 == ':' ) {
   VAR_3 = '/';
  }

  if (VAR_2 != VAR_3) {
   return -1;
  }
 } while (VAR_2);

 return 0;
}
