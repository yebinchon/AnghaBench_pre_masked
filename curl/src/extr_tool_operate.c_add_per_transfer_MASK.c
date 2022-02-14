
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_transfer {struct per_transfer* prev; struct per_transfer* next; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct per_transfer* FUNC_0 (int,int) ;
 struct per_transfer* VAR_3 ;
 struct per_transfer* VAR_4 ;

__attribute__((used)) static CURLcode FUNC_1(struct per_transfer **VAR_5)
{
  struct per_transfer *VAR_6;
  VAR_6 = FUNC_0(sizeof(struct per_transfer), 1);
  if(!VAR_6)
    return VAR_1;
  if(!VAR_3)

    VAR_4 = VAR_3 = VAR_6;
  else {

    VAR_4->next = VAR_6;

    VAR_6->prev = VAR_4;

    VAR_4 = VAR_6;
  }
  *VAR_5 = VAR_6;
  VAR_2++;
  return VAR_0;
}
