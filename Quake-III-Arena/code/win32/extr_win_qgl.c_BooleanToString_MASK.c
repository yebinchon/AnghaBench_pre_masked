
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLboolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static const char * FUNC_0( GLboolean VAR_2 )
{
 if ( VAR_2 == VAR_0 )
  return "GL_FALSE";
 else if ( VAR_2 == VAR_1 )
  return "GL_TRUE";
 else
  return "OUT OF RANGE FOR BOOLEAN";
}
