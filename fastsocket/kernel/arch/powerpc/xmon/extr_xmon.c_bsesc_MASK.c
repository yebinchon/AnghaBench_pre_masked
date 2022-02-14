
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(void)
{
 int VAR_0;

 VAR_0 = FUNC_0();
 switch( VAR_0 ){
 case 'n': VAR_0 = '\n'; break;
 case 'r': VAR_0 = '\r'; break;
 case 'b': VAR_0 = '\b'; break;
 case 't': VAR_0 = '\t'; break;
 }
 return VAR_0;
}
