
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t word ;
struct TYPE_8__ {int length; scalar_t__ info; } ;
struct TYPE_7__ {TYPE_1__* parms; } ;
struct TYPE_6__ {int length; scalar_t__ info; } ;
typedef TYPE_2__ API_SAVE ;
typedef TYPE_3__ API_PARSE ;



__attribute__((used)) static void FUNC_0(API_SAVE *VAR_0, API_PARSE *VAR_1)
{
  word VAR_2;

  VAR_2 = 0;
  do
  {
    VAR_1[VAR_2].info = VAR_0->parms[VAR_2].info;
    VAR_1[VAR_2].length = VAR_0->parms[VAR_2].length;
  } while (VAR_0->parms[VAR_2++].info);
}
