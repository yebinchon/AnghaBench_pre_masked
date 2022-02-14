
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_6__ {char* data; } ;
typedef TYPE_1__* StringInfo ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int,char*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(StringInfo *VAR_0, int *VAR_1,
          StringInfo *VAR_2, bool *VAR_3,
          StringInfo *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  char *VAR_7 = VAR_0[VAR_6]->data;
  int32 VAR_8 = VAR_1[VAR_6];
  bool VAR_9 = 0;
  char *VAR_10 = VAR_2[VAR_6]->data;
  StringInfo VAR_11 = VAR_4[VAR_6];

  VAR_9 = FUNC_1(VAR_7, VAR_8, VAR_10,
             VAR_11);

  VAR_3[VAR_6] = VAR_9;

  FUNC_0();
 }
}
