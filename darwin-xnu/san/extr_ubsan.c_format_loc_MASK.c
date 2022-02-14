
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct san_src_loc {char* filename; int line; int col; } ;


 int VAR_0 ;
 size_t FUNC_0 (char*,size_t,char*,char*,int,int) ;

__attribute__((used)) static size_t
FUNC_1(struct san_src_loc *VAR_1, char *VAR_2, size_t VAR_3)
{
 return FUNC_0(VAR_2, VAR_3, "  loc: %s:%d:%d\n",
   VAR_1->filename,
   VAR_1->line & ~VAR_0,
   VAR_1->col
  );
}
