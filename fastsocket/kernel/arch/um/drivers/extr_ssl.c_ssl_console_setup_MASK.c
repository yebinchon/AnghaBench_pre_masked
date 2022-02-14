
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {int dummy; } ;
struct console {size_t index; } ;


 int FUNC_0 (struct line*,struct console*) ;
 struct line* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct console *VAR_1, char *VAR_2)
{
 struct line *VAR_3 = &VAR_0[VAR_1->index];

 return FUNC_0(VAR_3, VAR_1);
}
