
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* controlurl; char* eventsuburl; char* scpdurl; char* servicetype; } ;
struct IGDdatas {char* cureltname; TYPE_1__ tmp; int level; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (char*,char const*,int) ;

void FUNC_2(void * VAR_1, const char * VAR_2, int VAR_3)
{
 struct IGDdatas * VAR_4 = (struct IGDdatas *)VAR_1;
 if(VAR_3 >= VAR_0)
  VAR_3 = VAR_0-1;
 FUNC_1(VAR_4->cureltname, VAR_2, VAR_3);
 VAR_4->cureltname[VAR_3] = '\0';
 VAR_4->level++;
 if( (VAR_3==7) && !FUNC_0(VAR_2, "service", VAR_3) ) {
  VAR_4->tmp.controlurl[0] = '\0';
  VAR_4->tmp.eventsuburl[0] = '\0';
  VAR_4->tmp.scpdurl[0] = '\0';
  VAR_4->tmp.servicetype[0] = '\0';
 }
}
