
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ boolean_t ;
typedef scalar_t__ (* argsep_func_t ) (char) ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_0(
 char *VAR_4,
 long long *VAR_5,
 argsep_func_t VAR_6,
 boolean_t VAR_7 )
{
 unsigned long long VAR_8, VAR_9;
 unsigned char VAR_10;
 int VAR_11 = 1;
 boolean_t VAR_12 = VAR_0;

 if (*VAR_4 == '=') {
  VAR_4++;
  VAR_12 = VAR_3;
 }

 if (VAR_12 || VAR_7) {
  if (*VAR_4 == '-') {
   VAR_11 = -1;
   VAR_4++;
  }
  VAR_9 = *VAR_4++-'0';
  VAR_8 = 10;
  if (VAR_9 == 0) {
   switch(*VAR_4) {

   case 'x':
    VAR_8 = 16;
    VAR_4++;
    break;

   case 'b':
    VAR_8 = 2;
    VAR_4++;
    break;

   case '0': case '1': case '2': case '3':
   case '4': case '5': case '6': case '7':
    VAR_9 = *VAR_4-'0';
    VAR_4++;
    VAR_8 = 8;
    break;

   default:
    if (!VAR_6(*VAR_4))
     return (VAR_2);
   }
                } else if (VAR_9 >= VAR_8) {
                    return (VAR_2);
                }
  for(;;) {
                        VAR_10 = *VAR_4++;
                        if (VAR_6(VAR_10))
                            break;
                        if ((VAR_8 <= 10) &&
                            ((VAR_10 >= '0') && (VAR_10 <= ('9' - (10 - VAR_8))))) {
                                VAR_10 -= '0';
                        } else if ((VAR_8 == 16) &&
                                   ((VAR_10 >= '0') && (VAR_10 <= '9'))) {
    VAR_10 -= '0';
                        } else if ((VAR_8 == 16) &&
                                   ((VAR_10 >= 'a') && (VAR_10 <= 'f'))) {
    VAR_10 -= 'a' - 10;
                        } else if ((VAR_8 == 16) &&
                                   ((VAR_10 >= 'A') && (VAR_10 <= 'F'))) {
    VAR_10 -= 'A' - 10;
                        } else if (VAR_10 == 'k' || VAR_10 == 'K') {
    VAR_11 *= 1024;
    break;
   } else if (VAR_10 == 'm' || VAR_10 == 'M') {
    VAR_11 *= 1024 * 1024;
                                break;
   } else if (VAR_10 == 'g' || VAR_10 == 'G') {
    VAR_11 *= 1024 * 1024 * 1024;
                                break;
   } else {
    return (VAR_2);
                        }
   if (VAR_10 >= VAR_8)
    return (VAR_2);
   VAR_9 *= VAR_8;
   VAR_9 += VAR_10;
  }
                if (!VAR_6(VAR_10) && !VAR_6(*VAR_4))
                    return VAR_2;
  *VAR_5 = VAR_9 * VAR_11;
  return (VAR_1);
 }
 *VAR_5 = 1;
 return (VAR_1);
}
