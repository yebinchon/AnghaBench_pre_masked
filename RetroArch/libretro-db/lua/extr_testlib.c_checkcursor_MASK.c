
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef void libretrodb_cursor_t ;


 int FUNC_0 (int *,int ,int,char*) ;
 void* FUNC_1 (int *,int,char*) ;

__attribute__((used)) static libretrodb_cursor_t *FUNC_2(lua_State *VAR_0)
{
 void *VAR_1 = FUNC_1(VAR_0, 1, "RarchDB.Cursor");
 FUNC_0(VAR_0, VAR_1 != ((void*)0), 1, "`RarchDB.Cursor' expected");
 return VAR_1;
}
