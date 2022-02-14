
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct match_state {char* pattern; scalar_t__ in_search; int match_direction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(int VAR_6, struct match_state *VAR_7, int *VAR_8)
{
 char VAR_9 = (char) VAR_6;
 int VAR_10 = 0;
 *VAR_8 = -1;
 if (VAR_6 == '/' || (VAR_7->in_search && VAR_6 == 27)) {
  FUNC_6(0, 0);
  FUNC_7();
  FUNC_2();
  VAR_7->in_search = 1-VAR_7->in_search;
  FUNC_1(VAR_7->pattern, sizeof(VAR_7->pattern));
  VAR_7->match_direction = VAR_5;
  return 0;
 } else if (!VAR_7->in_search)
  return 1;

 if (FUNC_4(VAR_9) || FUNC_5(VAR_9) || VAR_9 == ' ') {
  VAR_7->pattern[FUNC_8(VAR_7->pattern)] = VAR_9;
  VAR_7->pattern[FUNC_8(VAR_7->pattern)] = '\0';
  FUNC_0(&VAR_7->match_direction);
  *VAR_8 = FUNC_3(VAR_7->pattern,
    VAR_7->match_direction);
 } else if (VAR_6 == VAR_3) {
  VAR_7->match_direction = VAR_0;
  *VAR_8 = FUNC_3(VAR_7->pattern,
    VAR_7->match_direction);
 } else if (VAR_6 == VAR_4) {
  VAR_7->match_direction = VAR_1;
  *VAR_8 = FUNC_3(VAR_7->pattern,
    VAR_7->match_direction);
 } else if (VAR_6 == VAR_2 || VAR_6 == 127) {
  VAR_7->pattern[FUNC_8(VAR_7->pattern)-1] = '\0';
  FUNC_0(&VAR_7->match_direction);
 } else
  VAR_10 = 1;

 if (VAR_10) {
  VAR_7->in_search = 0;
  FUNC_1(VAR_7->pattern, sizeof(VAR_7->pattern));
  FUNC_6(0, 0);
  FUNC_7();
  FUNC_2();
  return -1;
 }
 return 0;
}
