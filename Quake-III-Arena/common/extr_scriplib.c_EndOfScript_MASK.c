
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {char* filename; int line; int buffer; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (char*,char*) ;

qboolean FUNC_5 (qboolean VAR_6)
{
 if (!VAR_6)
  FUNC_0 ("Line %i is incomplete\n",VAR_4);

 if (!FUNC_4 (VAR_3->filename, "memory buffer"))
 {
  VAR_0 = VAR_2;
  return VAR_1;
 }

 FUNC_2 (VAR_3->buffer);
 if (VAR_3 == VAR_5+1)
 {
  VAR_0 = VAR_2;
  return VAR_1;
 }
 VAR_3--;
 VAR_4 = VAR_3->line;
 FUNC_3 ("returning to %s\n", VAR_3->filename);
 return FUNC_1 (VAR_6);
}
