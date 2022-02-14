
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {char* name; int flags; struct symbol* next; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct symbol* FUNC_0 (int) ;
 int FUNC_1 (struct symbol*,int ,int) ;
 int FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 struct symbol** VAR_4 ;
 struct symbol VAR_5 ;
 struct symbol VAR_6 ;
 struct symbol VAR_7 ;

struct symbol *FUNC_5(const char *VAR_8, int VAR_9)
{
 struct symbol *VAR_10;
 char *VAR_11;
 int VAR_12;

 if (VAR_8) {
  if (VAR_8[0] && !VAR_8[1]) {
   switch (VAR_8[0]) {
   case 'y': return &VAR_7;
   case 'm': return &VAR_5;
   case 'n': return &VAR_6;
   }
  }
  VAR_12 = FUNC_4(VAR_8) % VAR_2;

  for (VAR_10 = VAR_4[VAR_12]; VAR_10; VAR_10 = VAR_10->next) {
   if (VAR_10->name &&
       !FUNC_2(VAR_10->name, VAR_8) &&
       (VAR_9 ? VAR_10->flags & VAR_9
       : !(VAR_10->flags & (VAR_1|VAR_0))))
    return VAR_10;
  }
  VAR_11 = FUNC_3(VAR_8);
 } else {
  VAR_11 = ((void*)0);
  VAR_12 = 0;
 }

 VAR_10 = FUNC_0(sizeof(*VAR_10));
 FUNC_1(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->name = VAR_11;
 VAR_10->type = VAR_3;
 VAR_10->flags |= VAR_9;

 VAR_10->next = VAR_4[VAR_12];
 VAR_4[VAR_12] = VAR_10;

 return VAR_10;
}
