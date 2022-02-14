
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct func {struct caller* callers; } ;
struct caller {char* name; char* file; int x; int y; scalar_t__ count; struct caller* link; } ;


 int FUNC_0 (struct caller*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct func*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(char *VAR_1, char *VAR_2, int VAR_3, int VAR_4, int VAR_5, struct func *VAR_6) {
 struct caller *VAR_7;

 FUNC_1(VAR_6);
 for (VAR_7 = VAR_6->callers; VAR_7 && (VAR_1 != VAR_7->name
  || VAR_2 != VAR_7->file || VAR_3 != VAR_7->x || VAR_4 != VAR_7->y); VAR_7 = VAR_7->link)
  ;
 if (!VAR_7) {
  struct caller **VAR_8;
  FUNC_0(VAR_7, VAR_0);
  VAR_7->name = VAR_1;
  VAR_7->file = VAR_2;
  VAR_7->x = VAR_3;
  VAR_7->y = VAR_4;
  VAR_7->count = 0;
  for (VAR_8 = &VAR_6->callers; *VAR_8 && (FUNC_2(VAR_7->name, (*VAR_8)->name) > 0
   || FUNC_2(VAR_7->file, (*VAR_8)->file) > 0 || VAR_7->y > (*VAR_8)->y || VAR_7->y > (*VAR_8)->y); VAR_8 = &(*VAR_8)->link)
   ;
  VAR_7->link = *VAR_8;
  *VAR_8 = VAR_7;
 }
 VAR_7->count += VAR_5;
}
