
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clocksource {char* name; unsigned long rating; int flags; int mask; int disable; int enable; int read; } ;
struct sh_cmt_priv {struct clocksource cs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct clocksource*) ;
 int FUNC_2 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct sh_cmt_priv *VAR_4,
           char *VAR_5, unsigned long VAR_6)
{
 struct clocksource *VAR_7 = &VAR_4->cs;

 VAR_7->name = VAR_5;
 VAR_7->rating = VAR_6;
 VAR_7->read = VAR_3;
 VAR_7->enable = VAR_2;
 VAR_7->disable = VAR_1;
 VAR_7->mask = FUNC_0(sizeof(unsigned long) * 8);
 VAR_7->flags = VAR_0;
 FUNC_2("sh_cmt: %s used as clock source\n", VAR_7->name);
 FUNC_1(VAR_7);
 return 0;
}
